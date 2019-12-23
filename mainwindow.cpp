#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>
#include <QString>
#include <iostream>
#include <QThread>
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    index = 0;

    Set_Validator();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Set_Validator(){

    QIntValidator *valid = new QIntValidator(1,9,this);

    // ROW 1 :
    ui->txt_11->setValidator(valid);
    ui->txt_12->setValidator(valid);
    ui->txt_13->setValidator(valid);
    ui->txt_14->setValidator(valid);
    ui->txt_15->setValidator(valid);
    ui->txt_16->setValidator(valid);
    ui->txt_17->setValidator(valid);
    ui->txt_18->setValidator(valid);
    ui->txt_19->setValidator(valid);

    // ROW 2 :
    ui->txt_21->setValidator(valid);
    ui->txt_22->setValidator(valid);
    ui->txt_23->setValidator(valid);
    ui->txt_24->setValidator(valid);
    ui->txt_25->setValidator(valid);
    ui->txt_26->setValidator(valid);
    ui->txt_27->setValidator(valid);
    ui->txt_28->setValidator(valid);
    ui->txt_29->setValidator(valid);

    // ROW 3 :
    ui->txt_31->setValidator(valid);
    ui->txt_32->setValidator(valid);
    ui->txt_33->setValidator(valid);
    ui->txt_34->setValidator(valid);
    ui->txt_35->setValidator(valid);
    ui->txt_36->setValidator(valid);
    ui->txt_37->setValidator(valid);
    ui->txt_38->setValidator(valid);
    ui->txt_39->setValidator(valid);

    // ROW 4 :
    ui->txt_41->setValidator(valid);
    ui->txt_42->setValidator(valid);
    ui->txt_43->setValidator(valid);
    ui->txt_44->setValidator(valid);
    ui->txt_45->setValidator(valid);
    ui->txt_46->setValidator(valid);
    ui->txt_47->setValidator(valid);
    ui->txt_48->setValidator(valid);
    ui->txt_49->setValidator(valid);

    // ROW 5 :
    ui->txt_51->setValidator(valid);
    ui->txt_52->setValidator(valid);
    ui->txt_53->setValidator(valid);
    ui->txt_54->setValidator(valid);
    ui->txt_55->setValidator(valid);
    ui->txt_56->setValidator(valid);
    ui->txt_57->setValidator(valid);
    ui->txt_58->setValidator(valid);
    ui->txt_59->setValidator(valid);

    // ROW 6 :
    ui->txt_61->setValidator(valid);
    ui->txt_62->setValidator(valid);
    ui->txt_63->setValidator(valid);
    ui->txt_64->setValidator(valid);
    ui->txt_65->setValidator(valid);
    ui->txt_66->setValidator(valid);
    ui->txt_67->setValidator(valid);
    ui->txt_68->setValidator(valid);
    ui->txt_69->setValidator(valid);

    // ROW 7 :
    ui->txt_71->setValidator(valid);
    ui->txt_72->setValidator(valid);
    ui->txt_73->setValidator(valid);
    ui->txt_74->setValidator(valid);
    ui->txt_75->setValidator(valid);
    ui->txt_76->setValidator(valid);
    ui->txt_77->setValidator(valid);
    ui->txt_78->setValidator(valid);
    ui->txt_79->setValidator(valid);

    // ROW 8 :
    ui->txt_81->setValidator(valid);
    ui->txt_82->setValidator(valid);
    ui->txt_83->setValidator(valid);
    ui->txt_84->setValidator(valid);
    ui->txt_85->setValidator(valid);
    ui->txt_86->setValidator(valid);
    ui->txt_87->setValidator(valid);
    ui->txt_88->setValidator(valid);
    ui->txt_89->setValidator(valid);

    // ROW 9 :
    ui->txt_91->setValidator(valid);
    ui->txt_92->setValidator(valid);
    ui->txt_93->setValidator(valid);
    ui->txt_94->setValidator(valid);
    ui->txt_95->setValidator(valid);
    ui->txt_96->setValidator(valid);
    ui->txt_97->setValidator(valid);
    ui->txt_98->setValidator(valid);
    ui->txt_99->setValidator(valid);

}

