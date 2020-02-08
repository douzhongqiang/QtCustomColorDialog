#ifndef COLORCONTROLWIDGETS_H
#define COLORCONTROLWIDGETS_H

#include <QWidget>
#include "UICustomWidgtes/CustomDialog.h"
class ColorControlWidgets : public CustomDialog
{
    Q_OBJECT

public:
    ColorControlWidgets(QWidget* parent = nullptr);
    ~ColorControlWidgets();

private:
    QWidget* createColorControlsWidget(void);
};

#endif
