#include <QtSql>
#include <QSqlQuery>
#include <QDebug>
#include "xmlcreator.h"


xmlcreator::xmlcreator()
{
    //QString modelos[];

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
            //WIP: Rellenar array
            qDebug() << "Modelo: " << query.value(1).toString();
        }
    } else {
        qDebug() << "Error de conexion";
    }


    QFile xml("moviles.xml");
    qDebug() << "XML: moviles.xml creado";
    xml.open(QIODevice::WriteOnly);

    QXmlStreamWriter writerXml(&xml);
    writerXml.setAutoFormatting(true);
    writerXml.writeStartDocument();

    /* SUSTUTUIR ESTO Y RELLENARLO CON DATOS DE LA BASE DE DATOS */
    writerXml.writeStartElement("moviles");

    writerXml.writeStartElement("movil");
    writerXml.writeAttribute("modelo", "iPhone 8");
    writerXml.writeEndElement();

    writerXml.writeEndElement();


}
