/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/call_screen/CallViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <videos/VideoDatabase.hpp>

CallViewBase::CallViewBase() :
    buttonCallback(this, &CallViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    background.setXY(0, 0);
    background.setBitmap(touchgfx::Bitmap(BITMAP_DARK_BACKGROUNDS_MAIN_BG_TEXTURE_480X272PX_ID));

    header.setPosition(0, 0, 480, 50);

    headerBackground.setPosition(0, 0, 480, 50);
    headerBackground.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    headerBackground.setAlpha(68);
    header.add(headerBackground);

    clock.setPosition(0, 13, 100, 25);
    clock.setColor(touchgfx::Color::getColorFromRGB(14, 237, 237));
    clock.setTypedText(touchgfx::TypedText(T___SINGLEUSE_1NI5));
    clock.displayLeadingZeroForHourIndicator(false);
    clock.setDisplayMode(touchgfx::DigitalClock::DISPLAY_24_HOUR_NO_SECONDS);
    clock.setTime24Hour(9, 41, 0);
    header.add(clock);

    nameOfPage.setXY(204, 10);
    nameOfPage.setColor(touchgfx::Color::getColorFromRGB(14, 237, 237));
    nameOfPage.setLinespacing(0);
    nameOfPage.setTypedText(touchgfx::TypedText(T___SINGLEUSE_VPEI));
    header.add(nameOfPage);

    buttonCancel.setXY(37, 199);
    buttonCancel.setBitmaps(touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_EDGE_SMALL_ID), touchgfx::Bitmap(BITMAP_DARK_BUTTONS_ROUND_EDGE_SMALL_PRESSED_ID), touchgfx::Bitmap(BITMAP_OUTLINE_PHONE_DISABLED_BLACK_18DP_ID), touchgfx::Bitmap(BITMAP_OUTLINE_PHONE_DISABLED_BLACK_18DP_ID));
    buttonCancel.setIconXY(67, 12);
    buttonCancel.setAction(buttonCallback);

    video.setPosition(240, 53, 216, 216);
    video.setRepeat(true);
    video.setVideoData(video_SampleVideo2_216x216_bin_start, video_SampleVideo2_216x216_bin_length);
    video.play();

    add(__background);
    add(background);
    add(header);
    add(buttonCancel);
    add(video);
}

void CallViewBase::setupScreen()
{

}

void CallViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonCancel)
    {
        //stopCall
        //When buttonCancel clicked hide video
        //Hide video
        video.setVisible(false);
        video.invalidate();

        //toHome
        //When stopCall completed change screen to Home
        //Go to Home with screen transition towards West
        application().gotoHomeScreenSlideTransitionWest();
    }
}
