#include <gui/key_screen/KeyView.hpp>
#include <gui/key_screen/KeyPresenter.hpp>

KeyPresenter::KeyPresenter(KeyView& v)
    : view(v)
{

}

void KeyPresenter::activate()
{

}

void KeyPresenter::deactivate()
{

}

void KeyPresenter::updateTime(uint8_t hour, uint8_t minute, uint8_t second)
{
	view.updateTime(hour, minute, second);
}
