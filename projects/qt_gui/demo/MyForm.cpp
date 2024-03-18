#include "MyForm.h"

MyForm::MyForm(QWidget *parent) : QWidget(parent) {
    // set parent to this as parent is MyForm object
    label = new QLabel(this);
    label->setGeometry(30,0,50,80);

    lineEdit = new QLineEdit(this);
    lineEdit->setGeometry(30,80,80,20);

    button = new QPushButton(this);
    button->setGeometry(30,110,50,60);
    button->setText("Click");

    // button generates signal, signal, receiver, execution
    this->connect(button, SIGNAL(clicked()), this, SLOT(addTextToLabel()));
}

// 将用户编辑的text添加显示到界面标签上
void MyForm::addTextToLabel(){
   this->label->setText(lineEdit->text());
}



