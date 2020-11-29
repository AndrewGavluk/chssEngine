//#include <memory>

#include <QApplication>
#include <QLabel>

int main (int argc, char** argv)
{
    QApplication game(argc, argv);
    //std::unique_ptr<>

    QLabel *label = new QLabel("Hello World");
    label->show();

    return game.exec();
}