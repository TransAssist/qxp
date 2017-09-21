#ifndef QXP_H
#define QXP_H


#include <QObject>

class Qxp : public QObject{
    Q_OBJECT
public:
    explicit Qxp(QObject *parent = 0);
    virtual ~Qxp();
    QString hello(const QString str);
};


#endif // QXP_H
