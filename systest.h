#ifndef SYSTEST_H
#define SYSTEST_H

#include <unistd.h>
#include <direct.h>

#include <QMainWindow>
#include <QStandardPaths>
#include <QString>
#include <QFileDialog>
#include <QMessageBox>
#include <QSettings>
#include <QDebug>
#include <QProcess>
#include <QThread>
#include <QMovie>
#include <QSysInfo>
#include <QDesktopServices>
#include "testhread.h"

QT_BEGIN_NAMESPACE
namespace Ui { class sysTest; }
QT_END_NAMESPACE

class sysTest : public QMainWindow
{
    Q_OBJECT

public:
    sysTest(QWidget *parent = nullptr);

    ~sysTest();



    QString getDir();

    void initTree();

    void updateParentItem(QTreeWidgetItem* item);

    void createProcess(QString CMD);

    void testNetwork(QString RESDIR);

    void closeEvent(QCloseEvent *event);

private slots:
    //void starTest();

    void on_browse_clicked();

    void on_btn_start_clicked();

    void treeItemChanged(QTreeWidgetItem* item, int column);

    void stopThread();


    void on_btn_config_clicked();

    void on_btn_open_folder_clicked();

private:
    tesThread *object;

    QThread *newThread;

    Ui::sysTest *ui;


};
#endif // SYSTEST_H
