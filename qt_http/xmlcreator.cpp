#include "xmlcreator.h"

xmlcreator::xmlcreator()
{
    QFile xml("moviles.xml");
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

    if (ok) {
        qDebug() << "Conectado OK";

        QSqlQuery query("SELECT * FROM disp_disponibles");

        while (query.next()) {
            writerXml.writeStartElement("movil");
            writerXml.writeAttribute("modelo", query.value(1).toString());
            writerXml.writeEndElement();
        }
        writerXml.writeEndElement();
    } else {
        qDebug() << "Error de conexion";
    }

}
