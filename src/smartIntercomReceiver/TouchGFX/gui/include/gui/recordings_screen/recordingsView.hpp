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
protected:
};

#endif // RECORDINGSVIEW_HPP
