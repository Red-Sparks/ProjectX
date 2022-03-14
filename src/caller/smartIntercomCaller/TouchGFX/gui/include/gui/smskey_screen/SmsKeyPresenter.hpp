#ifndef SMSKEYPRESENTER_HPP
#define SMSKEYPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class SmsKeyView;

class SmsKeyPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    SmsKeyPresenter(SmsKeyView& v);

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

    virtual ~SmsKeyPresenter() {};
    void updateTime(uint8_t hour, uint8_t minute, uint8_t second);
private:
    SmsKeyPresenter();

    SmsKeyView& view;
};

#endif // SMSKEYPRESENTER_HPP
