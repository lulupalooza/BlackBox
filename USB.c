//*****************************************************************************
//!
//! usb.c - usb module. 
//!
//! \addtogroup USB
//! @{
//*****************************************************************************


//*****************************************************************************
//!
//! void taskUSB()
//!
//! \param USB_base is the base address of the USB module.
//!
//! This task is used to send measurement data about the black box system
//! to the user/PC via USB. It is also used to check for a user input desired
//! temperature.
//!
//! \return None.
//*****************************************************************************
void taskUSB(uint32_t USB_base) {
	
	< Enable and initialize USB - USB_base >
	< Enable USB receive interrupts >
	
	WHILE running
	{
		< send data message via USB to user/PC >
		
		IF user_input_temp is within valid range (range TBD)
		{
			< set desired_temp to user_input_temp >
			< set user_input_flag to TRUE >
			< reset user_input_temp >
		}
			
	}
}

//*****************************************************************************
//!
//! void USB_irq()
//!
//! Interrupt handler for USB. Triggers when user input received via USB.
//!
//! \return None.
//*****************************************************************************
void USB_irq() {
	
	< read input value from USB receive buffer >
	< set user_input_temp to received value > 
	
//*****************************************************************************
//
// Close USB group.
//! @}
//
//*****************************************************************************