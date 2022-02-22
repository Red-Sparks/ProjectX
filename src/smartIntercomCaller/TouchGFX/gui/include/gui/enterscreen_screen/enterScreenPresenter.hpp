#ifndef ENTERSCREENPRESENTER_HPP
#define ENTERSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class enterScreenView;

class enterScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    enterScreenPresenter(enterScreenView& v);

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

    virtual ~enterScreenPresenter() {};

private:
    enterScreenPresenter();

    enterScreenView& view;
};

#endif // ENTERSCREENPRESENTER_HPP
