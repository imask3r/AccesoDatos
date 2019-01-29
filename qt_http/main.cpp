#include <QtCore/QCoreApplication>
#include "testserver.h"
#include "xmlcreator.h"
#include "xmlvalid.h"

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    TestServer *server = new TestServer(3344);
    QObject::connect(server, &TestServer::closed, &app, &QCoreApplication::quit);
    xmlcreator();
    //xmlvalid();

    return app.exec();
}
