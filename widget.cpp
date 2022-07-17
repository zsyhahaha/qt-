#include "widget.h"
#include "ui_widget.h"
#include"mythread.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //先创建子线程对象
    myThread * thread1 = new myThread;
    Bubble * thread2 = new Bubble;
    Quick * thread3 = new Quick;

    connect(this,&Widget::starting,thread1,&myThread::recvNum);
    //启动子线程
    connect(ui->startBtn,&QPushButton::clicked,this,[=](){
        emit starting(10000);
        thread1->start();
    });
    connect(thread1,&myThread::sendArray,thread2,&Bubble::recvArray);
    connect(thread1,&myThread::sendArray,thread3,&Quick::recvArray);
    //接收子线程信号
    connect(thread1,&myThread::sendArray,this,[=](QVector<int> list){
        thread2->start();
        thread3->start();
        for(int i = 0;i < list.size(); i++)
        {
            ui->randList->addItem(QString::number(list.at(i)));
        }
    });
    connect(thread2,&Bubble::finish,this,[=](QVector<int> list){
        for(int i = 0;i < list.size(); i++)
        {
            ui->bubbleList->addItem(QString::number(list.at(i)));
        }
    });
    connect(thread3,&Quick::finish,this,[=](QVector<int> list){
        for(int i = 0;i < list.size(); i++)
        {
            ui->quickList->addItem(QString::number(list.at(i)));
        }
    });
}

Widget::~Widget()
{
    delete ui;
}
