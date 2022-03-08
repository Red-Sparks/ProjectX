#ifndef CAMERASPRESENTER_HPP
#define CAMERASPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class CamerasView;

class CamerasPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    CamerasPresenter(CamerasView& v);

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

    virtual ~CamerasPresenter() {};

private:
    CamerasPresenter();

    CamerasView& view;
};

#endif // CAMERASPRESENTER_HPP
