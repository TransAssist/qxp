#ifndef SQUARE_H
#define SQUARE_H

#include <QObject>

class Square : public QObject{
    Q_OBJECT
public:
    explicit Square(QObject *parent = 0);
    explicit Square(double side, QObject *parent = 0);
    double getPerimeter();
    double getArea();
    double getSide();
private:
    double side;
signals:
public slots:
};

#endif // SQUARE_H
