#include <QMediaPlayer>
#include <QVideoWidget>
#include <QVBoxLayout>

#include "QtPlayer.h"

QtPlayer::QtPlayer(QWidget *parent) : QMainWindow(parent)
{
    ui.setupUi(this);

    videoWidget = new QVideoWidget(this);
    player = new QMediaPlayer(this);

    // 设置视频输出目标
    player->setVideoOutput(videoWidget);

    // 设置播放 URL
    player->setSource(QUrl("https://www.example.com/sample.mp4")); // 替换成实际 URL

    // 播放
    player->play();

    // 设置视频窗口到主窗口
    setCentralWidget(videoWidget);
    resize(800, 600);
}

QtPlayer::~QtPlayer()
{
    
}