void MainWindow::on_btn_Clear_clicked()
{
    // ROW 1 :
        ui->txt_11->setText("");
        ui->txt_12->setText("");
        ui->txt_13->setText("");
        ui->txt_14->setText("");
        ui->txt_15->setText("");
        ui->txt_16->setText("");
        ui->txt_17->setText("");
        ui->txt_18->setText("");
        ui->txt_19->setText("");

        // ROW 2 :
        ui->txt_21->setText("");
        ui->txt_22->setText("");
        ui->txt_23->setText("");
        ui->txt_24->setText("");
        ui->txt_25->setText("");
        ui->txt_26->setText("");
        ui->txt_27->setText("");
        ui->txt_28->setText("");
        ui->txt_29->setText("");

        // ROW 3 :
        ui->txt_31->setText("");
        ui->txt_32->setText("");
        ui->txt_33->setText("");
        ui->txt_34->setText("");
        ui->txt_35->setText("");
        ui->txt_36->setText("");
        ui->txt_37->setText("");
        ui->txt_38->setText("");
        ui->txt_39->setText("");

        // ROW 4 :
        ui->txt_41->setText("");
        ui->txt_42->setText("");
        ui->txt_43->setText("");
        ui->txt_44->setText("");
        ui->txt_45->setText("");
        ui->txt_46->setText("");
        ui->txt_47->setText("");
        ui->txt_48->setText("");
        ui->txt_49->setText("");

        // ROW 5 :
        ui->txt_51->setText("");
        ui->txt_52->setText("");
        ui->txt_53->setText("");
        ui->txt_54->setText("");
        ui->txt_55->setText("");
        ui->txt_56->setText("");
        ui->txt_57->setText("");
        ui->txt_58->setText("");
        ui->txt_59->setText("");

        // ROW 6 :
        ui->txt_61->setText("");
        ui->txt_62->setText("");
        ui->txt_63->setText("");
        ui->txt_64->setText("");
        ui->txt_65->setText("");
        ui->txt_66->setText("");
        ui->txt_67->setText("");
        ui->txt_68->setText("");
        ui->txt_69->setText("");

        // ROW 7 :
        ui->txt_71->setText("");
        ui->txt_72->setText("");
        ui->txt_73->setText("");
        ui->txt_74->setText("");
        ui->txt_75->setText("");
        ui->txt_76->setText("");
        ui->txt_77->setText("");
        ui->txt_78->setText("");
        ui->txt_79->setText("");

        // ROW 8 :
        ui->txt_81->setText("");
        ui->txt_82->setText("");
        ui->txt_83->setText("");
        ui->txt_84->setText("");
        ui->txt_85->setText("");
        ui->txt_86->setText("");
        ui->txt_87->setText("");
        ui->txt_88->setText("");
        ui->txt_89->setText("");

        // ROW 9 :
        ui->txt_91->setText("");
        ui->txt_92->setText("");
        ui->txt_93->setText("");
        ui->txt_94->setText("");
        ui->txt_95->setText("");
        ui->txt_96->setText("");
        ui->txt_97->setText("");
        ui->txt_98->setText("");
        ui->txt_99->setText("");

}

