#include "osget.h"
#include "ui_osget.h"

osget::osget(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::osget)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::MSWindowsFixedSizeDialogHint);
}

osget::~osget()
{
    delete ui;
}


void osget::on_pushButton_clicked()
{
    QProcess process;
    process.start("wmic path softwarelicensingservice get OA3xOriginalProductKey");
    process.waitForFinished(-1);
    license = process.readAllStandardOutput();
    ui->licos->setText(license);
}
