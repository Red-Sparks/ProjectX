#include <gui/doors_screen/DoorsView.hpp>
#include <gui/doors_screen/DoorsPresenter.hpp>

DoorsPresenter::DoorsPresenter(DoorsView& v)
    : view(v)
{

}

void DoorsPresenter::activate()
{

}

void DoorsPresenter::deactivate()
{

}

void DoorsPresenter::updateTime(uint8_t hour, uint8_t minute, uint8_t second)
{
	view.updateTime(hour, minute, second);
}
