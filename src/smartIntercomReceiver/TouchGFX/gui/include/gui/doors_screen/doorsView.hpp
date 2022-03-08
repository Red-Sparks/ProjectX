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
protected:
};

#endif // DOORSVIEW_HPP
