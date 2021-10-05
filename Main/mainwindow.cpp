#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->widget->setDialogText(QString("Чтот не так"));
    QMessageBox *msg = new QMessageBox(this);
    msg->setWindowTitle("Заголовок");
    msg->setText("Текст");
    ui->widget->setDialogText(msg);
}

MainWindow::~MainWindow()
{
    delete ui;
}

