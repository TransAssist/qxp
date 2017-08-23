#include "sample.h"

QString Sample::echo(const QString str){
    return "Echo:"+str;
}

int Sample::plus(int val){
    m_value[0]=m_value[2];
    m_value[1]=val;
    m_value[2]=m_value[0]+m_value[1];
    return value();
}
int Sample::minus(int val){
    m_value[0]=m_value[2];
    m_value[1]=val;
    m_value[2]=m_value[0]-m_value[1];
    return value();
}
int Sample::value(){
    return m_value[2];
}
void Sample::value(int val){
    m_value[2]=val;
}
