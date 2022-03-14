#include <gui/smskey_screen/SmsKeyView.hpp>
#include <gui/smskey_screen/SmsKeyPresenter.hpp>

SmsKeyPresenter::SmsKeyPresenter(SmsKeyView& v)
    : view(v)
{

}

void SmsKeyPresenter::activate()
{

}

void SmsKeyPresenter::deactivate()
{

}

void SmsKeyPresenter::updateTime(uint8_t hour, uint8_t minute, uint8_t second)
{
	view.updateTime(hour, minute, second);
}
