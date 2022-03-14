#include <gui/cameras_screen/CamerasView.hpp>

CamerasView::CamerasView()
{

}

void CamerasView::setupScreen()
{
    CamerasViewBase::setupScreen();
}

void CamerasView::tearDownScreen()
{
    CamerasViewBase::tearDownScreen();
}

void CamerasView::updateTime(uint8_t hour, uint8_t minute, uint8_t second)
{
	clock.setTime24Hour(hour, minute, second);
}
