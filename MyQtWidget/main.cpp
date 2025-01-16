#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>

void onClick();

QPushButton* button = nullptr;
int count { 0 };

int main(int argc, char *argv[])
{
    QApplication app(argc, argv); // Объект приложения

    QWidget* widget = new QWidget();
    widget->setWindowTitle("QPushButton");
    widget->setMinimumHeight(100);
    widget->setMinimumWidth(300);

    QLabel* label = new QLabel("Нажатий сделано:");

    button = new QPushButton("Click me", widget);

    QVBoxLayout* layout = new QVBoxLayout();
    widget->setLayout(layout);

    layout->addWidget(label);
    layout->addWidget(button);

    // Устанавливаем для события clicked обработчик onClick - объект отслеживания, сигнал/событие, обработчик
    QObject::connect(button, &QPushButton::clicked, onClick);

    widget->show();
    return app.exec();
}

void onClick() {
    button->setText(QString::number(++count));
}
