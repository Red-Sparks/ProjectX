#ifndef KEYPRESENTER_HPP
#define KEYPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class KeyView;

class KeyPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    KeyPresenter(KeyView& v);

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

    virtual ~KeyPresenter() {};

private:
    KeyPresenter();

    KeyView& view;
};

#endif // KEYPRESENTER_HPP
