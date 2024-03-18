#include <QWidget>
#include <QApplication>

#include "MyForm.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    MyForm* form = new MyForm;
    form->show();
    return app.exec();
}
