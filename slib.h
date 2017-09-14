#ifndef SLIB_H
#define SLIB_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QTcpSocket>
#include <QDataStream>
#include <QJsonObject>
#include <QJsonDocument>

class Slib : public QObject{
    Q_OBJECT
public:
    explicit Slib(QObject *parent = 0) :QObject(parent){
    }
    //	echo method
    static QString echo(const QString str){
        return "Echo:"+str;
    }
    static void sendTcpSocketExample(QString host,int port){
        QTcpSocket *tcpSocket = new QTcpSocket();
        tcpSocket->abort();
        tcpSocket->connectToHost(host, port);
        QJsonObject jsonObjSocket;
        jsonObjSocket.insert("result","ok");
        jsonObjSocket.insert("TcpSocketExample", QDateTime::currentDateTime().toString());
        QByteArray textData = QJsonDocument(jsonObjSocket).toJson(QJsonDocument::Compact);
        tcpSocket->write(textData);
    }
};

#endif // SLIB_H
