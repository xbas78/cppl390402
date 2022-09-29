#include <QMainWindow>
#include <QGridLayout>
#include <QLineEdit>
#include <QLabel>
#include <QRegularExpression>

class MainWindow : public QMainWindow {
  QWidget centralWidget;
  QGridLayout gridLayout;
  QLineEdit lineEdit;
  QLabel label;

  void setOk();
  void setNotOk();

public:
  MainWindow ();
};