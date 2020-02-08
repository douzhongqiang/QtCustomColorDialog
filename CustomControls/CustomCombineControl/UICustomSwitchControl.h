#ifndef UICUSTOMSWITCHCONTROL_H
#define UICUSTOMSWITCHCONTROL_H

#include "UICustomCombineControlBase.h"
#include "UICustomSingleControl/UICustomSwitchWidget.h"
#include "customcontrols_global.h"

class CUSTOMCONTROLSSHARED_EXPORT UICustomSwitchControl : public UICustomCombineControlBase
{
    Q_OBJECT

public:
    UICustomSwitchControl(QWidget* parent = nullptr);
    ~UICustomSwitchControl();

    // 设置/获取当前值
    void setCurrentValue(bool isOn);
    bool getCurrentValue(void);

private:
    UICustomSwitchWidget* m_pSwitchWidget = nullptr;

signals:
    void valueChanged(bool isOn);
};

#endif
