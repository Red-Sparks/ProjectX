#ifndef DOORSVIEW_HPP
#define DOORSVIEW_HPP

#include <gui_generated/doors_screen/DoorsViewBase.hpp>
#include <gui/doors_screen/DoorsPresenter.hpp>

class DoorsView : public DoorsViewBase
{
public:
    DoorsView();
    virtual ~DoorsView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    void updateTime(uint8_t hour, uint8_t minute, uint8_t second);
protected:
};

#endif // DOORSVIEW_HPP
