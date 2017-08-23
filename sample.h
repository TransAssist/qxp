#ifndef SAMPLE_H
#define SAMPLE_H

#include <QObject>
#include <QString>

class Sample : public QObject{
    Q_OBJECT
public:
    explicit Sample(QObject *parent = 0) :QObject(parent){}
    //	echo method
    QString echo(const QString str);
    //	calc method
    int plus(int val);
    int minus(int val);
    //	value method
    int value();
    void value(int val);
private :
    int m_value[3];
signals:
public slots:
};

#endif // SAMPLE_H
