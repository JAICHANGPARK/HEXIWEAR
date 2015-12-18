/** ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : FreeRTOSConfig.h
**     Project     : HEXIWEAR_OLED_sensors_RTOS
**     Processor   : MK64FN1M0VDC12
**     Version     : Component 1.0.0, Driver 01.00, CPU db: 3.00.000
**     Repository  : KSDK 1.2.0
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-12-18, 15:42, # CodeGen: 32
**
**     Copyright : 1997 - 2015 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file FreeRTOSConfig.h                                                  
** @version 01.00
*/         
/*!
**  @addtogroup FreeRTOSConfig_module FreeRTOSConfig module documentation
**  @{
*/         
#ifndef __freertos_config_h__
#define __freertos_config_h__

/* Additional settings can be defined in the property Settings > User settings > Definitions of the FreeRTOS component */

/* Miscellaneous settings */
#define configGENERATE_STATIC_SOURCES            1 /* 1: it will create 'static' sources to be used without Processor Expert; 0: Processor Expert code generated */
#define configPEX_KINETIS_SDK                    1 /* 1: project is a Kinetis SDK Processor Expert project; 0: No Kinetis Processor Expert project */

#define configGENERATE_RUN_TIME_STATS            0 /* 1: generate runtime statistics; 0: no runtime statistics */

#define configUSE_PREEMPTION                     1 /* 1: pre-emptive mode; 0: cooperative mode */
#define configUSE_IDLE_HOOK                      0 /* 1: use Idle hook; 0: no Idle hook */
#define configUSE_TICK_HOOK                      0 /* 1: use Tick hook; 0: no Tick hook */
#define configUSE_MALLOC_FAILED_HOOK             1 /* 1: use MallocFailed hook; 0: no MallocFailed hook */
#define configTICK_RATE_HZ                       200 /* frequency of tick interrupt */
#define configSYSTICK_USE_LOW_POWER_TIMER        0 /* If using Kinetis Low Power Timer (LPTMR) instead of SysTick timer */
#define configSYSTICK_LOW_POWER_TIMER_CLOCK_HZ   1 /* 1 kHz LPO timer. Set to 1 if not used */

#define configCPU_CLOCK_HZ                       120000000 /* CPU core clock frequency (in Hz) */
#define configBUS_CLOCK_HZ                       60000000 /* Bus clock frequency (in Hz) */  

#define configSYSTICK_USE_CORE_CLOCK              1 /* System Tick is using core clock  */
#define configSYSTICK_CLOCK_DIVIDER               1 /* No divider */
#define configSYSTICK_CLOCK_HZ                    ((configCPU_CLOCK_HZ)/configSYSTICK_CLOCK_DIVIDER) /* frequency of system tick counter */
#define configMINIMAL_STACK_SIZE                 200 /* stack size in addressable stack units */

/* Heap Memory */
#define configFRTOS_MEMORY_SCHEME                3 /* 1 (only alloc), 2 (alloc/free), 3 (malloc) or 4 (coalesce blocks) */
#define configTOTAL_HEAP_SIZE                    8192 /* Size of heap in bytes */
#define configUSE_HEAP_SECTION_NAME              0 /* set to 1 if a custom section name (configHEAP_SECTION_NAME_STRING) shall be used, 0 otherwise */
  
/*----------------------------------------------------------*/
#define configMAX_TASK_NAME_LEN                  60 /* Task name length */
#define configUSE_TRACE_FACILITY                 0
#define configUSE_STATS_FORMATTING_FUNCTIONS     0
#define configUSE_16_BIT_TICKS                   0
#define configIDLE_SHOULD_YIELD                  1
#define configUSE_CO_ROUTINES                    0
#define configUSE_MUTEXES                        1
#define configCHECK_FOR_STACK_OVERFLOW           1 /* 0 is disabling stack overflow. Set it to 1 for Method1 or 2 for Method2 */  
#define configUSE_RECURSIVE_MUTEXES              1
#define configQUEUE_REGISTRY_SIZE                2
#define configUSE_QUEUE_SETS                     0
#define configUSE_COUNTING_SEMAPHORES            1
#define configUSE_APPLICATION_TASK_TAG           0

/* Tickless Idle Mode */
#define configUSE_TICKLESS_IDLE                  0 /* Set to 1 for tickless idle mode, 0 otherwise */
#define configEXPECTED_IDLE_TIME_BEFORE_SLEEP    2 /* Number of ticks must be larger than this to enter tickless idle mode */
#define configUSE_TICKLESS_IDLE_DECISION_HOOK    0 /* Set to 1 to enable application hook, zero otherwise */

