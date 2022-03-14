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
    void updateTime(uint8_t hour, uint8_t minute, uint8_t second);
protected:
};

#endif // CAMERASVIEW_HPP
