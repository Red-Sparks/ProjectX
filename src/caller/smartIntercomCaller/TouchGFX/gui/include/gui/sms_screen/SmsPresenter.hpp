#ifndef SMSPRESENTER_HPP
#define SMSPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class SmsView;

class SmsPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    SmsPresenter(SmsView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~SmsPresenter() {};
    void updateTime(uint8_t hour, uint8_t minute, uint8_t second);
private:
    SmsPresenter();

    SmsView& view;
};

#endif // SMSPRESENTER_HPP
