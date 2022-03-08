#ifndef CALLVIEW_HPP
#define CALLVIEW_HPP

#include <gui_generated/call_screen/callViewBase.hpp>
#include <gui/call_screen/callPresenter.hpp>

class callView : public callViewBase
{
public:
    callView();
    virtual ~callView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // CALLVIEW_HPP