void MainWindow::Data_to_matrix(){

    // ROW 1 :
        Mat[0][0] = ui->txt_11->text().toInt();
        Mat[0][1] = ui->txt_12->text().toInt();
        Mat[0][2] = ui->txt_13->text().toInt();
        Mat[0][3] = ui->txt_14->text().toInt();
        Mat[0][4] = ui->txt_15->text().toInt();
        Mat[0][5] = ui->txt_16->text().toInt();
        Mat[0][6] = ui->txt_17->text().toInt();
        Mat[0][7] = ui->txt_18->text().toInt();
        Mat[0][8] = ui->txt_19->text().toInt();

        // ROW 2 :
        Mat[1][0] = ui->txt_21->text().toInt();
        Mat[1][1] = ui->txt_22->text().toInt();
        Mat[1][2] = ui->txt_23->text().toInt();
        Mat[1][3] = ui->txt_24->text().toInt();
        Mat[1][4] = ui->txt_25->text().toInt();
        Mat[1][5] = ui->txt_26->text().toInt();
        Mat[1][6] = ui->txt_27->text().toInt();
        Mat[1][7] = ui->txt_28->text().toInt();
        Mat[1][8] = ui->txt_29->text().toInt();

        // ROW 3 :
        Mat[2][0] = ui->txt_31->text().toInt();
        Mat[2][1] = ui->txt_32->text().toInt();
        Mat[2][2] = ui->txt_33->text().toInt();
        Mat[2][3] = ui->txt_34->text().toInt();
        Mat[2][4] = ui->txt_35->text().toInt();
        Mat[2][5] = ui->txt_36->text().toInt();
        Mat[2][6] = ui->txt_37->text().toInt();
        Mat[2][7] = ui->txt_38->text().toInt();
        Mat[2][8] = ui->txt_39->text().toInt();

        // ROW 4 :
        Mat[3][0] = ui->txt_41->text().toInt();
        Mat[3][1] = ui->txt_42->text().toInt();
        Mat[3][2] = ui->txt_43->text().toInt();
        Mat[3][3] = ui->txt_44->text().toInt();
        Mat[3][4] = ui->txt_45->text().toInt();
        Mat[3][5] = ui->txt_46->text().toInt();
        Mat[3][6] = ui->txt_47->text().toInt();
        Mat[3][7] = ui->txt_48->text().toInt();
        Mat[3][8] = ui->txt_49->text().toInt();

        // ROW 5 :
        Mat[4][0] = ui->txt_51->text().toInt();
        Mat[4][1] = ui->txt_52->text().toInt();
        Mat[4][2] = ui->txt_53->text().toInt();
        Mat[4][3] = ui->txt_54->text().toInt();
        Mat[4][4] = ui->txt_55->text().toInt();
        Mat[4][5] = ui->txt_56->text().toInt();
        Mat[4][6] = ui->txt_57->text().toInt();
        Mat[4][7] = ui->txt_58->text().toInt();
        Mat[4][8] = ui->txt_59->text().toInt();

        // ROW 6 :
        Mat[5][0] = ui->txt_61->text().toInt();
        Mat[5][1] = ui->txt_62->text().toInt();
        Mat[5][2] = ui->txt_63->text().toInt();
        Mat[5][3] = ui->txt_64->text().toInt();
        Mat[5][4] = ui->txt_65->text().toInt();
        Mat[5][5] = ui->txt_66->text().toInt();
        Mat[5][6] = ui->txt_67->text().toInt();
        Mat[5][7] = ui->txt_68->text().toInt();
        Mat[5][8] = ui->txt_69->text().toInt();

        // ROW 7 :
        Mat[6][0] = ui->txt_71->text().toInt();
        Mat[6][1] = ui->txt_72->text().toInt();
        Mat[6][2] = ui->txt_73->text().toInt();
        Mat[6][3] = ui->txt_74->text().toInt();
        Mat[6][4] = ui->txt_75->text().toInt();
        Mat[6][5] = ui->txt_76->text().toInt();
        Mat[6][6] = ui->txt_77->text().toInt();
        Mat[6][7] = ui->txt_78->text().toInt();
        Mat[6][8] = ui->txt_79->text().toInt();

        // ROW 8 :
        Mat[7][0] = ui->txt_81->text().toInt();
        Mat[7][1] = ui->txt_82->text().toInt();
        Mat[7][2] = ui->txt_83->text().toInt();
        Mat[7][3] = ui->txt_84->text().toInt();
        Mat[7][4] = ui->txt_85->text().toInt();
        Mat[7][5] = ui->txt_86->text().toInt();
        Mat[7][6] = ui->txt_87->text().toInt();
        Mat[7][7] = ui->txt_88->text().toInt();
        Mat[7][8] = ui->txt_89->text().toInt();

        // ROW 9 :
        Mat[8][0] = ui->txt_91->text().toInt();
        Mat[8][1] = ui->txt_92->text().toInt();
        Mat[8][2] = ui->txt_93->text().toInt();
        Mat[8][3] = ui->txt_94->text().toInt();
        Mat[8][4] = ui->txt_95->text().toInt();
        Mat[8][5] = ui->txt_96->text().toInt();
        Mat[8][6] = ui->txt_97->text().toInt();
        Mat[8][7] = ui->txt_98->text().toInt();
        Mat[8][8] = ui->txt_99->text().toInt();
}

