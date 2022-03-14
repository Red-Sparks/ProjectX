#ifndef SMSVIEW_HPP
#define SMSVIEW_HPP

#include <gui_generated/sms_screen/SmsViewBase.hpp>
#include <gui/sms_screen/SmsPresenter.hpp>

class SmsView : public SmsViewBase
{
public:
    SmsView();
    virtual ~SmsView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    void updateTime(uint8_t hour, uint8_t minute, uint8_t second);
protected:
};

#endif // SMSVIEW_HPP
