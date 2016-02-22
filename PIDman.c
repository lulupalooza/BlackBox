//*****************************************************************************
//!
//! PIDman.c - PID controller management module. 
//!
//! \addtogroup PID
//! @{
//*****************************************************************************

//*****************************************************************************
//
// Default desired temperature of black box.
//
//*****************************************************************************
#define DEFAULT_TEMP (75) //!< Default desired temperature of black box.

//*****************************************************************************
//!
//! uint32_t getTemperatureTarget()
//!
//! This method is used to retrieve the current target temperature of the PID
//! controller.
//!
//! \return The current temperature target.
//*****************************************************************************
uint32_t getTemperatureTarget()
{
	< Read and return temperature target from global variable. >
}

//*****************************************************************************
//!
//! void setTemperatureTarget()
//!
//! This method is used to set the target temperature of the PID controller.
//!
//! \param temperature is the new target temperature.
//!
//! \return None.
//*****************************************************************************
void setTemperatureTarget(uint32_t temperature)
{
	< Set the temperature target global variable to the provided temperature. >
}

//*****************************************************************************
//!
//! float getPComponent()
//!
//! This method is used to retrieve the contribution of the P component to the
//! total change requested by the PID controller.
//!
//! \return The current P contribution to the change requested by the PID
//! controller.
//*****************************************************************************
float getPComponent()
{
	< Read and return P component from PID controller. >
}

//*****************************************************************************
//!
//! float getIComponent()
//!
//! This method is used to retrieve the contribution of the I component to the
//! total change requested by the PID controller.
//!
//! \return The current I contribution to the change requested by the PID
//! controller.
//*****************************************************************************
float getIComponent()
{
	< Read and return I component from PID controller. >
}

//*****************************************************************************
//!
//! float getDComponent()
//!
//! This method is used to retrieve the contribution of the D component to the
//! total change requested by the PID controller.
//!
//! \return The current D contribution to the change requested by the PID
//! controller.
//*****************************************************************************
float getDComponent()
{
	< Read and return D component from PID controller. >
}

//*****************************************************************************
//!
//! float getPIDChange()
//!
//! This method is used to retrieve the total change requested by the PID
//! controller.
//!
//! \return The current change requested by the PID controller.
//*****************************************************************************
float getPIDChange()
{
	< Read and return current requested change from PID controller. >
}

//*****************************************************************************
//
// Close PID group.
//! @}
//
//*****************************************************************************