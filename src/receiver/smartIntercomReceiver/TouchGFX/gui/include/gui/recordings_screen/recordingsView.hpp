#ifndef RECORDINGSVIEW_HPP
#define RECORDINGSVIEW_HPP

#include <gui_generated/recordings_screen/RecordingsViewBase.hpp>
#include <gui/recordings_screen/RecordingsPresenter.hpp>

class RecordingsView : public RecordingsViewBase
{
public:
    RecordingsView();
    virtual ~RecordingsView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    void updateTime(uint8_t hour, uint8_t minute, uint8_t second);
protected:
};

#endif // RECORDINGSVIEW_HPP
