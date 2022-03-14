#include <gui/call_screen/CallView.hpp>
#include <gui/call_screen/CallPresenter.hpp>

CallPresenter::CallPresenter(CallView& v)
    : view(v)
{

}

void CallPresenter::activate()
{

}

void CallPresenter::deactivate()
{

}

void CallPresenter::updateTime(uint8_t hour, uint8_t minute, uint8_t second)
{
	view.updateTime(hour, minute, second);
}
