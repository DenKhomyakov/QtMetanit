#include <QApplication>
#include <QMessageBox>
#include "mywidget.h"

void onClicked();

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MyWidget* widget = new MyWidget();

    QObject::connect(widget, &MyWidget::widgetClicked, onClicked);

    widget->show();

    return a.exec();
}

void onClicked() {
    QMessageBox* messageBox = new QMessageBox();
    messageBox->setWindowTitle("Message");
    messageBox->setMinimumSize(100, 100);
    messageBox->setText("Widget Clicked");
    messageBox->show();
}
