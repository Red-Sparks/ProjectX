#ifndef KEYVIEW_HPP
#define KEYVIEW_HPP

#include <gui_generated/key_screen/KeyViewBase.hpp>
#include <gui/key_screen/KeyPresenter.hpp>

class KeyView : public KeyViewBase
{
public:
    KeyView();
    virtual ~KeyView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // KEYVIEW_HPP
