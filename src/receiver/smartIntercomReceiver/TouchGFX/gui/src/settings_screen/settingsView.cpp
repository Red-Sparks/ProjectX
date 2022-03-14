#include <gui/settings_screen/SettingsView.hpp>

SettingsView::SettingsView()
{

}

void SettingsView::setupScreen()
{
    SettingsViewBase::setupScreen();
}

void SettingsView::tearDownScreen()
{
    SettingsViewBase::tearDownScreen();
}

void SettingsView::updateTime(uint8_t hour, uint8_t minute, uint8_t second)
{
	clock.setTime24Hour(hour, minute, second);
}
