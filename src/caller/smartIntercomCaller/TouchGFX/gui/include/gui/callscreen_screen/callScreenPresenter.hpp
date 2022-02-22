#ifndef CALLSCREENPRESENTER_HPP
#define CALLSCREENPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class callScreenView;

class callScreenPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    callScreenPresenter(callScreenView& v);

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

    virtual ~callScreenPresenter() {};

private:
    callScreenPresenter();

    callScreenView& view;
};

#endif // CALLSCREENPRESENTER_HPP
