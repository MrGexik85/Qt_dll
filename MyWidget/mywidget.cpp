#include "mywidget.h"

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent)
{
    QHBoxLayout *layout = new QHBoxLayout();

    msg = new QMessageBox(this);
    msg->setWindowTitle("Сообщение");

    btn = new QPushButton("Клацк", this);
    connect(btn, SIGNAL(clicked()), this, SLOT(onBtnClicked()));

    check = new QCheckBox(this);

    layout->addWidget(btn);
    layout->addWidget(check);

    this->setLayout(layout);

    qDebug() << "myWidget(constructor): Success";
}

void MyWidget::setDialogText(QString text) {
    msg->setText(text);
    qDebug() << "myWidget(setDialogText): Success set text: " << text;
}

void MyWidget::setDialogText(QMessageBox *msg) {
    delete this->msg;
    this->msg = msg;
    qDebug() << "myWidget(setDialogText): Success set text as messageBox";
}

MyWidget::~MyWidget() {
    qDebug() << "myWidget(destructor): Success";
}


/* SLOTS */
void MyWidget::onBtnClicked() {
    bool checkValue = check->isChecked();
    if(checkValue) {
        qDebug() << "All good, all right";
        emit correctEvent();
    } else {
        msg->exec();
    }
}
