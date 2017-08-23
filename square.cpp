#include "square.h"

Square::Square(QObject *parent) :QObject(parent){
    side = 1;
}

Square::Square(double side, QObject *parent) :QObject(parent){
    this->side = side;
}

double Square::getSide(){
    return side;
}

double Square::getArea(){
    return side * side;
}

double Square::getPerimeter(){
    return 4 * side;
}
