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
	void on_actionNouveau_triggered();
	void on_mainXMLTree_itemDoubleClicked(QTreeWidgetItem * item, int index);
	void on_AddButton_clicked();
	void on_DelButton_clicked();
	void Save();
	void SaveAs();

private:
    Ui::MainWindow *ui;
	QString m_fileName;
};

#endif // MAINWINDOW_H
