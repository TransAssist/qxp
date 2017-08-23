
#ifndef CIRCLE_H
#define CIRCLE_H

#include <QObject>

class Circle : public QObject{
    Q_OBJECT
public:
    explicit Circle(QObject *parent = 0) :QObject(parent){
        radius = 1;
    }
    explicit Circle(double radius, QObject *parent = 0) : QObject(parent){
        this->radius = radius;
    }
    double getArea(){
        return 3.14 * radius * radius;
    }
    double getRadius(){
        return radius;
    }
private:
    double radius;
signals:
public slots:
};

#endif // CIRCLE_H
