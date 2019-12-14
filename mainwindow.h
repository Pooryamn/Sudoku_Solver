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
    void Data_to_matrix();
    void matrix_to_data();
    bool Check(int row,int col, int data);
    bool CH_ROW(int row,int data);
    bool CH_COL(int col,int data);
    bool CH_BOX(int S_Row, int S_Col, int data);
    bool CH_ROW2(int row,int data);
    bool CH_COL2(int col,int data);
    bool CH_BOX2(int S_Row, int S_Col, int data);
    bool CH_EMPTY(int &row, int &col);
    bool CH_INPUT();
    bool Solve_backtrack();
    int Mat[9][9];
    ~MainWindow();

private slots:

    void on_btn_Clear_clicked();

    void on_btn_Solve_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
