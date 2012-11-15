#include <QApplication>
#include <QDeclarativeView>
#include "qmlapplicationviewer.h"

Q_DECL_EXPORT int main(int argc, char *argv[])
{
    QScopedPointer<QApplication> app(createApplication(argc, argv));

    QDeclarativeView viewer;
    viewer.resize(600, 600);
    viewer.setMinimumSize(viewer.size());
    viewer.setMaximumSize(viewer.size());
    viewer.setSource(QUrl("qrc:/main.qml"));
    viewer.show();

    return app->exec();
}
