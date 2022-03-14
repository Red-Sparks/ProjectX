#ifndef SMSKEYVIEW_HPP
#define SMSKEYVIEW_HPP

#include <gui_generated/smskey_screen/SmsKeyViewBase.hpp>
#include <gui/smskey_screen/SmsKeyPresenter.hpp>
#include <gui/common/CustomKeyboard.hpp> // add

class SmsKeyView : public SmsKeyViewBase
{
public:
    SmsKeyView();
    virtual ~SmsKeyView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void keyboardSelected(uint8_t value);
    virtual void updateScreen(); // add
    virtual void getBuffer(); // add
    virtual void clearBuffer(); // add
    void updateTime(uint8_t hour, uint8_t minute, uint8_t second);
protected:
    CustomKeyboard keyboard; // add
};

#endif // SMSKEYVIEW_HPP
