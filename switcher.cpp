#include "switcher.h"
#include "ui_switcher.h"
#include <stdio.h>
#include <QString>
#include <QComboBox>
#include <QMessageBox>




Switcher::Switcher(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Switcher)
{
    ui->setupUi(this);
    ui->diskPath->setText("/dev/disk");

    warning();

    ui->pushButton->setEnabled(false);
    ui->comboBox->setEnabled(false);



}


Switcher::~Switcher()
{
    delete ui;


}

void Switcher::warning()
{


    QMessageBox warning;
    warning.setWindowTitle("Switcher");
    warning.setInformativeText("WARNING!\n\nIf there are multiple partitions on your BDEMU disk,  make sure the BDEMU partition is the first one (on top).\n\nPlease look up the path for your BDEMU disk in the Disk Utility\n\nA big thank you goes out to RDX for helping me code this app and motivating me!\n\n-Marcocanc");
    warning.setStandardButtons(QMessageBox::Ok);
    warning.setDefaultButton(QMessageBox::Ok);

    int war = warning.exec();

    switch (war)
    {
      case QMessageBox::Ok:
          break;

    }
}

 void Switcher::on_logicBt_clicked()
 {   ui->statusBox->clear();
     ui->comboBox->clear();
     QString path = ui->diskPath->text();


    FILE *fp;
    unsigned char gameslots;
    unsigned char defaultslot;
    char initP[1];
    char gid[10];
    char gname[32];

    const char* pathopen = path.toStdString().c_str();
    fp = fopen(pathopen,"r");
    if (fp!=NULL)
    {
        fseek(fp, 0x20000, SEEK_SET);
        fread(&initP, 1, 1, fp);
        if(initP[0]==0x42){
            ui->pushButton->setEnabled(true);
            ui->comboBox->setEnabled(true);
            ui->statusBox->setText("BDEMU recognized!");
        fseek(fp, 0x2000B, SEEK_SET);
        fread(&gameslots, 1, 1, fp);
        gid[10] = 0;
        gname[32] = 0;
        ui->noSlots->setText(QString::number(gameslots));
        for(int i=0;i<gameslots;i++)
            {
                fseek(fp, 0x40198+(0x200*i), SEEK_SET);
                fread(gname, 1, 32, fp);

                if (gname[0] == 0X20)
                {
                        fseek(fp, 0x40100+(0x200*i), SEEK_SET);
                        fread(gid, 1, 10, fp);
                        ui->comboBox->addItem(QString::fromStdString(gid));

                }
                else{ui->comboBox->addItem(QString::fromStdString(gname));}



            }

        fseek(fp, 0x2000F, SEEK_SET);
        fread(&defaultslot, 1, 1, fp);
        fclose(fp);
       ui->defaultBox->setText(ui->comboBox->itemText(defaultslot));
}else {ui->comboBox->clear();ui->defaultBox->clear();ui->noSlots->clear(); ui->comboBox->setEnabled(false);ui->pushButton->setEnabled(false); ui->statusBox->setText("Not a BDEMU drive!");fclose(fp);}
    }else {ui->comboBox->clear();ui->defaultBox->clear();ui->noSlots->clear(); ui->comboBox->setEnabled(false);ui->pushButton->setEnabled(false); ui->statusBox->setText("Not a BDEMU drive!");fclose(fp);}

}
void Switcher::on_pushButton_clicked()
{
    QString path = ui->diskPath->text();
    FILE *fp;
    unsigned char selGame = (unsigned char)ui->comboBox->currentIndex();
    const char* pathopen = path.toStdString().c_str();
    char initW[1];
    initW[1]=0;
    fp = fopen(pathopen , "w");
    if (fp!=NULL)
    {


    fseek(fp, 0x2000F, SEEK_SET);
    fwrite(&selGame, 1, 1, fp);

fclose(fp);

QMessageBox done;
done.setWindowTitle("BDEMU Switcher");
done.setInformativeText("Default Slot Set!");
done.setStandardButtons(QMessageBox::Ok);
done.setDefaultButton(QMessageBox::Ok);
int ret = done.exec();

switch (ret)
{
  case QMessageBox::Ok:
    ui->comboBox->clear();
        on_logicBt_clicked();
      break;
}
        }
}




