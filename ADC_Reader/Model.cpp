#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>


Model::Model() : modelListener(0)
{

}

void Model::tick()
{
/*
#ifndef SIMULATOR
	uint16_t currentValue = adc_binary_val;
#else
	static uint16_t currentValue = 0;
	currentValue = (currentValue); */
	Screen1Tick();
}
void Model::Screen1Tick()
{
	modelListener->Screen1Tick();
}
