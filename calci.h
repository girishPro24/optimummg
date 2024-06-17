#ifndef CALCI_H
#define CALCI_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class calci;
}
QT_END_NAMESPACE

class calci : public QMainWindow
{
    Q_OBJECT

public:
    calci(QWidget *parent = 0);
    ~calci();

private:
    Ui::calci *ui;


private slots:
    void NumPressed();
   // void numpressed2();
    //void displayoff();
    //void disp();
    void MathButtonPressed();
    void EqualButton();
    void ChangeNumbersign();
    void clear();
    void mem();
    //void clearbutton();

    //void operation();
    //void result();


};
#endif // CALCI_H
