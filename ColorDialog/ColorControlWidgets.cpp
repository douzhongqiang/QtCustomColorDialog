#include "ColorControlWidgets.h"
#include "CustomCombineControl/UICustomColorControl.h"
#include <QVBoxLayout>

ColorControlWidgets::ColorControlWidgets(QWidget* parent)
    :CustomDialog(parent)
{
    QWidget* widget = createColorControlsWidget();
    this->setContentWidget(widget);
    this->setWindowTitle(tr("ColorControl http://www.douzhq.cn"));
}

ColorControlWidgets::~ColorControlWidgets()
{

}

QWidget* ColorControlWidgets::createColorControlsWidget(void)
{
    QWidget* widget = new QWidget;
    QVBoxLayout* mainLayout = new QVBoxLayout(widget);
    mainLayout->setSpacing(2);

    // 创建颜色控件1
    UICustomColorControl* control1 = new UICustomColorControl;
    control1->setCurrentColor(QColor(100, 200, 100));
    control1->setTagText(tr("Test Color1: "));
    control1->setColumnWidth(0, 130);
    mainLayout->addWidget(control1);

    // 创建颜色控件2
    UICustomColorControl* control2 = new UICustomColorControl;
    control2->setCurrentColor(QColor(200, 100, 100));
    control2->setTagText(tr("Test Color2: "));
    control2->setColumnWidth(0, 130);
    mainLayout->addWidget(control2);

    // 创建颜色控件3
    UICustomColorControl* control3 = new UICustomColorControl;
    control3->setCurrentColor(QColor(100, 100, 200));
    control3->setTagText(tr("Test Color3: "));
    control3->setColumnWidth(0, 130);
    mainLayout->addWidget(control3);

    return widget;
}
