#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtPlayer.h"

class QtPlayer : public QMainWindow
{
    Q_OBJECT

public:
    QtPlayer(QWidget *parent = nullptr);
    ~QtPlayer();

private:
    Ui::QtPlayerClass ui;
    QMediaPlayer* player;
    QVideoWidget* videoWidget;
};
