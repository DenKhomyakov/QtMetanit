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

    // Устанавливаем ограничение по размеру - минимальный размер
    layout->addStrut(100);

    // Добавляем виджеты (кнопки) в контейнер
    layout->addWidget(button1);
    layout->addWidget(button2);
    layout->addWidget(button3);
    layout->addWidget(button4);

    // Устанавливаем растяжение после крайнего виджета
    layout->addStretch(10);

    // Устанавливаем растяжение перед вторым виджетом
    layout->insertStretch(2, 10);

    widget->show();
    return app.exec();
}
