#include <gui/cameras_screen/CamerasView.hpp>
#include <gui/cameras_screen/CamerasPresenter.hpp>

CamerasPresenter::CamerasPresenter(CamerasView& v)
    : view(v)
{

}

void CamerasPresenter::activate()
{

}

void CamerasPresenter::deactivate()
{

}

void CamerasPresenter::updateTime(uint8_t hour, uint8_t minute, uint8_t second)
{
	view.updateTime(hour, minute, second);
}
