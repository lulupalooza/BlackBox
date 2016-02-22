//*****************************************************************************
//!
//! tempMan.c - Module  
//!
//! \addtogroup Temp
//! @{
//*****************************************************************************

//*****************************************************************************
//!
//! uint32_t getTempData()
//!
//! This method retrieves the most recent temperature readings and stores them
//! for use by other modules.
//!
//! \return The most recent temperature reading.
//*****************************************************************************
uint32_t getTempData()
{
	IF temp_queue is not empty
	{
		< update stored temperature value >
	}
	< return stored temperature value >
}

//*****************************************************************************
//
// Close Temp group.
//! @}
//
//*****************************************************************************