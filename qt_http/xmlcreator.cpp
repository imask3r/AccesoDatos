#include "xmlcreator.h"

xmlcreator::xmlcreator()
{
    QFile xml("moviles.xml");
    system("mv moviles.xml /srv/www/htdocs/websocket/");//Lo transporto a esta dirección para poder recoger de forma más fácil los datos en el javascript
    qDebug() << "XML: moviles.xml creado";
    xml.open(QIODevice::WriteOnly);

    QXmlStreamWriter writerXml(&xml);
    writerXml.setAutoFormatting(true);
    writerXml.writeStartDocument();
    writerXml.writeStartElement("moviles");

    /* -------- PARTE SQL ------- */

    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL");
    db.setHostName("127.0.0.1");
    db.setPort(5432);
    db.setDatabaseName("svtecnico");
    db.setUserName("usuario");
    db.setPassword("usuario");
    bool ok = db.open();
    QString listado[1000];
    int i = 0;

    if (ok) {
        qDebug() << "Conectado OK";

        QSqlQuery query("SELECT * FROM disp_disponibles");

        while (query.next()) {
            i++;
            //for (int i=0 ; i <= 0; i++) {
            listado[i] = query.value(1).toString();
            qDebug() << listado[i];
            //}
            //qDebug() << listado[i];
            //qDebug() << query.value(1).toString();
            writerXml.writeStartElement("movil");
            writerXml.writeAttribute("modelo", query.value(1).toString());
            writerXml.writeEndElement();
        }
        writerXml.writeEndElement();
    } else {
        qDebug() << "Error de conexion";
    }

}

