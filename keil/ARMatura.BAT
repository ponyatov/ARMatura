SET PATH=C:\ARM\Keil\ARM\ARMCC\bin\;C:\Program Files\NVIDIA Corporation\PhysX\Common;%COSMOSM%;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\PROGRA~1\COMMON~1\ULEADS~1\MPEG;C:\Program Files\Common Files\DivX Shared\;C:\Program Files\QuickTime\QTSystem\;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Program Files\Git\cmd;C:\ARM\Yaga\bin;C:\LaTeX\miktex\bin\;C:\GnuWin32\bin;C:\MinGW\bin;C:\LaTeX\miktex\bin
SET CPU_TYPE=STM32F100RB
SET CPU_VENDOR=STMicroelectronics
SET UV2_TARGET=ARMatura
SET CPU_CLOCK=0x007A1200
"C:\ARM\Keil\ARM\ARMCC\bin\ArmAsm" --Via "..\bin\keil_startup_stm32f4xx._ia"
"C:\ARM\Keil\ARM\ARMCC\bin\ArmCC" --Via "..\bin\system_stm32f4xx.__i"
"C:\ARM\Keil\ARM\ARMCC\bin\ArmCC" --Via "..\bin\blink.__i"
"C:\ARM\Keil\ARM\ARMCC\bin\ArmLink" --Via "..\bin\ARMatura.lnp"
C:\ARM\Keil\ARM\ARMCC\bin\fromelf.exe "..\bin\ARMatura.axf" --i32combined --output "..\bin\ARMatura.hex"
