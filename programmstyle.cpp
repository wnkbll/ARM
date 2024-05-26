#include "programmstyle.h"

QString ProgrammStyle::GetButtonsStyle()
{
    return "QPushButton {"
           "    margin: 5px;"
           "    padding: 8px 15px;"
           "    border-radius: 12px;"
           "    border: 1px solid rgba(0,0,0,0.15);"
           "    background-color: #9381FF;"
           "    font-family:'Ubuntu Medium';"
           "    font-size:18px;"
           "}"
           "QPushButton::hover {"
           "    background-color: #B8B8FF"
           "}"
           ;
}
