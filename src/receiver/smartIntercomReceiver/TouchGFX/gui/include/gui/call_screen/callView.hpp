#ifndef CALLVIEW_HPP
#define CALLVIEW_HPP

#include <gui_generated/call_screen/CallViewBase.hpp>
#include <gui/call_screen/CallPresenter.hpp>

class CallView : public CallViewBase
{
public:
    CallView();
    virtual ~CallView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    void updateTime(uint8_t hour, uint8_t minute, uint8_t second);
protected:
};

#endif // CALLVIEW_HPP