void MainWindow::on_btn_Solve_clicked()
{
    Data_to_matrix();
    if(!CH_INPUT()){
        return;
    }
    if(ui->combo_algorithm->currentText() == "Backtrack"){
        if(Solve_backtrack()){
            matrix_to_data(Mat);
        }
    }

}

// check a data in ROW , COLUMN and Block
bool MainWindow::Check(int row,int col, int data){
    if(CH_ROW(row,data)){
        return false;
    }
    if(CH_COL(col,data)){
        return false;
    }
    if(CH_BOX(row - row % 3 , col - col % 3 , data)){
        return false;
    }
    return true;
}

// check data is in a row or not
bool MainWindow::CH_ROW(int row,int data){
    for (int col = 0; col < 9; col++){
            if (Mat[row][col] == data){
                return true;
            }
    }
    return false;
}

// check data is in a column or not
bool MainWindow::CH_COL(int col, int data){
    for (int row = 0; row < 9; row++){
            if (Mat[row][col] == data){
                return true;
            }
    }
        return false;
}
// check data is in a box or not , S_ROW and S_COL is begin of the box
bool MainWindow::CH_BOX(int S_Row, int S_Col, int data){
    for (int row = 0; row < 3; row++){
            for (int col = 0; col < 3; col++){
                if (Mat[row + S_Row][col + S_Col] == data){
                    return true;
                }
            }
    }
        return false;
}

bool MainWindow::Solve_backtrack(){
    int row,col;

    // find empty homes , if it is where is it ?
    if(!CH_EMPTY(row,col)){
        return true;
    }

    for(int data = 1 ; data <= 9 ; data++){
        if(Check(row,col,data)){
            Mat[row][col] = data;

            if(Solve_backtrack()){
                return true;
            }
            else {
                Mat[row][col] = 0; // go back
            }
        }
    }
    return false; // cant be solve
}

bool MainWindow::CH_EMPTY(int &row, int &col){
    for (row = 0; row < 9; row++)
            for (col = 0; col < 9; col++)
                if (Mat[row][col] == 0)
                    return true;
        return false;
}

