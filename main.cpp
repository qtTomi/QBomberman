#include <QApplication>
#include <QDeclarativeView>
#include "qmlapplicationviewer.h"

Q_DECL_EXPORT int main(int argc, char *argv[])
{
    QScopedPointer<QApplication> app(createApplication(argc, argv));

    QDeclarativeView viewer;
    viewer.setSource(QUrl("qrc:/main.qml"));
    viewer.show();

    return app->exec();
}
