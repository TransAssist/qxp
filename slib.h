#ifndef SLIB_H
#define SLIB_H

#include <QObject>
#include <QDebug>
#include <QAction>
#include <QLabel>
#include <QFont>
#include <QFontDatabase>
#include <QRect>
#include <QDesktopWidget>
#include <QApplication>

enum MVPosition{
    TOP_LEFT,
    TOP_RIGHT,
    BOTTOM_LEFT,
    BOTTOM_RIGHT,
    CENTER
};

class Slib : public QObject{
    Q_OBJECT
public:
    explicit Slib(QObject *parent = 0) :QObject(parent){
    }
    static void test(){
        qDebug()<<"Test";
    }
    //	echo method
    static QString echo(const QString str){
        return "Echo:"+str;
    }
    static void labelStylize(QLabel* label){
        label->setAlignment(Qt::AlignLeft);
        label->setTextFormat(Qt::RichText);
        label->setTextInteractionFlags(Qt::TextBrowserInteraction);
        QFont font = QFontDatabase::systemFont(QFontDatabase::FixedFont);
        font.setPointSize(10);
        label->setFont(font);
        label->setOpenExternalLinks(true);
        label->setStyleSheet(
            "QLabel{"
                "color: rgba(255,255,255,100%);"
                "background-color: rgba(34,34,34,0.7);"
                "padding:3px 5px;"
            "}"
        );
    }
    static void mv(QWidget* widget,MVPosition position=MVPosition::CENTER){
        QRect aa(QApplication::desktop()->availableGeometry());
        switch (position) {
            case TOP_LEFT:
                widget->move(0,0);
                break;
            case TOP_RIGHT:
                widget->move(aa.width()-widget->width(),0);
                break;
            case BOTTOM_LEFT:
                widget->move(0,aa.height()-widget->height());
                break;
            case BOTTOM_RIGHT:
                widget->move(aa.width()-widget->width(),aa.height()-widget->height());
                break;
            default:
                widget->move(aa.width()/2-widget->width()/2,aa.height()/2-widget->height()/2);
                break;
        }
    }
    static QString createTextIconStr(QString color,QString iconStr){
        return "<span style=\"color:"+color+";\">"+iconStr+"</span>";
    }
};

#endif // SLIB_H
