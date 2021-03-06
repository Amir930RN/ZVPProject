#ifndef SECONDSTAGE_H
#define SECONDSTAGE_H


#include <QGraphicsPixmapItem>
#include <QObject>
#include <QMediaPlayer>

class SecondStage : public QObject{
    Q_OBJECT
public:
    SecondStage();
public slots:
    void timeCounter();
    void defeat();
private:
    int firstRow, secondRow, part, second;
    void dice();
    QMediaPlayer* backGroundMusic;
};

#endif // SECONDSTAGE_H
