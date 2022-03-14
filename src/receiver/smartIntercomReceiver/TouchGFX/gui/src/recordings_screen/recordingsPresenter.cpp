#include <gui/recordings_screen/RecordingsView.hpp>
#include <gui/recordings_screen/RecordingsPresenter.hpp>

RecordingsPresenter::RecordingsPresenter(RecordingsView& v)
    : view(v)
{

}

void RecordingsPresenter::activate()
{

}

void RecordingsPresenter::deactivate()
{

}

void RecordingsPresenter::updateTime(uint8_t hour, uint8_t minute, uint8_t second)
{
	view.updateTime(hour, minute, second);
}
