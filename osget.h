#ifndef OSGET_H
#define OSGET_H

#include <QMainWindow>
#include <QProcess>

QT_BEGIN_NAMESPACE
namespace Ui { class osget; }
QT_END_NAMESPACE

class osget : public QMainWindow
{
    Q_OBJECT

public:
    osget(QWidget *parent = nullptr);
    ~osget();

private slots:
    void on_pushButton_clicked();

private:
    Ui::osget *ui;
    QString license = "";
};
#endif // OSGET_H
