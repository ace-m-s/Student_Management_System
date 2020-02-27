#ifndef MANAGEMENWINDOW_H
#define MANAGEMENWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class ManagemenWindow; }
QT_END_NAMESPACE

class ManagemenWindow : public QMainWindow
{
    Q_OBJECT

public:
    ManagemenWindow(QWidget *parent = nullptr);
    ~ManagemenWindow();

private:
    Ui::ManagemenWindow *ui;
};
#endif // MANAGEMENWINDOW_H
