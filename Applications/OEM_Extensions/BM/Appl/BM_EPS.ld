MEMORY
 {
  /* internal ROM area (iROM) sections */                                                                                    
  iROM_BM   	: ORIGIN = 0x00000000, LENGTH =   32k                                                                           
  iROM_BL   	: ORIGIN = 0x00008000, LENGTH =  320k                                                                           
  iROM_SWE1 	: ORIGIN = 0x00058000, LENGTH = 1184k                                                                           
  iRAM       : ORIGIN = 0xFEDE0000, LENGTH =  128k                                                                           
  rRAM      : ORIGIN = 0xFEE00000, LENGTH = 32k                                                                              
 }

SECTIONS
 {                                                                                                                           
  /*************************************************************************************************************************/
  /* ROM AREA (iROM_BM)*/                                                                                                    
  /*************************************************************************************************************************/
  .rom_start                               :>iROM_BM  /* Start of code area */                                               
  .bcode0                                                   :>.  /* Entry point for Core0 */                                 
  .intvect_CoreExceptions  0x00  :>.  /* start of Core interrupt vector table, from BRS */        
  .intvect                                                  :>.  /* start of interrupt vector table, used by OS */           
  .intvect_ExtExceptions   0x200     :>.  /* start of External interrupt vector table, from BRS */    
  .eivect                                                   :>.  /* Second part of the interrupt table, used by OS */        
  .Startup                        0x00000400         :>.  /* Startup */                                                                
                                                                                                                             
  /* START OF CODE AREA */                                                                                                   
  .code_start                              :>.  /* Start of code area */                                                     
  .text                    align(4)        :>.  /* program code area */                                                      
  .os_text                 align(4)        :>.  /* program code area */                                                      
  .R_FDL_Text              align(4)        :>.  /* FDL code in ROM (used by MCAL) */                                         
  .MCU_CODE_RRAM_INTVEC    align(4)        :>.                                                                               
  .MCU_CR_CODE_RRAM        align(4)        :>.                                                                               
  .code_end                                :>.  /* End of code area */                                                       
  /* END OF CODE AREA */                                                                                                     
                                                                                                                             
  /* START OF CONST AREA */                                                                                                  
  .const_start                             :>.  /* start of const area */                                                    
  .rozdata                                 :>.  /* constant datas in ZDA area */                                             
  .rosda_start                             :>.  /* start of SDA data area */                                                 
  .robase                  align(4)        :>.  /* initialize textpointer TP for SDA addressing */                           
  .rosdata                 align(4)        :>.  /* constant datas in SDA area */                                             
  .os_rosdata              align(4)        :>.  /* constant OS data in SDA area */                                           
  .osConfigBlock_rodata    align(4)        :>.  /* constant OS ConfigBlock in SDA area */                                    
  .rosda_end                               :>.  /* end of SDA data area */                                                   
  .rodata                  align(4)        :>.  /* constant datas in normal area */                                          
  .R_FDL_Const             align(4)        :>.  /* constant datas for DrvFls */                                              
  __BRS_Default_CoreExceptionTable_StartAddr = ADDR(.intvect_CoreExceptions);                                                
  __BRS_Default_ExceptionTable_StartAddr = ADDR(.intvect_ExtExceptions);                                                     
  .os_rodata               align(4)        :>.  /* constant OS data in normal area */                                        
  .const_end                               :>.  /* end of const area */                                                      
  /* END OF CONST AREA */                                                                                                    
                                                                                                                             
  .fixaddr                 align(4)        :>.  /* ghs internal (compiler) */                                                
  .fixtype                 align(4)        :>.  /* ghs internal (compiler) */                                                
  .secinfo                 align(4)        :>.  /* ghs internal (runtime library) */                                         
  .syscall                 align(4)        :>.  /* ghs internal (linker) */                                                  
                                                                                                                             
  .const_init_data_start                   :>.  /* start of const init data area */                                          
  .romdata                 ROM(.data)      :>.  /* init values for .data (copied to RAM at startup) */                       
  .romzdata                ROM(.zdata)     :>.  /* init values for .zdata (copied to RAM at startup) */                      
  .romsdata                ROM(.sdata)     :>.  /* init values for .sdata (copied to RAM at startup) */                      
  .romtdata                ROM(.tdata)     :>.  /* init values for .tdata (copied to RAM at startup) */                      
  .const_init_data_end                     :>.  /* end of const init data area */                                            
                                                                                                                             
  HWEDESC           0x00007900     :>.                                                                                       
  COMMONBM       0x00007B00     :>.                                                                                       
  SHAREDSWEDATA     0x00007D00     :>.                                                                                       
                                                                                                                             
  /*************************************************************************************************************************/
  /* BTLD AREA */                                                                                                            
  /*************************************************************************************************************************/
  STARTUPBTLD               0x00008A00     :>iROM_BL                                                                         
  CCRYPJUMPT        NOLOAD  0x00057700     :>.                                                                               
  BOOTSWEDESC       NOLOAD  0x00057900     :>.                                                                               
  BOOTSWESIGNATURE  NOLOAD  0x0005791C     :>.                                                                               
  BOOTSWESTAT       NOLOAD  0x00057B00     :>.                                                                               
                                                                                                                             
  /*************************************************************************************************************************/
  /* SWE1 AREA */                                                                                                            
  /*************************************************************************************************************************/
                                                                                                                             
                                                                                                                             
  STARTUPSWE1       0x00059000             :>iROM_SWE1                                                                       
  SWE1DESC          NOLOAD  0x000FF900     :>.                                                                               
  SWE1SIGNATURE     NOLOAD  0x000FF91c     :>.                                                                               
  SWE1STAT          NOLOAD  0x000FFB00     :>.                                                                               
                                                                                                                             
  /*************************************************************************************************************************/
  /* RAM*/                                                                                                                   
  /*************************************************************************************************************************/
  .ram_start                               :>iRAM        /* Start of RAM area of MasterCore */                               
  _ram_start = addr(.ram_start);                                                                                             
  __Local_RAM_Core0_Section_StartAddr = .;                                                                                   
                                                                                                                             
  /* START OF NORMAL DATA RAM AREA */                                                                                        
  __Local_RAM_DATA_Core0_Section_StartAddr = .;                                                                              
  .data                    align(4)        :>.  /* initialized data */                                                       
  .R_FDL_Data              align(4)        :>.  /* data for DrvFls */                                                        
  .bss                     align(4) CLEAR  :>.  /* zero initialized data */                                                  
  .os_data                                 :>.  /* initialized OS data */                                                    
  .os_bss                  align(4) CLEAR  :>.  /* zero initialized OS data */                                               
  __Local_RAM_DATA_Core0_Section_EndAddr = .-1;                                                                              
  __Local_RAM_Core0_Section_EndAddr = .-1;                                                                                   
  /* END OF NORMAL DATA RAM AREA */                                                                                          
                                                                                                                             
  /* START OF SDA RAM AREA */                                                                                                
  .sda_start                               :>.  /* start of SDA RAM area */                                                  
  .sdabase                 align(4)        :>.  /* initialize globalpointer GP for SDA addressing */                         
  .sdata                   align(4)        :>.  /* initialized data in SDA area */                                           
  .sbss                    align(4) CLEAR  :>.  /* zero initialized data in SDA area */                                      
  .os_sdata                align(4)        :>.  /* initialized OS data in SDA area */                                        
  .os_sbss                 align(4) CLEAR  :>.  /* zero initialized OS data in SDA area */                                   
  .sda_end                                 :>.  /* end of SDA RAM area */                                                    
  /* END OF SDA RAM AREA */                                                                                                  
                                                                                                                             
  /* START OF STACK AREA */                                                                                                  
  __Local_RAM_STACK_Core0_Section_StartAddr = .;                                                                             
  .stack    align(4) pad(0x400)            :>.     /* definition of stack size */                                            
  __StartupStack_Core0 = endaddr(.stack);                                                                                    
  __Local_RAM_STACK_Core0_Section_EndAddr = .-1;                                                                             
  /* END OF STACK AREA */                                                                                                    
                                                                                                                             
  .zdata                   align(4)                :>.  /* initialized data in ZDA area */                                   
  .zbss                    align(4) CLEAR          :>.  /* zero initialized data in ZDA area */                              
  .tdata                   align(4) MAX_SIZE(256)  :>.  /* initialized and zero-initialized data in TDA area */              
                                                                                                                             
  DLOG_SWEDATA                       0xFEDF0900              :>.                                                             
  DLOG_SWESTATUS                     0xFEDF0A00              :>.                                                             
  DLOG_SWEINFOS                      0xFEDF0B00              :>.                                                             
  BOOTSTATUS                         0xFEDF0C00              :>.                                                             
  BOOTSTATUSNOINIT                   0xFEDF0C10              :>.                                                             
                                                                                                                             
  .ram_end                 align(16)               :>.                                                                       
                                                                                                                             
                                                                                                                             
                                                                                                                             
  /*************************************************************************************************************************/
  /* LABELS*/                                                                                                                
  /*************************************************************************************************************************/
  /* Always jump to usr_init_c0 at addr 0x0. */                                                                              
  _RESET_CORE0 = __usr_init;                                                                                                 
  _RESET_CORE1 = __usr_init;                                                                                                 
  __Peripheral_I_O_Section_StartAddr = 0xFF000000;                                                                           
  __Peripheral_I_O_Section_EndAddr = 0xFFFFFFFF;                                                                             
 }                                                                                                                           
