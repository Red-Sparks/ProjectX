#include <gui/call_screen/CallView.hpp>

CallView::CallView()
{

}

void CallView::setupScreen()
{
    CallViewBase::setupScreen();
}

void CallView::tearDownScreen()
{
    CallViewBase::tearDownScreen();
}

void CallView::updateTime(uint8_t hour, uint8_t minute, uint8_t second)
{
	clock.setTime24Hour(hour, minute, second);
}
