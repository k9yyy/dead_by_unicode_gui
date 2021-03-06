#ifndef INPUTWINDOW_H
#define INPUTWINDOW_H

#include <QWidget>
#include "hexinput.h"
#include "localization.h"

namespace Ui {
class InputWindow;
}

class InputWindow : public QWidget
{
    Q_OBJECT

public:
    explicit InputWindow(QWidget *parent = 0);
    void setFocusToTextArea();
    void setKeyDelay(int delay);
    void setAutoEnter(bool flag);
    void setLocalizationContext(Localization *l10n);
    void loadUiText();
    ~InputWindow();

private slots:
    void on_enterButton_pressed();
    void on_hideButton_pressed();
    void keyEventHandler(QKeyEvent *key);

private:
    Ui::InputWindow *ui;
    HexInput *hexinput;
    Localization *l10n;
    bool autoEnter = false;
    void sendText();
};

#endif // INPUTWINDOW_H
