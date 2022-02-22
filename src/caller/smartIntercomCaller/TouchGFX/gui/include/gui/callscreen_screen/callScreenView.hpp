#ifndef CALLSCREENVIEW_HPP
#define CALLSCREENVIEW_HPP

#include <gui_generated/callscreen_screen/callScreenViewBase.hpp>
#include <gui/callscreen_screen/callScreenPresenter.hpp>

class callScreenView : public callScreenViewBase
{
public:
    callScreenView();
    virtual ~callScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // CALLSCREENVIEW_HPP
