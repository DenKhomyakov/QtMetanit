#include <QApplication>
#include <QWidget>
#include <Qlabel>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv); // Объект приложения

    // Первый способ управления компоновкой
    QWidget* widget1 = new QWidget;
    QVBoxLayout* layout1 = new QVBoxLayout(widget1);

    // Второй способ управления компоновкой
    QWidget* widget2 = new QWidget;
    QVBoxLayout* layout2 = new QVBoxLayout();
    widget2->setLayout(layout2);

    return app.exec();
}
