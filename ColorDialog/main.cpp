#include "UICustomCore/CustomStyleConfig.h"
#include "ColorControlWidgets.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    g_StyleConfig->init();

    ColorControlWidgets w;
    w.setMinimumWidth(600);
    w.show();

    return a.exec();
}
