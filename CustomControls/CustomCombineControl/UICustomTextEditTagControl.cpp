#include "UICustomTextEditTagControl.h"
#include <QLabel>

UICustomTextEditTagControl::UICustomTextEditTagControl(QWidget* parent)
    :CustomWidget(parent)
{
    m_pLayout = new QHBoxLayout(this);

    m_pTagLabel = new QLabel();
    m_pLayout->addWidget(m_pTagLabel, 0, Qt::AlignTop);

    m_pTextEdit = new UICustomTextEdit;
    m_pLayout->addWidget(m_pTextEdit);
    m_pTextEdit->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
}

UICustomTextEditTagControl::~UICustomTextEditTagControl()
{

}

void UICustomTextEditTagControl::setTagText(const QString& tagText)
{
    m_pTagLabel->setText(tagText);
}

void UICustomTextEditTagControl::setColumnWidth(int column, int width)
{

}
