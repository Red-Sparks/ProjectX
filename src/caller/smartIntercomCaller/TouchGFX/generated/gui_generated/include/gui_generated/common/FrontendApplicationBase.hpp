/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef FRONTENDAPPLICATIONBASE_HPP
#define FRONTENDAPPLICATIONBASE_HPP

#include <mvp/MVPApplication.hpp>
#include <gui/model/Model.hpp>

class FrontendHeap;

class FrontendApplicationBase : public touchgfx::MVPApplication
{
public:
    FrontendApplicationBase(Model& m, FrontendHeap& heap);
    virtual ~FrontendApplicationBase() { }

    // Home
    void gotoHomeScreenNoTransition();

    void gotoHomeScreenSlideTransitionWest();

    // Key
    void gotoKeyScreenSlideTransitionEast();

    // Call
    void gotoCallScreenSlideTransitionEast();

    // SmsKey
    void gotoSmsKeyScreenSlideTransitionEast();

    // Sms
    void gotoSmsScreenSlideTransitionEast();

protected:
    touchgfx::Callback<FrontendApplicationBase> transitionCallback;
    FrontendHeap& frontendHeap;
    Model& model;

    // Home
    void gotoHomeScreenNoTransitionImpl();

    void gotoHomeScreenSlideTransitionWestImpl();

    // Key
    void gotoKeyScreenSlideTransitionEastImpl();

    // Call
    void gotoCallScreenSlideTransitionEastImpl();

    // SmsKey
    void gotoSmsKeyScreenSlideTransitionEastImpl();

    // Sms
    void gotoSmsScreenSlideTransitionEastImpl();
};

#endif // FRONTENDAPPLICATIONBASE_HPP
