#include <gui/screen1_screen/Screen1View.hpp>

extern uint16_t adc_binary_val;

Screen1View::Screen1View()
{

}

void Screen1View::setupScreen()
{
    Screen1ViewBase::setupScreen();
}

void Screen1View::tearDownScreen()
{
    Screen1ViewBase::tearDownScreen();
}

void Screen1View::Screen1Tick()
{
	Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d",adc_binary_val);
	textArea1.invalidate();

}
