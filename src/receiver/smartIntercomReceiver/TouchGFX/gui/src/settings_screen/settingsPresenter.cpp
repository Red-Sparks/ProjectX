#include <gui/settings_screen/SettingsView.hpp>
#include <gui/settings_screen/SettingsPresenter.hpp>

SettingsPresenter::SettingsPresenter(SettingsView& v)
    : view(v)
{

}

void SettingsPresenter::activate()
{

}

void SettingsPresenter::deactivate()
{

}

void SettingsPresenter::updateTime(uint8_t hour, uint8_t minute, uint8_t second)
{
	view.updateTime(hour, minute, second);
}