#define configMAX_PRIORITIES                     64
#define configMAX_CO_ROUTINE_PRIORITIES          2

/* Software timer definitions. */
#define configUSE_TIMERS                         1
#define configTIMER_TASK_PRIORITY                63 
#define configTIMER_QUEUE_LENGTH                 10
#define configTIMER_TASK_STACK_DEPTH             400 

/* Set the following definitions to 1 to include the API function, or zero to exclude the API function. */  
#define INCLUDE_vTaskPrioritySet                 1
#define INCLUDE_uxTaskPriorityGet                1
#define INCLUDE_vTaskDelete                      1
#define INCLUDE_vTaskSuspend                     1
#define INCLUDE_vTaskDelayUntil                  1
#define INCLUDE_vTaskDelay                       1
#define INCLUDE_uxTaskGetStackHighWaterMark      1
#define INCLUDE_xTaskGetSchedulerState           1
#define INCLUDE_xQueueGetMutexHolder             1
#define INCLUDE_xTaskGetCurrentTaskHandle        0
#define INCLUDE_xTaskGetIdleTaskHandle           0
#define INCLUDE_eTaskGetState                    0
#define INCLUDE_pcTaskGetTaskName                0
#define INCLUDE_xEventGroupSetBitFromISR         1
#define INCLUDE_xTimerPendFunctionCall           1

/* Macros to identify the compiler used: */
#define configCOMPILER_ARM_GCC                   1 /* GNU ARM gcc compiler */
#define configCOMPILER_ARM_IAR                   2 /* IAR ARM compiler */
#define configCOMPILER_ARM_FSL                   3 /* Legacy Freescale ARM compiler */
#define configCOMPILER_ARM_KEIL                  4 /* ARM/Keil compiler */
#define configCOMPILER_S08_FSL                   5 /* Freescale HCS08 compiler */
#define configCOMPILER_S12_FSL                   6 /* Freescale HCS12(X) compiler */
#define configCOMPILER_CF1_FSL                   7 /* Freescale ColdFire V1 compiler */
#define configCOMPILER_CF2_FSL                   8 /* Freescale ColdFire V2 compiler */
#define configCOMPILER_DSC_FSL                   9 /* Freescale DSC compiler */

#ifndef configCOMPILER
  #define configCOMPILER                         configCOMPILER_ARM_GCC
#endif  

/* CPU family identification */
#define configCPU_FAMILY_S08                     1 /* S08 core */
#define configCPU_FAMILY_S12                     2 /* S12(X) core */
#define configCPU_FAMILY_CF1                     3 /* ColdFire V1 core */
#define configCPU_FAMILY_CF2                     4 /* ColdFire V2 core */
#define configCPU_FAMILY_DSC                     5 /* 56800/DSC */
#define configCPU_FAMILY_ARM_M0P                 6 /* ARM Cortex-M0+ */
#define configCPU_FAMILY_ARM_M4                  7 /* ARM Cortex-M4 */
#define configCPU_FAMILY_ARM_M4F                 8 /* ARM Cortex-M4F (with floating point unit) */

/* Macros to identify set of core families */
#define configCPU_FAMILY_IS_ARM_M4(fam)          (((fam) == configCPU_FAMILY_ARM_M4)  || ((fam) == configCPU_FAMILY_ARM_M4F))
#define configCPU_FAMILY_IS_ARM(fam)             (((fam) == configCPU_FAMILY_ARM_M0P) || configCPU_FAMILY_IS_ARM_M4(fam))

#ifndef configCPU_FAMILY
  #define configCPU_FAMILY                       configCPU_FAMILY_ARM_M4F
#endif

/* Kernel interrupt priority - should be set to the lowest priority */
#ifndef configKERNEL_INTERRUPT_PRIORITY
  #define configKERNEL_INTERRUPT_PRIORITY        0xF0
#endif
  
/* Highest interrupt priority from which interrupt safe FreeRTOS API functions can be called. */
#ifndef configMAX_SYSCALL_INTERRUPT_PRIORITY
  #define configMAX_SYSCALL_INTERRUPT_PRIORITY   0x10
#endif

/* Normal assert() semantics without relying on the provision of an assert.h header file. */
#ifndef configASSERT
  #define configASSERT(x) if((x)==0) { taskDISABLE_INTERRUPTS(); for( ;; ); }
#endif

#endif /* __freertos_config_h__ */

/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
