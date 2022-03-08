#ifndef DOORSPRESENTER_HPP
#define DOORSPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class doorsView;

class doorsPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    doorsPresenter(doorsView& v);

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

    virtual ~doorsPresenter() {};

private:
    doorsPresenter();

    doorsView& view;
};

#endif // DOORSPRESENTER_HPP
