#ifndef SQXP_H
#define SQXP_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QTcpSocket>
#include <QDataStream>
#include <QJsonObject>
#include <QJsonDocument>

class Sqxp : public QObject{
    Q_OBJECT
public:
    explicit Sqxp(QObject *parent = 0) :QObject(parent){
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
//    static void createCacheDirectory(QString cacheDir = "./cache"){
//        //CreateLocalCacheDirectory
//        if(!QDir().exists(cacheDir)) {
//            if(!QDir().mkdir(cacheDir)) {
//                qDebug("%s %d: Error: QDir().mkdir(appdir)",__FILE__,__LINE__);
//                QMessageBox::warning(0,"Error","Cache Directory could not be created.");
//                exit(EXIT_FAILURE);
//            }
//        }
//    }
};


#endif // SQXP_H
