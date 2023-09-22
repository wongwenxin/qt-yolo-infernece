#include <QApplication>
#include <QDebug>
#include "homepage.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    HomePage homepage;
    homepage.show();
    return a.exec();
}
