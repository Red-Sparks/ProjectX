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
    void updateTime(uint8_t hour, uint8_t minute, uint8_t second);
protected:
};

#endif // KEYVIEW_HPP
