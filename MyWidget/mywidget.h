#ifndef MYWIDGET_H
#define MYWIDGET_H

#include "MyWidget_global.h"
#include <QPushButton>
#include <QCheckBox>
#include <QHBoxLayout>
#include <QDebug>
#include <QMessageBox>

class MYWIDGET_EXPORT MyWidget : public QWidget
{
    Q_OBJECT
private:
    QMessageBox *msg;
    QPushButton *btn;
    QCheckBox *check;

public:
    explicit MyWidget(QWidget *parent = nullptr);
    ~MyWidget();
    void setDialogText(QString text);
    void setDialogText(QMessageBox *msg);

private slots:
    void onBtnClicked();

signals:
    void correctEvent();
};

#endif // MYWIDGET_H