void MainWindow::matrix_to_data(int Mat[9][9]){

    on_btn_Clear_clicked();


    if(Mat[0][0] != 0){
        ui->txt_11->setText(QString::number(Mat[0][0]));
        QThread::msleep(5);
    }
    if(Mat[0][1] != 0){
        ui->txt_12->setText(QString::number(Mat[0][1]));
        QThread::msleep(5);
    }
    if(Mat[0][2] != 0){
        ui->txt_13->setText(QString::number(Mat[0][2]));
        QThread::msleep(5);
    }
    if(Mat[0][3] != 0){
        ui->txt_14->setText(QString::number(Mat[0][3]));
        QThread::msleep(5);
    }
    if(Mat[0][4] != 0){
        ui->txt_15->setText(QString::number(Mat[0][4]));
        QThread::msleep(5);
    }
    if(Mat[0][5] != 0){
         ui->txt_16->setText(QString::number(Mat[0][5]));
         QThread::msleep(5);
    }
    if(Mat[0][6] != 0){
        ui->txt_17->setText(QString::number(Mat[0][6]));
        QThread::msleep(5);
    }
    if(Mat[0][7] != 0){
        ui->txt_18->setText(QString::number(Mat[0][7]));
        QThread::msleep(5);
    }
    if(Mat[0][8] != 0){
        ui->txt_19->setText(QString::number(Mat[0][8]));
        QThread::msleep(5);
    }
    if(Mat[1][0] != 0){
        ui->txt_21->setText(QString::number(Mat[1][0]));
        QThread::msleep(5);
    }
    if(Mat[1][1] != 0){
        ui->txt_22->setText(QString::number(Mat[1][1]));
        QThread::msleep(5);
    }
    if(Mat[1][2] != 0){
        ui->txt_23->setText(QString::number(Mat[1][2]));
        QThread::msleep(5);
    }
    if(Mat[1][3] != 0){
        ui->txt_24->setText(QString::number(Mat[1][3]));
        QThread::msleep(5);
    }
    if(Mat[1][4] != 0){
        ui->txt_25->setText(QString::number(Mat[1][4]));
        QThread::msleep(5);
    }
    if(Mat[1][5] != 0){
        ui->txt_26->setText(QString::number(Mat[1][5]));
        QThread::msleep(5);
    }
    if(Mat[1][6] != 0){
        ui->txt_27->setText(QString::number(Mat[1][6]));
        QThread::msleep(5);
    }
    if(Mat[1][7] != 0){
        ui->txt_28->setText(QString::number(Mat[1][7]));
        QThread::msleep(5);
    }
    if(Mat[1][8] != 0){
        ui->txt_29->setText(QString::number(Mat[1][8]));
        QThread::msleep(5);
    }
    if(Mat[2][0] != 0){
        ui->txt_31->setText(QString::number(Mat[2][0]));
        QThread::msleep(5);
    }
    if(Mat[2][1] != 0){
        ui->txt_32->setText(QString::number(Mat[2][1]));
        QThread::msleep(5);
    }
    if(Mat[2][2] != 0){
        ui->txt_33->setText(QString::number(Mat[2][2]));
        QThread::msleep(5);
    }
    if(Mat[2][3] != 0){
        ui->txt_34->setText(QString::number(Mat[2][3]));
        QThread::msleep(5);
    }
    if(Mat[2][4] != 0){
        ui->txt_35->setText(QString::number(Mat[2][4]));
        QThread::msleep(5);
    }
    if(Mat[2][5] != 0){
        ui->txt_36->setText(QString::number(Mat[2][5]));
        QThread::msleep(5);
    }
    if(Mat[2][6] != 0){
        ui->txt_37->setText(QString::number(Mat[2][6]));
        QThread::msleep(5);
    }
    if(Mat[2][7] != 0){
        ui->txt_38->setText(QString::number(Mat[2][7]));
        QThread::msleep(5);
    }
    if(Mat[2][8] != 0){
        ui->txt_39->setText(QString::number(Mat[2][8]));
        QThread::msleep(5);
    }
    if(Mat[3][0] != 0){
        ui->txt_41->setText(QString::number(Mat[3][0]));
        QThread::msleep(5);
    }
    if(Mat[3][1] != 0){
        ui->txt_42->setText(QString::number(Mat[3][1]));
        QThread::msleep(5);
    }
    if(Mat[3][2] != 0){
        ui->txt_43->setText(QString::number(Mat[3][2]));
        QThread::msleep(5);
    }
    if(Mat[3][3] != 0){
        ui->txt_44->setText(QString::number(Mat[3][3]));
        QThread::msleep(5);
    }
    if(Mat[3][4] != 0){
        ui->txt_45->setText(QString::number(Mat[3][4]));
        QThread::msleep(5);
    }
    if(Mat[3][5] != 0){
        ui->txt_46->setText(QString::number(Mat[3][5]));
        QThread::msleep(5);
    }
    if(Mat[3][6] != 0){
        ui->txt_47->setText(QString::number(Mat[3][6]));
        QThread::msleep(5);
    }
    if(Mat[3][7] != 0){
        ui->txt_48->setText(QString::number(Mat[3][7]));
        QThread::msleep(5);
    }
    if(Mat[3][8] != 0){
        ui->txt_49->setText(QString::number(Mat[3][8]));
        QThread::msleep(5);
    }
    if(Mat[4][0] != 0){
        ui->txt_51->setText(QString::number(Mat[4][0]));
        QThread::msleep(5);
    }
    if(Mat[4][1] != 0){
        ui->txt_52->setText(QString::number(Mat[4][1]));
        QThread::msleep(5);
    }
    if(Mat[4][2] != 0){
        ui->txt_53->setText(QString::number(Mat[4][2]));
        QThread::msleep(5);
    }
    if(Mat[4][3] != 0){
        ui->txt_54->setText(QString::number(Mat[4][3]));
        QThread::msleep(5);
    }
    if(Mat[4][4] != 0){
        ui->txt_55->setText(QString::number(Mat[4][4]));
        QThread::msleep(5);
    }
    if(Mat[4][5] != 0){
        ui->txt_56->setText(QString::number(Mat[4][5]));
        QThread::msleep(5);
    }
    if(Mat[4][6] != 0){
        ui->txt_57->setText(QString::number(Mat[4][6]));
        QThread::msleep(5);
    }
    if(Mat[4][7] != 0){
        ui->txt_58->setText(QString::number(Mat[4][7]));
        QThread::msleep(5);
    }
    if(Mat[4][8] != 0){
        ui->txt_59->setText(QString::number(Mat[4][8]));
        QThread::msleep(5);
    }
    if(Mat[5][0] != 0){
        ui->txt_61->setText(QString::number(Mat[5][0]));
        QThread::msleep(5);
    }
    if(Mat[5][1] != 0){
        ui->txt_62->setText(QString::number(Mat[5][1]));
        QThread::msleep(5);
    }
    if(Mat[5][2] != 0){
        ui->txt_63->setText(QString::number(Mat[5][2]));
        QThread::msleep(5);
    }
    if(Mat[5][3] != 0){
        ui->txt_64->setText(QString::number(Mat[5][3]));
        QThread::msleep(5);
    }
    if(Mat[5][4] != 0){
        ui->txt_65->setText(QString::number(Mat[5][4]));
        QThread::msleep(5);
    }
    if(Mat[5][5] != 0){
        ui->txt_66->setText(QString::number(Mat[5][5]));
        QThread::msleep(5);
    }
    if(Mat[5][6] != 0){
         ui->txt_67->setText(QString::number(Mat[5][6]));
         QThread::msleep(5);
    }
    if(Mat[5][7] != 0){
        ui->txt_68->setText(QString::number(Mat[5][7]));
        QThread::msleep(5);
    }
    if(Mat[5][8] != 0){
        ui->txt_69->setText(QString::number(Mat[5][8]));
        QThread::msleep(5);
    }
    if(Mat[6][0] != 0){
        ui->txt_71->setText(QString::number(Mat[6][0]));
        QThread::msleep(5);
    }
    if(Mat[6][1] != 0){
         ui->txt_72->setText(QString::number(Mat[6][1]));
         QThread::msleep(5);
    }
    if(Mat[6][2] != 0){
        ui->txt_73->setText(QString::number(Mat[6][2]));
        QThread::msleep(5);
    }
    if(Mat[6][3] != 0){
        ui->txt_74->setText(QString::number(Mat[6][3]));
        QThread::msleep(5);
    }
    if(Mat[6][4] != 0){
        ui->txt_75->setText(QString::number(Mat[6][4]));
        QThread::msleep(5);
    }
    if(Mat[6][5] != 0){
        ui->txt_76->setText(QString::number(Mat[6][5]));
        QThread::msleep(5);
    }
    if(Mat[6][6] != 0){
        ui->txt_77->setText(QString::number(Mat[6][6]));
        QThread::msleep(5);
    }
    if(Mat[6][7] != 0){
        ui->txt_78->setText(QString::number(Mat[6][7]));
        QThread::msleep(5);
    }
    if(Mat[6][8] != 0){
        ui->txt_79->setText(QString::number(Mat[6][8]));
        QThread::msleep(5);
    }
    if(Mat[7][0] != 0){
        ui->txt_81->setText(QString::number(Mat[7][0]));
        QThread::msleep(5);
    }
    if(Mat[7][1] != 0){
        ui->txt_82->setText(QString::number(Mat[7][1]));
        QThread::msleep(5);
    }
    if(Mat[7][2] != 0){
        ui->txt_83->setText(QString::number(Mat[7][2]));
        QThread::msleep(5);
    }
    if(Mat[7][3] != 0){
        ui->txt_84->setText(QString::number(Mat[7][3]));
        QThread::msleep(5);
    }
    if(Mat[7][4] != 0){
        ui->txt_85->setText(QString::number(Mat[7][4]));
        QThread::msleep(5);
    }
    if(Mat[7][5] != 0){
        ui->txt_86->setText(QString::number(Mat[7][5]));
        QThread::msleep(5);
    }
    if(Mat[7][6] != 0){
        ui->txt_87->setText(QString::number(Mat[7][6]));
        QThread::msleep(5);
    }
    if(Mat[7][7] != 0){
        ui->txt_88->setText(QString::number(Mat[7][7]));
        QThread::msleep(5);
    }
    if(Mat[7][8] != 0){
        ui->txt_89->setText(QString::number(Mat[7][8]));
        QThread::msleep(5);
    }
    if(Mat[8][0] != 0){
        ui->txt_91->setText(QString::number(Mat[8][0]));
        QThread::msleep(5);
    }
    if(Mat[8][1] != 0){
        ui->txt_92->setText(QString::number(Mat[8][1]));
        QThread::msleep(5);
    }
    if(Mat[8][2] != 0){
        ui->txt_93->setText(QString::number(Mat[8][2]));
        QThread::msleep(5);
    }
    if(Mat[8][3] != 0){
        ui->txt_94->setText(QString::number(Mat[8][3]));
        QThread::msleep(5);
    }
    if(Mat[8][4] != 0){
        ui->txt_95->setText(QString::number(Mat[8][4]));
        QThread::msleep(5);
    }
    if(Mat[8][5] != 0){
        ui->txt_96->setText(QString::number(Mat[8][5]));
        QThread::msleep(5);
    }
    if(Mat[8][6] != 0){
        ui->txt_97->setText(QString::number(Mat[8][6]));
        QThread::msleep(5);
    }
    if(Mat[8][7] != 0){
        ui->txt_98->setText(QString::number(Mat[8][7]));
        QThread::msleep(5);
    }
    if(Mat[8][8] != 0){
        ui->txt_99->setText(QString::number(Mat[8][8]));
        QThread::msleep(5);
    }

}

