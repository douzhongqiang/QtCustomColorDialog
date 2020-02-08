#ifndef UICUSTOMINTSPINBOX_H
#define UICUSTOMINTSPINBOX_H

#include <QWidget>
#include <QSpinBox>

class UICustomIntSpinBox : public QSpinBox
{
    Q_OBJECT

public:
    UICustomIntSpinBox(QWidget* parent = nullptr);
    ~UICustomIntSpinBox();

protected:
    virtual QSize sizeHint() const override;
    void keyPressEvent(QKeyEvent* event) override;
};

#endif
