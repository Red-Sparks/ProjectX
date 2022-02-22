#ifndef RECORDINGSVIEW_HPP
#define RECORDINGSVIEW_HPP

#include <gui_generated/recordings_screen/recordingsViewBase.hpp>
#include <gui/recordings_screen/recordingsPresenter.hpp>

class recordingsView : public recordingsViewBase
{
public:
    recordingsView();
    virtual ~recordingsView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // RECORDINGSVIEW_HPP
