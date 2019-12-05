#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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
