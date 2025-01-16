#include <QApplication>
#include <QWidget>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv); // Объект приложения

    QWidget* widget = new QWidget();
    widget->setWindowTitle("Button icon");
    widget->setMinimumHeight(100);
    widget->setMinimumWidth(300);

    QPushButton* button = new QPushButton("Click me!", widget);
    button->setGeometry(10, 10, 100, 25);
    button->setIcon(QIcon("D:\\1.jpg"));

    widget->show();
    return app.exec();
}
