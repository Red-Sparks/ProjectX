#include <gui/home_screen/HomeView.hpp>

HomeView::HomeView()
{

}

void HomeView::setupScreen()
{
    HomeViewBase::setupScreen();
}

void HomeView::tearDownScreen()
{
    HomeViewBase::tearDownScreen();
}

void HomeView::updateTime(uint8_t hour, uint8_t minute, uint8_t second)
{
	clock.setTime24Hour(hour, minute, second);
}
