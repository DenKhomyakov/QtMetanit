#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv); // Объект приложения

    // Создаём виджет
    QWidget* widget = new QWidget();
    widget->setWindowTitle("My widget");
    widget->setMinimumHeight(300);
    widget->setMinimumWidth(300);

    // Создаём набор вложенных кнопок
    QPushButton* button1 = new QPushButton("Button 1");
    QPushButton* button2 = new QPushButton("Button 2");
    QPushButton* button3 = new QPushButton("Button 3");
    QPushButton* button4 = new QPushButton("Button 4");

    // Создаём контейнер для расположения виджетов по вертикали
    QVBoxLayout* layout = new QVBoxLayout();
    widget->setLayout(layout);

    // Добавляем виджеты (кнопки) в контейнер
    layout->addWidget(button1);
    layout->addSpacing(100);
    layout->addWidget(button2);
    layout->addSpacing(100);
    layout->addWidget(button3);
    layout->addWidget(button4);
    layout->addSpacing(50);

    widget->show();
    return app.exec();
}