bool MainWindow::CH_INPUT(){
    for (int row =0;row < 9;row++) {
        for (int col =0;col<9;col++) {

            if(Mat[row][col] == 0){
                continue;
            }
            if(!CH_ROW2(row,Mat[row][col])){
                QMessageBox::warning(this,"Input error", QString::number(Mat[row][col]) + " is used in row " + QString::number(row));
                return false;
            }

            if(!CH_COL2(col,Mat[row][col])){
                QMessageBox::warning(this,"Input error", QString::number(Mat[row][col]) + " is used in column " + QString::number(col));
                return false;
            }

            if(!CH_BOX2(row - row % 3 , col - col % 3 , Mat[row][col])){
                QMessageBox::warning(this,"Input error", QString::number(Mat[row][col]) + " is used in a same Box ");
                return false;
            }

        }
    }
    return true;
}

bool MainWindow::CH_ROW2(int row, int data){
    bool flag =false;
    for (int col = 0; col < 9; col++){
            if (Mat[row][col] == data){
                if(flag == false){
                    flag = true;
                }
                else{
                    return false;
                }
            }
    }
    return true;
}

bool MainWindow::CH_COL2(int col, int data){
    bool flag = false;
    for (int row = 0; row < 9; row++){
            if (Mat[row][col] == data){
                if(flag == false){
                    flag = true;
                }
                else{
                    return false;
                }
            }
    }
        return true;
}

bool MainWindow::CH_BOX2(int S_Row, int S_Col, int data){
    bool flag = false;
    for (int row = 0; row < 3; row++){
            for (int col = 0; col < 3; col++){
                if (Mat[row + S_Row][col + S_Col] == data){
                    if(flag == false){
                        flag = true;
                    }
                    else{
                        return false;
                    }
                }
            }
    }
        return true;
}

void MainWindow::on_btn_Random_clicked()
{
    matrix_to_data(Sample[index]);
    index++;
    if(index == 11){
        index = 0 ;
    }
}
