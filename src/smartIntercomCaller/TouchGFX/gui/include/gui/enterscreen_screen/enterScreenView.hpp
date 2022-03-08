#ifndef ENTERSCREENVIEW_HPP
#define ENTERSCREENVIEW_HPP

#include <gui_generated/enterscreen_screen/enterScreenViewBase.hpp>
#include <gui/enterscreen_screen/enterScreenPresenter.hpp>

class enterScreenView : public enterScreenViewBase
{
public:
    enterScreenView();
    virtual ~enterScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // ENTERSCREENVIEW_HPP
