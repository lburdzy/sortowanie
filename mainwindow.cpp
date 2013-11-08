#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QList>
#include <QDebug>
#include <windows.h>
#include <sort.h>

QList<int> List;
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
    List.append(ui->spinBox->value());
    ui->listWidget->addItem(QString::number(ui->spinBox->value()));
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->listWidget->clear();
    foreach(int i, List)
    {
        ui->listWidget->addItem(QString::number(i));
    }
}


void MainWindow::on_pushButton_4_clicked()
{
    ui->listWidget_2->clear();
    foreach(int i, List)
    {
        ui->listWidget_2->addItem(QString::number(i));
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    for(int i=0; i < ui->spinBox_2->value() ; i++ )
    {
        List.append(rand() % 10000);
    }
//    ui->listWidget_2->clear();
//    foreach(int i, List)
//    {
//        ui->listWidget_2->addItem(QString::number(i));
//    }


}

void MainWindow::on_pushButton_6_clicked()
{
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
    ui->listWidget_3->clear();
    foreach(int i, List)
    {
        ui->listWidget_3->addItem(QString::number(i));
    }
}

void MainWindow::on_pushButton_7_clicked()
{
    ui->listWidget_4->clear();
    foreach(int i, tmplist)
    {
        ui->listWidget_4->addItem(QString::number(i));
    }
}

void MainWindow::on_pushButton_8_clicked()
{
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
    tmplist=indexing(List);
}

void MainWindow::on_pushButton_10_clicked()
{
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
