#ifndef PHILOSOPHER_H
#define PHILOSOPHER_H

#include <QString>
#include <QVector>
#include "widget.h"

class philosopher : public Widget
{
private:
    bool right_hand;
    bool left_hand;

public:
    philosopher ();
    void setRight_hand_true(){right_hand = true;}
    void set_Right_hand_flase(){right_hand = false;}
    void setLeft_hand_true(){left_hand = true;}
    void setLeft_hand_false(){right_hand = false;}
    bool is_both_true(philosopher);
    void start_eating();
    void stop_eating();
    void resume(QVector<philosopher>,philosopher,philosopher,int,int,int);
    QString what_doing();

//signals:
  //  void onStartClickedSignal();
};



#endif // PHILOSOPHER_H
