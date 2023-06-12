#ifndef STATUSPANEL_H
#define STATUSPANEL_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class StatusPanel; }
QT_END_NAMESPACE

class StatusPanel : public QMainWindow
{
    Q_OBJECT

public:
    StatusPanel(QWidget *parent = nullptr);
    ~StatusPanel();

private slots:
    void on_pushButton_clicked();
    void check();

    void on_lineEdit_2_returnPressed();

private:
    Ui::StatusPanel *ui;
};
#endif // STATUSPANEL_H
