#ifndef DOORSPRESENTER_HPP
#define DOORSPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class DoorsView;

class DoorsPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    DoorsPresenter(DoorsView& v);

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

    virtual ~DoorsPresenter() {};

private:
    DoorsPresenter();

    DoorsView& view;
};

#endif // DOORSPRESENTER_HPP
