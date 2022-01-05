#ifndef RenderWindowUIMultipleInheritance_H
#define RenderWindowUIMultipleInheritance_H

#include <QMainWindow>
#include "ui_RenderWindowUIMultipleInheritance.h"

class RenderWindowUIMultipleInheritance
    : public QMainWindow,
      private Ui::RenderWindowUIMultipleInheritance
{
    Q_OBJECT
public:
    RenderWindowUIMultipleInheritance();

public slots:

    virtual void slotExit();
};

#endif
