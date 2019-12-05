#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QIntValidator>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    void Set_Validator();
    ~MainWindow();

private slots:

    void on_btn_Clear_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
