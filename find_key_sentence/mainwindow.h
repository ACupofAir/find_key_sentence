#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

//Find key sentence
    QString find_key_sentence(QString);
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
