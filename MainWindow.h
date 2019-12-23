#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>
#include <QApplication>
#include <QPushButton>
#include <QLineEdit>

class MainWindow : public QWidget {
    Q_OBJECT

public:
    QLineEdit display; //Phan hien thi du lieu
    double answer; //Ket qua duoc luu tru
    char op; //Phep toan duoc luu tru (+,-,*,/)

public:
    MainWindow(QWidget *parent = nullptr);

private slots:
    void digitClicked(); //Su kien mot so duoc nhap vao
    void operatorClicked(); //Su kien mot phep toan duoc nhap vao
    void equalClicked();//Su kien phep toan bang duoc nhap vao
    void dotClicked();//Su kien nhap vao dau thap phan
    void backspaceClicked();//Su kien xoa di chu so cuoi
    void clearClicked();//Xoa toan bo chu so
};

#endif // MAINWINDOW_H
