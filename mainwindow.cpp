#include "QGridLayout"
#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent): QWidget(parent) {
    setWindowTitle("S1mple calculator");
    setWindowOpacity(0.98);
    setMinimumSize(380, 450);
    setMaximumSize(380, 450);

    display = new QLineEdit();
//    display->setPlaceholderText("0");
    display->setReadOnly(true);

    QPushButton* pushButton0 =      new QPushButton("0");
    QPushButton* pushButton1 =      new QPushButton("1");
    QPushButton* pushButton2 =      new QPushButton("2");
    QPushButton* pushButton3 =      new QPushButton("3");
    QPushButton* pushButton4 =      new QPushButton("4");
    QPushButton* pushButton5 =      new QPushButton("5");
    QPushButton* pushButton6 =      new QPushButton("6");
    QPushButton* pushButton7 =      new QPushButton("7");
    QPushButton* pushButton8 =      new QPushButton("8");
    QPushButton* pushButton9 =      new QPushButton("9");
    QPushButton* pushButtonDot =    new QPushButton(",");
    QPushButton* pushButtonPlus =   new QPushButton("+");
    QPushButton* pushButtonMinus =  new QPushButton(QString::fromUtf8("-"));
    QPushButton* pushButtonMult =   new QPushButton(QString::fromUtf8("\u00D7"));
    QPushButton* pushButtonDivide = new QPushButton(QString::fromUtf8("\u00F7"));
    QPushButton* pushButtonEquals = new QPushButton("=");

    pushButton0->setSizePolicy(     QSizePolicy::Preferred, QSizePolicy::Preferred);
    pushButton1->setSizePolicy(     QSizePolicy::Preferred, QSizePolicy::Preferred);
    pushButton2->setSizePolicy(     QSizePolicy::Preferred, QSizePolicy::Preferred);
    pushButton3->setSizePolicy(     QSizePolicy::Preferred, QSizePolicy::Preferred);
    pushButton4->setSizePolicy(     QSizePolicy::Preferred, QSizePolicy::Preferred);
    pushButton5->setSizePolicy(     QSizePolicy::Preferred, QSizePolicy::Preferred);
    pushButton6->setSizePolicy(     QSizePolicy::Preferred, QSizePolicy::Preferred);
    pushButton7->setSizePolicy(     QSizePolicy::Preferred, QSizePolicy::Preferred);
    pushButton8->setSizePolicy(     QSizePolicy::Preferred, QSizePolicy::Preferred);
    pushButton9->setSizePolicy(     QSizePolicy::Preferred, QSizePolicy::Preferred);
    pushButtonPlus->setSizePolicy(  QSizePolicy::Preferred, QSizePolicy::Preferred);
    pushButtonMinus->setSizePolicy( QSizePolicy::Preferred, QSizePolicy::Preferred);
    pushButtonDot->setSizePolicy(   QSizePolicy::Preferred, QSizePolicy::Preferred);
    pushButtonMult->setSizePolicy(  QSizePolicy::Preferred, QSizePolicy::Preferred);
    pushButtonDivide->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    pushButtonEquals->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);

    QString StyleSheetNumbers = "QPushButton { color: black; background-color: #FAFAFA; border: none; font: 17pt 'Microsoft YaHei UI'; outline: none;} QPushButton:hover { background-color: #D8D8D8; border-style: solid; border-width: 3px; border-color: #F2F2F2; } QPushButton:pressed { background-color: #A4A4A4; border-style: solid; border-width: 3px; border-color: #E6E6E6; }";
    QString StyleSheetSigns =   "QPushButton { color: black; background-color: #E6E6E6; border: none; font: 19pt 'Microsoft YaHei UI Light'; outline: none; } QPushButton:hover { background-color: #2ECCFA; border-style: solid; border-width: 3px; border-color: #58D3F7; } QPushButton:pressed { background-color: #81DAF5; border-style: solid; border-width: 3px; border-color: #A9E2F3; }";
    pushButton0->setStyleSheet(     StyleSheetNumbers);
    pushButton1->setStyleSheet(     StyleSheetNumbers);
    pushButton2->setStyleSheet(     StyleSheetNumbers);
    pushButton3->setStyleSheet(     StyleSheetNumbers);
    pushButton4->setStyleSheet(     StyleSheetNumbers);
    pushButton5->setStyleSheet(     StyleSheetNumbers);
    pushButton6->setStyleSheet(     StyleSheetNumbers);
    pushButton7->setStyleSheet(     StyleSheetNumbers);
    pushButton8->setStyleSheet(     StyleSheetNumbers);
    pushButton9->setStyleSheet(     StyleSheetNumbers);
    pushButtonPlus->setStyleSheet(  StyleSheetSigns);
    pushButtonMinus->setStyleSheet( StyleSheetSigns);
    pushButtonDot->setStyleSheet(   StyleSheetSigns);
    pushButtonMult->setStyleSheet(  StyleSheetSigns);
    pushButtonDivide->setStyleSheet(StyleSheetSigns);
    pushButtonEquals->setStyleSheet(StyleSheetSigns);

    QGridLayout *simpleCalcLayout = new QGridLayout(this);
    simpleCalcLayout->setSpacing(0);
    simpleCalcLayout->setContentsMargins(0, 0, 0, 0);

    simpleCalcLayout->addWidget(pushButton7,      0, 0, 1, 1);
    simpleCalcLayout->addWidget(pushButton8,      0, 1, 1, 1);
    simpleCalcLayout->addWidget(pushButton9,      0, 2, 1, 1);
    simpleCalcLayout->addWidget(pushButtonDivide, 0, 3, 1, 1);
    simpleCalcLayout->addWidget(pushButton4,      1, 0, 1, 1);
    simpleCalcLayout->addWidget(pushButton5,      1, 1, 1, 1);
    simpleCalcLayout->addWidget(pushButton6,      1, 2, 1, 1);
    simpleCalcLayout->addWidget(pushButtonMult,   1, 3, 1, 1);
    simpleCalcLayout->addWidget(pushButton1,      2, 0, 1, 1);
    simpleCalcLayout->addWidget(pushButton2,      2, 1, 1, 1);
    simpleCalcLayout->addWidget(pushButton3,      2, 2, 1, 1);
    simpleCalcLayout->addWidget(pushButtonMinus,  2, 3, 1, 1);
    simpleCalcLayout->addWidget(pushButtonEquals, 0, 4, 4, 1);
    simpleCalcLayout->addWidget(pushButton0,      3, 0, 1, 2);
    simpleCalcLayout->addWidget(pushButtonDot,    3, 2, 1, 1);
    simpleCalcLayout->addWidget(pushButtonPlus,   3, 3, 1, 1);

    QWidget *simpleCalcWidget = new QWidget(this);
    simpleCalcWidget->setLayout(simpleCalcLayout);

    connect(pushButton0,      SIGNAL(clicked()), this, SLOT(digitClicked()));
    connect(pushButton1,      SIGNAL(clicked()), this, SLOT(digitClicked()));
    connect(pushButton2,      SIGNAL(clicked()), this, SLOT(digitClicked()));
    connect(pushButton3,      SIGNAL(clicked()), this, SLOT(digitClicked()));
    connect(pushButton4,      SIGNAL(clicked()), this, SLOT(digitClicked()));
    connect(pushButton5,      SIGNAL(clicked()), this, SLOT(digitClicked()));
    connect(pushButton6,      SIGNAL(clicked()), this, SLOT(digitClicked()));
    connect(pushButton7,      SIGNAL(clicked()), this, SLOT(digitClicked()));
    connect(pushButton8,      SIGNAL(clicked()), this, SLOT(digitClicked()));
    connect(pushButton9,      SIGNAL(clicked()), this, SLOT(digitClicked()));
    connect(pushButtonPlus,   SIGNAL(clicked()), this, SLOT(operatorClicked()));
    connect(pushButtonMinus,  SIGNAL(clicked()), this, SLOT(operatorClicked()));
    connect(pushButtonMult,   SIGNAL(clicked()), this, SLOT(operatorClicked()));
    connect(pushButtonDivide, SIGNAL(clicked()), this, SLOT(operatorClicked()));
    connect(pushButtonDot,    SIGNAL(clicked()), this, SLOT(dotClicked()));
    connect(pushButtonEquals, SIGNAL(clicked()), this, SLOT(equalClicked()));

    QPushButton* pushButtonBackSpace = new QPushButton(QString::fromUtf8("\u232B"), this);
    QPushButton* pushButtonClear =     new QPushButton(QString::fromUtf8("C"), this);

    QString StyleSheetBackSpace = "QPushButton { color: black; background-color: #E6E6E6; border: none; font: 17pt 'Microsoft YaHei UI Light'; outline: none; } QPushButton:hover { background-color: #D8D8D8; border-style: solid; border-width: 3px; border-color: #E6E6E6; } QPushButton:pressed { background-color: #A4A4A4; border-style: solid; border-width: 3px; border-color: #E6E6E6; }";
    QString StyleSheetClear =     "QPushButton { color: black; background-color: #E6E6E6; border: none; font: 17pt 'Microsoft YaHei UI'; outline: none; } QPushButton:hover { background-color: #D8D8D8; border-style: solid; border-width: 3px; border-color: #E6E6E6; } QPushButton:pressed { background-color: #A4A4A4; border-style: solid; border-width: 3px; border-color: #E6E6E6; }";
    QString StyleSheetRadioButton = "QRadioButton {background-color: #E6E6E6; font: 10pt 'Microsoft YaHei UI Light'; padding: 0px 0px 0px 20px;} QRadioButton::indicator { width: 20px; height: 20px; } QRadioButton::indicator::unchecked {image: url(radio_normal.svg);} QRadioButton::indicator:unchecked:hover {image: url(radio_normal.svg);} QRadioButton::indicator:unchecked:pressed {image: url(radio_checked.svg);} QRadioButton::indicator:checked {image: url(radio_checked.svg);} QRadioButton::indicator:checked:hover {image: url(radio_checked.svg);} QRadioButton::indicator:checked:pressed {image: url(radio_checked.svg);}";
    QString StyleSheetLine = "QLineEdit {font: 26pt 'Microsoft YaHei UI'; qproperty-alignment: AlignRight; padding: 5px; border: none; background-color: #F2F2F2;}";


    pushButtonBackSpace->setStyleSheet(StyleSheetBackSpace);
    pushButtonClear->setStyleSheet(StyleSheetClear);
    display->setStyleSheet(StyleSheetLine);

    pushButtonBackSpace->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
    pushButtonClear->setSizePolicy(    QSizePolicy::Preferred, QSizePolicy::Preferred);

    QGridLayout *defaultCalcLayout = new QGridLayout(this);
    defaultCalcLayout->setSpacing(0);
    defaultCalcLayout->setContentsMargins(0, 0, 0, 0);

    defaultCalcLayout->addWidget(display,0, 0, 2, 5);

    defaultCalcLayout->addWidget(pushButtonBackSpace,   2, 3, 2, 1);
    defaultCalcLayout->addWidget(pushButtonClear,       2, 4, 2, 1);

    QWidget *defaultCalcWidget = new QWidget(this);
    defaultCalcWidget->setLayout(defaultCalcLayout);

    connect(pushButtonClear,     SIGNAL(clicked()), this, SLOT(clearClicked()));
    connect(pushButtonBackSpace, SIGNAL(clicked()), this, SLOT(backspaceClicked()));

    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->setSpacing(0);
    mainLayout->addWidget(defaultCalcWidget, 0, 0, 1, 3);
    mainLayout->addWidget(simpleCalcWidget,  1, 0, 2, 3);


    mainLayout->setContentsMargins(0, 0, 0, 0);
    setLayout(mainLayout);
}
void MainWindow::digitClicked() {

}
void MainWindow::operatorClicked() {

}
void MainWindow::equalClicked() {

}
void MainWindow::dotClicked() {

}
void MainWindow::backspaceClicked() {

}
void MainWindow::clearClicked() {

}
