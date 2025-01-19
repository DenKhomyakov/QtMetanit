#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QMessageBox>

void onClicked();

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QWidget* widget = new QWidget();
    widget->setWindowTitle("Signals and slots");
    widget->setMinimumHeight(150);
    widget->setMinimumWidth(450);

    QPushButton* button = new QPushButton("Click me!", widget);
    button->setGeometry(10, 10, 100, 25);

    QObject::connect(button, &QPushButton::clicked, onClicked);

    widget->show();

    return a.exec();
}

void onClicked() {
    QMessageBox* messageBox = new QMessageBox();
    messageBox->setWindowTitle("Message");
    messageBox->setMinimumSize(100, 100);
    messageBox->setText("This is Qt");
    messageBox->show();
}
