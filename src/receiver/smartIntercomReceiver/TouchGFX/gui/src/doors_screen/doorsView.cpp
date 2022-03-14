#include <gui/doors_screen/DoorsView.hpp>

DoorsView::DoorsView()
{

}

void DoorsView::setupScreen()
{
    DoorsViewBase::setupScreen();
}

void DoorsView::tearDownScreen()
{
    DoorsViewBase::tearDownScreen();
}

void DoorsView::updateTime(uint8_t hour, uint8_t minute, uint8_t second)
{
	clock.setTime24Hour(hour, minute, second);
}
