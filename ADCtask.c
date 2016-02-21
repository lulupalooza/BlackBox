//*****************************************************************************
//!
//! ADCtask.c - ADC module. 
//!
//! \addtogroup ADC
//! @{
//*****************************************************************************

//*****************************************************************************
//!
//! void taskADCsample(uint32_t ADC_base, uint32_t Sample_Sequencer,
//!                   uint32_t *ADC_queue)
//!
//! \param ADC_base is the base address of the ADC module.
//! \param Sample_Sequencer is the sample sequence number.
//! \param ADC_queue is the buffer where the ADC conversion data is stored.
//!
//! This task triggers an ADC conversion and copies data from the 
//! specified sample sequencer output FIFO to \e ADC_queue upon completion
//! of the conversion. \e ADC_queue must be set up to accomodate all
//! conversion values in ADC FIFO.
//*****************************************************************************
void taskADCsample(uint32_t ADC_base, uint32_t Sample_Sequencer,
                   uint32_t *ADC_queue) {

	< Enable and initialize ADC - ADC_base >
	< Enable ADC Sample Sequencer: ADC_ACTSS >

	WHILE running
	{
		< trigger ADC conversion via ADCPSSI register >
		WHILE ADC FIFO buffer not full
			< wait >
		< read ADC sample from FIFO >
		< convert reading to voltage value (3.3*sample value / 4096) >
		< copy ADC value to ADC_queue >
	}
}

//*****************************************************************************
//
// Close adc group.
//! @}
//
//*****************************************************************************