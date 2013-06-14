#include "philosopher.h"
#include <QMutex>

philosopher :: philosopher()
{
    this->left_hand = false;
    this->right_hand = false;
}

bool philosopher :: is_both_true(philosopher p)
{
    if(p.left_hand == true && p.right_hand == true)return true;
    return false;
}

void philosopher :: start_eating()
{
    right_hand = true;
    left_hand = true;
}

void philosopher :: stop_eating()
{
    QMutex mut;
    mut.lock();
    mut.tryLock(5000);
    mut.unlock();
    left_hand = false;
    right_hand = false;

}

QString philosopher :: what_doing()
{
    if(right_hand == true && left_hand == true)return "eating";
    return "thinking";
}

void philosopher :: resume(QVector<philosopher>p,philosopher p1,philosopher p2,int j,int k,int i)
{
    if(i<0)i=5;
    i -= 1;
    p[j] = p1;
    p[k] = p2;
    p[j].start_eating();
    p[k].start_eating();
    p[i].setLeft_hand_true();
    p[j].stop_eating();
    int t = j;
    int s = j;
    if(j == 4) t = -1;
    p[t+1].setLeft_hand_true();
    if(j == 0) s = 5;
    p[s-1].setRight_hand_true();
    p[k].stop_eating();
    int r = k;
    int u = k;
    if(k == 4) r = -1;
    p[r+1].setLeft_hand_true();
    if(k == 0) u = 5;
    p[u-1].setRight_hand_true();
    QVector<philosopher>ph(2);
    QVector<int>index(2);
    int m = 0;
    for(int h=0;h<5;h++){        
        if(is_both_true(p[h])){
            ph[m] = p[h];
            index[m] = h;
            m += 1;
        }
    }
    Widget w;
    w.label1->setText(p[0].what_doing());
    w.label2->setText(p[1].what_doing());
    w.label3->setText(p[2].what_doing());
    w.label4->setText(p[3].what_doing());
    w.label5->setText(p[4].what_doing());
    resume(p,ph[0],ph[1],index[0],index[1],i-1);
}
//void philosopher :: onStartClickedSignal()

