//*****************************************************************************
//!
//! PID.c - PID controller module. 
//!
//! \addtogroup PID
//! @{
//*****************************************************************************


//*****************************************************************************
//
// Default desired temperature of black box.
//
//*****************************************************************************
#define DEFAULT_TEMP                 (75) //!< Default desired temperature of black box.

//*****************************************************************************
//!
//! void taskPID()
//!
//! This task compares the temperature value in \e temp_queue, or the
//! measured temperature inside the black box, and compares it to the desired
//! black box temperature. Using the difference between measured and desired
//! temp, a new ratio of heater on/off time is created. This ratio is
//! stored in PWM_ratio for use by the power driver module to control the heater and adjust
//! black box temp as needed. The desired temp will default to \b DEFAULT_TEMP
//! unless the user has specified a desired temp.
//!
//! \return None.
//*****************************************************************************
void taskPID() {
	uint32_t desired_temp;
	< set desired_temp to DEFAULT_TEMP >
	
	WHILE running
	{
		IF user_input_flag is valid 
			< set desired temp to user input temp >
		temp_queue is not empty
		{
			< compare temp_queue value to /e desired_temp to generate error term >
		}
		
		< set PWM_ratio validity to FALSE >
		< generate new power output ratio with computed temp error term and PID controller blocks >
		< update PWM_ratio with new power output ratio >
		< set PWM_ratio validity to TRUE >
	}
}

//*****************************************************************************
//
// Close PID group.
//! @}
//
//*****************************************************************************