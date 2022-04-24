#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);


    std::string message = "第1次提交";
}

Widget::~Widget()
{
    delete ui;
}
