#ifndef SWITCHER_H
#define SWITCHER_H

#include <QMainWindow>

namespace Ui {
    class Switcher;
}

class Switcher : public QMainWindow
{
    Q_OBJECT

public:
    explicit Switcher(QWidget *parent = 0);
    ~Switcher();

private:
    Ui::Switcher *ui;

private slots:

    void on_logicBt_clicked();
    void on_pushButton_clicked();
    void warning();


};

#endif // SWITCHER_H
