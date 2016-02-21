//*****************************************************************************
//!
//! tempCalc.c - Module to convert ADC voltage readings to temperature. 
//!
//! \addtogroup tempCalc
//! @{
//*****************************************************************************

//*****************************************************************************
//!
//! void taskTempCalc()
//!
//! This task calculates the temperature inside the black box based
//! on the ADC reading stored in \e ADC_queue. It stores the calculated
//! temperature value in \e temp_queue for the PID module to utilize.
//!
//! \return None.
//*****************************************************************************
void taskTempCalc() {

	WHILE running
	{
		IF ADC_queue is not empty
		{
			< convert queue value to temperature (m*queue value + b) >
			< copy ADC value to temp_queue >
		}
	}
}

//*****************************************************************************
//
// Close tempCalc group.
//! @}
//
//*****************************************************************************