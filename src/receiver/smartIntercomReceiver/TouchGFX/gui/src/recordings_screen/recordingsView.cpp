#include <gui/recordings_screen/RecordingsView.hpp>

RecordingsView::RecordingsView()
{

}

void RecordingsView::setupScreen()
{
    RecordingsViewBase::setupScreen();
}

void RecordingsView::tearDownScreen()
{
    RecordingsViewBase::tearDownScreen();
}

void RecordingsView::updateTime(uint8_t hour, uint8_t minute, uint8_t second)
{
	clock.setTime24Hour(hour, minute, second);
}
