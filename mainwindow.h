#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qtreewidget.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void on_actionOuvrir_triggered();
	void on_mainXMLTree_itemDoubleClicked(QTreeWidgetItem * item, int index);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
