#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QCheckBox>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGroupBox>
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>
#include <QVector>
#include "philosopher.h"


class Widget : public QWidget
{
    Q_OBJECT
private:
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
    QLabel *label4;
    QLabel *label5;
    QCheckBox *phil1;
    QCheckBox *phil2;
    QCheckBox *phil3;
    QCheckBox *phil4;
    QCheckBox *phil5;

public:
    Widget(QWidget *parent = 0);
    QVBoxLayout *vb1;
    QGroupBox *group1;   
    QVBoxLayout *vb2;
    QGroupBox *group2;
    QHBoxLayout *hb;
    QPushButton *push1;
    QPushButton *push2;
    QPushButton *push3;
    QGroupBox *group3;
    QGridLayout *grid;
    ~Widget();

public slots:
    void onStartClicked();
};

#endif // WIDGET_H
