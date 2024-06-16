#include "calci.h"
#include "ui_calci.h"
#include <QRegularExpression>
#include <QRegularExpressionMatch>



double calcval =0.0;
double calcval2 =0.0;
double calcval3 =0.0;
bool divtrigger =false;
bool multrigger =false;
bool addtrigger =false;
bool subtrigger =false;

calci::calci(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::calci)
{
    ui->setupUi(this);
    disconnect(ui->add,SIGNAL(clicked()), this,
               SLOT(NumPressed()));
    disconnect(ui->multiply,SIGNAL(clicked()), this,
               SLOT(NumPressed()));
    disconnect(ui->divide,SIGNAL(clicked()), this,
               SLOT(NumPressed()));
    disconnect(ui->subtract,SIGNAL(clicked()), this,
               SLOT(NumPressed()));


    ui->display->setText(QString::number(calcval));
    ui->display3->setText(QString::number(calcval2));

    QPushButton *numbutton[10];
    for(int i =0; i<10 ;++i){
        QString buttname = "button" + QString::number(i);
        numbutton[i] = calci::findChild<QPushButton*>(buttname);
        connect(numbutton[i], SIGNAL(released()),this,
                SLOT(NumPressed()));

}




    connect(ui->add,SIGNAL(released()), this,
            SLOT(MathButtonPressed()));

    connect(ui->subtract,SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->divide,SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->multiply,SIGNAL(released()), this,
            SLOT(MathButtonPressed()));
    connect(ui->equal,SIGNAL(released()), this,
            SLOT(EqualButton()));



}

calci::~calci()
{
    delete ui;
}

void calci::MathButtonPressed(){
    divtrigger =false;
    multrigger =false;
    addtrigger =false;
    subtrigger =false;

    QString disp = ui->display->text();
    QString displayval = ui->display2->text();
    calcval2 = disp.toDouble();
    calcval = displayval.toDouble();
    QPushButton *button =(QPushButton*)sender();
    QString butval =button->text();
    if(QString::compare(butval,"div",Qt::CaseInsensitive)==0){
        divtrigger=true;
    }else if (QString::compare(butval,"mul",Qt::CaseInsensitive)==0){
        multrigger=true;
    }else if (QString::compare(butval,"add",Qt::CaseInsensitive)==0){
        addtrigger=true;

        }
   else {
        subtrigger=true;
}
    ui->display3->setText(QString::number(calcval2, 'g',4));
    ui->display->setText("");
    ui->display2->setText(butval);

}


void calci::NumPressed(){
    QPushButton *button = (QPushButton *)sender();
    QString butval = button ->text();
    QString displayval = ui->display->text();
if((displayval.toDouble() == 0) || (displayval.toDouble() == 0.0)){
ui->display->setText(butval);
} else {
QString newVal = displayval + butval;
        double dblnewval =newVal.toDouble();
            ui->display->setText(QString::number(dblnewval, 'g',4));
}
}
void calci::EqualButton(){
    double solution =0.0;
    QString displayval= ui->display->text();
    QString displayval2 = ui->display3->text();
    double dbldisplayval2 = displayval2.toDouble();
    double dbldisplayval1 = displayval.toDouble();
    if (addtrigger|| subtrigger || multrigger || divtrigger){
        if (addtrigger){
            solution = dbldisplayval2+dbldisplayval1;
        }else if (subtrigger){
            solution = dbldisplayval2-dbldisplayval1;
    }else         if (multrigger){
            solution = dbldisplayval2*dbldisplayval1;
    }else if(divtrigger) {
        solution = dbldisplayval2/dbldisplayval1;
    }
    }
    ui->display4->setText(QString::number(solution));

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











