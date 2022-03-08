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

    // home
    void gotohomeScreenNoTransition();

    // settings
    void gotosettingsScreenNoTransition();

    // recordings
    void gotorecordingsScreenNoTransition();

    // cameras
    void gotocamerasScreenNoTransition();

    // doors
    void gotodoorsScreenNoTransition();

    // doNotDisturb
    void gotodoNotDisturbScreenNoTransition();

protected:
    touchgfx::Callback<FrontendApplicationBase> transitionCallback;
    FrontendHeap& frontendHeap;
    Model& model;

    // home
    void gotohomeScreenNoTransitionImpl();

    // settings
    void gotosettingsScreenNoTransitionImpl();

    // recordings
    void gotorecordingsScreenNoTransitionImpl();

    // cameras
    void gotocamerasScreenNoTransitionImpl();

    // doors
    void gotodoorsScreenNoTransitionImpl();

    // doNotDisturb
    void gotodoNotDisturbScreenNoTransitionImpl();
};

#endif // FRONTENDAPPLICATIONBASE_HPP