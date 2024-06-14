#include "calci.h"
#include "ui_calci.h"
#include <QRegularExpression>
#include <QRegularExpressionMatch>



double calcval =0.0;
bool divtrigger =false;
bool multrigger =false;
bool addtrigger =false;
bool subtrigger =false;

calci::calci(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::calci)
{
    ui->setupUi(this);

    ui->display->setText(QString::number(calcval));

    QPushButton *numbutton[10];
    for(int i =0; i<10 ;++i){
        QString butname = "button" + QString::number(i);
        numbutton[i] = calci::findChild<QPushButton*>(butname);
        connect(numbutton[i], SIGNAL(released()),this,
                SLOT(NumPressed()));
    }
}

calci::~calci()
{
    delete ui;
}


void calci::NumPressed(){
    QPushButton *button = (QPushButton *)sender();
    QString butval = button ->text();
    QString displayval = ui->display->text();

    if((displayval.toDouble() == 0) || (displayval.toDouble() == 0.0)){
        ui->display->setText(butval);
    }else{
        QString newVal = displayval + butval;
        double dblnewval =newVal.toDouble();
        ui->display->setText(QString::number(dblnewval, 'g',16));
    }

}

void calci::MathButtonPressed(){
    divtrigger =false;
    multrigger =false;
    addtrigger =false;
    subtrigger =false;
    QString displayval = ui->display->text();
    calcval = displayval.toDouble();
    QPushButton *button =(QPushButton*)sender();
    QString butval =button->text();
    if(QString::compare(butval,"/",Qt::CaseInsensitive)==0){
        divtrigger=true;
    }else if (QString::compare(butval,"*",Qt::CaseInsensitive)==0){
        multrigger=true;
    }else if (QString::compare(butval,"+",Qt::CaseInsensitive)==0){
        addtrigger=true;
    }   else {
        subtrigger=true;
}
    ui->display->setText("");
}

void calci::EqualButton(){
    double solution =0.0;
    QString displayval= ui->display->text();
    double dbldisplayval= displayval.toDouble();
    if (addtrigger|| subtrigger || multrigger || divtrigger){
        if (addtrigger){
            solution = calcval+dbldisplayval;
        }else if (subtrigger){
            solution = calcval-dbldisplayval;
    }else         if (multrigger){
            solution = calcval*dbldisplayval;
    }else {
        solution = calcval/dbldisplayval;
    }
    }
    ui->display->setText(QString::number(solution));
}

void calci::ChangeNumbersign(){
    QString displayval =ui->display->text();
    QRegularExpression reg("[-]?[0-9.]*");

    QRegularExpressionMatch match = reg.match(displayval);
    if (match.hasMatch())
        {
    double dbldisplayval =displayval.toDouble();
        double dbldisplayvalsign = -1* dbldisplayval;
        ui->display->setText(QString::number(dbldisplayvalsign));

    }
}



