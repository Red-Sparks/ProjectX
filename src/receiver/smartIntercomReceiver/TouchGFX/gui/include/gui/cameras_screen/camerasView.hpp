#ifndef CAMERASVIEW_HPP
#define CAMERASVIEW_HPP

#include <gui_generated/cameras_screen/CamerasViewBase.hpp>
#include <gui/cameras_screen/CamerasPresenter.hpp>

class CamerasView : public CamerasViewBase
{
public:
    CamerasView();
    virtual ~CamerasView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // CAMERASVIEW_HPP
