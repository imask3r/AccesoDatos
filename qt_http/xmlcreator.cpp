#include "xmlcreator.h"
#include <QDebug>

xmlcreator::xmlcreator()
{
    /*nt x;

    QString modelos[6];
    //QString modelo1, modelo2, modelo3, modelo4, modelo5;

    modelos[1] = "iPhone 8";
    modelos[2] = "BQ";
    modelos[3] = "Huawei";
    modelos[4] = "Nokia";
    modelos[5] = "Samsung";*/

    QFile xml("moviles.xml");
    qDebug() << "XML: moviles.xml creado";
    xml.open(QIODevice::WriteOnly);

    QXmlStreamWriter writerXml(&xml);
    writerXml.setAutoFormatting(true);
    writerXml.writeStartDocument();

    writerXml.writeStartElement("moviles");

    //for (x = 0 ; x<=modelos[] ; modelos[]++) {
        writerXml.writeStartElement("movil");
        writerXml.writeAttribute("modelo", "iPhone 8");
        writerXml.writeEndElement();
    //}

    writerXml.writeEndElement();



}
