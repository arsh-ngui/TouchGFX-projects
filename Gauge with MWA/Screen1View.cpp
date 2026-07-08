#include <gui/screen1_screen/Screen1View.hpp>
extern "C" { uint16_t adcValue;
}
extern "C" { uint16_t Read_ADC_Value(void);
}


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

void Screen1View::updateADCValue(uint16_t adcValue)
{
	Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%d", adcValue);
	textArea1.invalidate();

	if (adcValue> 300)
		{
			adcValue = 300;
		}

	gauge1.setValue(adcValue);
	gauge1.invalidate();


}

void Screen1View::handleTickEvent()
{
}
