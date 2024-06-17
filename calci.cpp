#include "calci.h"
#include "ui_calci.h"
#include <QRegularExpression>
#include <QRegularExpressionMatch>



double calcval =0.0;
double calcval2 =0.0;
double calcval3 =0.0;
double memoo=0.0;
double input=0.0 ;
bool divtrigger =false;
bool multrigger =false;
bool addtrigger =false;
bool subtrigger =false;
bool equaltrigger = false;
bool cleartrigger = false;
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
    connect(ui->clear,SIGNAL(released()), this,
            SLOT(clear()));
    connect(ui->change,SIGNAL(released()),this,
            SLOT(ChangeNumbersign()));
    connect(ui->equal,SIGNAL(released()), this,
            SLOT(mem()));
    connect(ui->clear,SIGNAL(released()), this,
            SLOT(mem()));



}

calci::~calci()
{
    delete ui;
}


void calci::clear(){
    cleartrigger = false ;

    double calcval =0.0;
    double calcval2 =0.0;
    double calcval3 =0.0;



    QPushButton *button =(QPushButton*)sender();
    QString butval =button->text();
    if(QString::compare(butval,"clear",Qt::CaseInsensitive)==0){
        cleartrigger = true;
        ui->display->setText(QString::number(calcval));

        ui->display3->setText(QString::number(calcval3));



    }else {

    }


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
    equaltrigger = false;
    double solution =0.0;
    QString displayval= ui->display->text();
    QString displayvalop= ui->display2->text();
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
    ui->display6->setText(QString::number(solution));
    QPushButton *button =(QPushButton*)sender();
    QString butval =button->text();
    if(QString::compare(butval,"equal",Qt::CaseInsensitive)==0){
        equaltrigger =true;
    }







    }



void calci::mem(){

    QString Inputresult = ui->display4->text();
    input = Inputresult.toDouble();
    QByteArray result(Inputresult.toLocal8Bit());


    //if (cleartrigger){
        //QString addresult = ui->display4->text();


                              //result.append(addresult.toLocal8Bit());

    //}

    for(int i = 0;i<result.length();i++){
        qInfo().noquote()<<result.at(i);
        //ui->display6->setText(qInfo().noquote()<<result.at(i));


    QString ope = ui->display2->text();
    QByteArray opera(ope.toLocal8Bit());
    ui->display5->setText(opera);

    //if (cleartrigger){
        //QString opresult = ui->display2->text();


        //opera.append(opresult.toLocal8Bit());

    //}


    for(int i = 0;i<opera.length();i++){

       qInfo().nospace()<<opera.at(i);
        //ui->display6->setText(opera.at(i).t);}
}

    }}

    //QString lastresult = ui->display6->text();




//create array to store the values whenever the clear is triggered
//a text storage??
// required database??





//}



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

