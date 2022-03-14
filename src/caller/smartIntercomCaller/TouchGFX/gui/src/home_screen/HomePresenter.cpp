#include <gui/home_screen/HomeView.hpp>
#include <gui/home_screen/HomePresenter.hpp>

HomePresenter::HomePresenter(HomeView& v)
    : view(v)
{

}

void HomePresenter::activate()
{

}

void HomePresenter::deactivate()
{

}

void HomePresenter::updateTime(uint8_t hour, uint8_t minute, uint8_t second)
{
	view.updateTime(hour, minute, second);
}
