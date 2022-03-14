#include <gui/sms_screen/SmsView.hpp>

SmsView::SmsView()
{

}

void SmsView::setupScreen()
{
    SmsViewBase::setupScreen();
}

void SmsView::tearDownScreen()
{
    SmsViewBase::tearDownScreen();
}

void SmsView::updateTime(uint8_t hour, uint8_t minute, uint8_t second)
{
	clock.setTime24Hour(hour, minute, second);
}
