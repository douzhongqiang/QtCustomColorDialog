#include "UICustomTextEdit.h"
#include <QKeyEvent>
#include <QDebug>

UICustomTextEdit::UICustomTextEdit(QWidget* parent)
    :QTextEdit(parent)
{

}

UICustomTextEdit::~UICustomTextEdit()
{

}

void UICustomTextEdit::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key::Key_Enter)
    {
        emit pressedEnterKey();
        event->accept();
        return;
    }

    return QTextEdit::keyPressEvent(event);
}
