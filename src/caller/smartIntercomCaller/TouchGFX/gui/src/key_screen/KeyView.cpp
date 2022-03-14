#include <gui/key_screen/KeyView.hpp>

KeyView::KeyView()
{

}

void KeyView::setupScreen()
{
    KeyViewBase::setupScreen();
}

void KeyView::tearDownScreen()
{
    KeyViewBase::tearDownScreen();
}

void KeyView::updateTime(uint8_t hour, uint8_t minute, uint8_t second)
{
	clock.setTime24Hour(hour, minute, second);
}
