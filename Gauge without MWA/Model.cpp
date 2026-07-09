#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>
#include <cstdint>

#ifndef SIMULATOR
#include "mwa.h"
#endif

extern "C" {
	uint16_t Read_ADC_Value(void);
}

Model::Model() : modelListener(0)
{

}

void Model::tick()
{
	float filteredValue = 0.0f;
	uint16_t adcValue = Read_ADC_Value();
	filteredValue = MWAOut(adcValue);

	if (modelListener != 0)
	{
		modelListener -> updateADCValue(filteredValue);
	}

}

