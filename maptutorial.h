#ifndef MAPTUTORIAL_H
#define MAPTUTORIAL_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MapTutorial; }
QT_END_NAMESPACE

class MapTutorial : public QMainWindow
{
    Q_OBJECT

public:
    MapTutorial(QWidget *parent = nullptr);
    ~MapTutorial();

private:
    Ui::MapTutorial *ui;
};
#endif // MAPTUTORIAL_H
