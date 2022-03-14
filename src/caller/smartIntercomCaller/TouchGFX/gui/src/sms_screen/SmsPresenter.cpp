#include <gui/sms_screen/SmsView.hpp>
#include <gui/sms_screen/SmsPresenter.hpp>

SmsPresenter::SmsPresenter(SmsView& v)
    : view(v)
{

}

void SmsPresenter::activate()
{

}

void SmsPresenter::deactivate()
{

}

void SmsPresenter::updateTime(uint8_t hour, uint8_t minute, uint8_t second)
{
	view.updateTime(hour, minute, second);
}
