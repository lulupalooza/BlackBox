//*****************************************************************************
//!
//! powerDrive.c - Power Driver module. 
//!
//! \addtogroup PowerDrive
//! @{
//*****************************************************************************


//*****************************************************************************
//!
//! void taskPowerDrive()
//!
//! \param GPIO_pwr_out is the GPIO pin used for PWM output signal to resistor/heater
//! inside black box.
//!
//! This task is used to determine the output signal to the resistor/heater inside
//! the black box. It will adjust the PWM signal used to drive the GPIO connected
//! to the heater system, and therefore the temp of the black box, according to 
//! input from PID controller module.
//!
//! \return None.
//*****************************************************************************
void taskPowerDrive(uint32_t GPIO_pwr_out) {
	
	< Initialize GPIO_pwr_out for PWM >
	< Initialize PWM signal - no signal or heat being generated to start off with >
	
	WHILE running
	{
		IF PWM_ratio is valid
		{
			< update PWM signal according to new power output ratio from PID >
		}
			
	}
}
	
//*****************************************************************************
//
// Close USB group.
//! @}
//
//*****************************************************************************