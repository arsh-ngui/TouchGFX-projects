#include <gui/screen1_screen/Screen1View.hpp>
#include <touchgfx/Color.hpp>

Screen1View::Screen1View()
{
	isColorThere = false;
}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::bttnToggled()
{
	if(isColorThere)
	{
		bgBox.setColor(touchgfx::Color::getColorFromRGB(255,0,0));
		isColorThere = false;
	}
	else
	{
		bgBox.setColor(touchgfx::Color::getColorFromRGB(0,0,255));
		isColorThere = true;
	}
	bgBox.invalidate();
}
