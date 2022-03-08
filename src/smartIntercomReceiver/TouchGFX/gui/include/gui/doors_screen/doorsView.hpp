#ifndef DOORSVIEW_HPP
#define DOORSVIEW_HPP

#include <gui_generated/doors_screen/doorsViewBase.hpp>
#include <gui/doors_screen/doorsPresenter.hpp>

class doorsView : public doorsViewBase
{
public:
    doorsView();
    virtual ~doorsView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // DOORSVIEW_HPP
