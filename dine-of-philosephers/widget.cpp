#include "widget.h"
#include "philosopher.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    phil1 = new QCheckBox("philosepher1");
    phil2 = new QCheckBox("philosepher2");
    phil3 = new QCheckBox("philosepher3");
    phil4 = new QCheckBox("philosepher4");
    phil5 = new QCheckBox("philosepher5");
    vb1 = new QVBoxLayout;
    vb1->addWidget(phil1);
    vb1->addWidget(phil2);
    vb1->addWidget(phil3);
    vb1->addWidget(phil4);
    vb1->addWidget(phil5);
    group1 = new QGroupBox;
    group1->setLayout(vb1);
    label1 = new QLabel("none");
    label2 = new QLabel("none");
    label3 = new QLabel("none");
    label4 = new QLabel("none");
    label5 = new QLabel("none");
    vb2 = new QVBoxLayout;
    vb2->addWidget(label1);
    vb2->addWidget(label2);
    vb2->addWidget(label3);
    vb2->addWidget(label4);
    vb2->addWidget(label5);
    group2 = new QGroupBox;
    group2->setLayout(vb2);
    hb = new QHBoxLayout;
    hb->addWidget(group1);
    hb->addWidget(group2);
    push1 = new QPushButton("start");
    push2 = new QPushButton("next");
    push3 = new QPushButton("finish");
    group3 = new QGroupBox;
    group3->setLayout(hb);
    grid = new QGridLayout(this);
    grid->addWidget(group3);
    grid->addWidget(push1);
    grid->addWidget(push2);
    grid->addWidget(push3);  
    connect(push1,SIGNAL(clicked()),this,SLOT(onStartClicked()));
}

void Widget :: onStartClicked()
{
    QVector<philosopher>p;
    philosopher p1;
    p[0] = p1;
    philosopher p2;
    p[1] =  p2;
    philosopher p3;
    p[2] = p3;
    philosopher p4;
    p[3] = p4;
    philosopher p5;
    p[4] = p5;
    philosopher q;
    philosopher.resume(p,p1,p3,0,2,5);
}

Widget::~Widget()
{
    
}
