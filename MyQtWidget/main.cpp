#include <QApplication>
#include <QWidget>
#include <Qlabel>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv); // Объект приложения

    QWidget widget;

    widget.setWindowTitle("Qt на METANIT.COM");
    widget.setMinimumHeight(300);
    widget.setMinimumWidth(300);

    QLabel label{&widget};
    label.setText("Hello METANIT.COM");

    widget.show();
    return app.exec();
}
