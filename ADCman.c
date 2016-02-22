//*****************************************************************************
//!
//! ADCman.c - Communications module. 
//!
//! \addtogroup ADC
//! @{
//*****************************************************************************

//*****************************************************************************
//
// Default ADC sample rate
//
//*****************************************************************************
#define DEFAULT_SAMPLE_RATE (500) //!< Default ADC sample rate, in ms.

//*****************************************************************************
//!
//! uint32_t getADCSampleRate()
//!
//! This method is used to report the current sample rate of the ADC, in ms.
//!
//! \return The current sample rate of the ADC, in ms.
//*****************************************************************************
uint32_t getADCSampleRate()
{
	< Read and return ADC sample rate from global variable. >
}

//*****************************************************************************
//!
//! void setADCSampleRate()
//!
//! This method is used to set the sample rate of the ADC.
//!
//! \param sampleRate is the new sample rate of the ADC, in ms.
//!
//! \return None.
//*****************************************************************************
void setADCSampleRate(uint32_t sampleRate)
{
	< Set the ADC sample rate global variable to the provided sample rate. >
}

//*****************************************************************************
//
// Close ADC group.
//! @}
//
//*****************************************************************************