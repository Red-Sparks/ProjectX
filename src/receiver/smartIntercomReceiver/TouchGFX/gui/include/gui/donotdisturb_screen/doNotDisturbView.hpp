#ifndef DONOTDISTURBVIEW_HPP
#define DONOTDISTURBVIEW_HPP

#include <gui_generated/donotdisturb_screen/doNotDisturbViewBase.hpp>
#include <gui/donotdisturb_screen/doNotDisturbPresenter.hpp>

class doNotDisturbView : public doNotDisturbViewBase
{
public:
    doNotDisturbView();
    virtual ~doNotDisturbView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // DONOTDISTURBVIEW_HPP
