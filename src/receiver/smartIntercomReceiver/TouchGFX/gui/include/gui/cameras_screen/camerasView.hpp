#ifndef CAMERASVIEW_HPP
#define CAMERASVIEW_HPP

#include <gui_generated/cameras_screen/camerasViewBase.hpp>
#include <gui/cameras_screen/camerasPresenter.hpp>

class camerasView : public camerasViewBase
{
public:
    camerasView();
    virtual ~camerasView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // CAMERASVIEW_HPP
