#ifndef UICUSTOMTEXTEDITTAGCONTROL_H
#define UICUSTOMTEXTEDITTAGCONTROL_H

#include "UICustomWidgtes/CustomWidget.h"
#include "UICustomSingleControl/UICustomTextEdit.h"
#include <QWidget>
#include <QHBoxLayout>
#include "customcontrols_global.h"

class QLabel;
class CUSTOMCONTROLSSHARED_EXPORT UICustomTextEditTagControl : public CustomWidget
{
    Q_OBJECT
public:
    UICustomTextEditTagControl(QWidget* parent = nullptr);
    ~UICustomTextEditTagControl();

    void setColumnWidth(int column, int width);
    void setTagText(const QString& tagText);

private:
    QHBoxLayout* m_pLayout = nullptr;
    UICustomTextEdit* m_pTextEdit = nullptr;

    QLabel* m_pTagLabel = nullptr;
};

#endif
