#include <QtCore/QCoreApplication>
#include "testserver.h"
#include "xmlcreator.h"
#include "xmlvalid.h"
#include "xmlestados.h"

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    TestServer *server = new TestServer(3344);
    QObject::connect(server, &TestServer::closed, &app, &QCoreApplication::quit);
    xmlcreator();
    xmlestados();
    //xmlvalid();


    return app.exec();
}
