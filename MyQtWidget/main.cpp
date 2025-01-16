#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QMessageBox>

void onClick();

int main(int argc, char *argv[])
{
    QApplication app(argc, argv); // Объект приложения

    QWidget* widget = new QWidget();
    widget->setWindowTitle("QPushButton");
    widget->setMinimumHeight(300);
    widget->setMinimumWidth(300);

    QPushButton* button = new QPushButton("Click me", widget);

    // Устанавливаем для события clicked обработчик onClick
    QObject::connect(button, &QPushButton::clicked, onClick);

    widget->show();
    return app.exec();
}

void onClick() {
    QMessageBox* messageBox = new QMessageBox();
    messageBox->setWindowTitle("New window");
    messageBox->setMinimumHeight(150);
    messageBox->setMinimumWidth(150);
    messageBox->setText("Hello METANIT.COM");
    messageBox->show();
    //messageBox->exec();
}
