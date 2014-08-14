#include <QApplication>
#include <QDir>
#include <assert.h>
#include "mainwindow.h"

int main(int argc, char *argv[])
{  
#ifdef WIN32
#elif MacOSX
    QDir dir(argv[0]);
    assert(dir.cdUp());
    assert(dir.cdUp());
    assert(dir.cd("Plugins"));
    QCoreApplication::setLibraryPaths(QStringList(dir.absolutePath()));
    QCoreApplication::libraryPaths().join(",").toUtf8().data();
#endif

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
