#include "mainwindow.h"

void MainWindow::setOk() {
  label.setText("Ok");
  label.setStyleSheet("QLabel {color : green;}");
}

void MainWindow::setNotOk() {
  label.setText("Not ok");
  label.setStyleSheet("QLabel {color : red;}");
}


MainWindow::MainWindow () {

  gridLayout.addWidget(&lineEdit, 0, 0, 1, 1);
  gridLayout.addWidget(&label, 1, 0, 1, 1);
  centralWidget.setLayout(&gridLayout);
  setCentralWidget(&centralWidget);

  QObject::connect(
    &lineEdit, &QLineEdit::textEdited,
    [this](const QString& currentText) {
      QRegularExpression exp("^(\\+)+([0-9]){11}$");
      if (exp.match(currentText).hasMatch()) {
        setOk();
      } else {
        setNotOk();
      }
    });
}