#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QList>
#include <QDebug>
#include <windows.h>
#include <sort.h>

QList<int> List;
QList<int> indexy;
QList<int> tmplist;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    //add 1
    List.append(ui->spinBox->value());
    indexy.append(0+indexy.size());
    ui->listWidget->addItem(QString::number(ui->spinBox->value()));
}


void MainWindow::on_pushButton_2_clicked()
{
    //refresh
    ui->listWidget->clear();
    foreach(int i, List)
    {
        ui->listWidget->addItem(QString::number(i));
    }
}


void MainWindow::on_pushButton_4_clicked()
{
    //refresh
    ui->listWidget_2->clear();
    foreach(int i, List)
    {
        ui->listWidget_2->addItem(QString::number(i));
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    //rand
    for(int i=0; i < ui->spinBox_2->value() ; i++ )
    {
        List.append(rand() % 10000);
        indexy.append(i);
        //List.append(srand(time(NULL)) % 10000);
    }
//    ui->listWidget_2->clear();
//    foreach(int i, List)
//    {
//        ui->listWidget_2->addItem(QString::number(i));
//    }


}

void MainWindow::on_pushButton_6_clicked()
{
    //qsort
    int time0, time1, time2;
    time0 = GetTickCount();
    tmplist=sort1(List);
    /*ui->listWidget_4->clear();
    foreach(int i, tmplist)
    {
        ui->listWidget_4->addItem(QString::number(i));
    }*/
    time1=GetTickCount();
    time2=time1-time0;
    ui->lineEdit->setText(QString::number(time2));
}

void MainWindow::on_pushButton_5_clicked()
{
    //refresh
    ui->listWidget_3->clear();
    foreach(int i, List)
    {
        ui->listWidget_3->addItem(QString::number(i));
    }
}

void MainWindow::on_pushButton_7_clicked()
{
    //jakis refresh
    ui->listWidget_4->clear();
    foreach(int i, tmplist)
    {
        ui->listWidget_4->addItem(QString::number(i));
    }
}

void MainWindow::on_pushButton_8_clicked()
{
    //SELECTION SORT
    int time0, time1, time2;
    time0 = GetTickCount();
    tmplist=selection_sort(List, List.size());
    /*ui->listWidget_4->clear();
    foreach(int i, tmplist)
    {
        ui->listWidget_4->addItem(QString::number(i));
    }*/
    time1=GetTickCount();
    time2=time1-time0;
    ui->lineEdit->setText(QString::number(time2));
}


void MainWindow::on_pushButton_9_clicked()
{
    indexy=indexing(List, indexy, List.size());
}

void MainWindow::on_pushButton_10_clicked()
{
    //INSERTION SORT
    int time0, time1, time2;
    time0 = GetTickCount();
    tmplist=insertion_sort(List, List.size());
    /*ui->listWidget_4->clear();
    foreach(int i, tmplist)
    {
        ui->listWidget_4->addItem(QString::number(i));
    }*/
    time1=GetTickCount();
    time2=time1-time0;
    ui->lineEdit->setText(QString::number(time2));
}

void MainWindow::on_pushButton_11_clicked()
{
    int time0, time1, time2;
    time0 = GetTickCount();
    tmplist=isort(List, indexy, List.size());
    /*ui->listWidget_4->clear();
    foreach(int i, tmplist)
    {
        ui->listWidget_4->addItem(QString::number(i));
    }*/
    time1=GetTickCount();
    time2=time1-time0;
    ui->lineEdit->setText(QString::number(time2));
}
