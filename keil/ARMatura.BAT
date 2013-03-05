SET PATH=C:\ARM\Keil\ARM\ARMCC\bin\;%COSMOSM%;C:\Program Files (x86)\NVIDIA Corporation\PhysX\Common;C:\AVR\WinAVR\bin;C:\AVR\WinAVR\utils\bin;C:\Windows\system32;C:\Windows;C:\Windows\System32\Wbem;C:\Windows\System32\WindowsPowerShell\v1.0\;C:\Program Files\MySQL\MySQL Server 5.5\bin;C:\ARM\Yagarto\bin;C:\Program Files (x86)\Git\cmd;C:\MiKTeX\miktex\bin\;C:\GnuWin32\bin;C:\MinGW\msys\1.0\cross\i386\bin;C:\Python;C:\Program Files (x86)\WinRAR;C:\MinGW\bin;C:\emu\bochs;C:\MinGW\gnuplot;C:\Java\jre7\bin;C:\Java\jdk17\bin;C:\Program Files (x86)\PuTTY
SET CPU_TYPE=STM32F100RB
SET CPU_VENDOR=STMicroelectronics
SET UV2_TARGET=ARMatura
SET CPU_CLOCK=0x007A1200
"C:\ARM\Keil\ARM\ARMCC\bin\ArmCC" --Via "..\bin\system_stm32f10x.__i"
"C:\ARM\Keil\ARM\ARMCC\bin\ArmAsm" --Via "..\bin\startup_stm32f10x_ld_vl._ia"
"C:\ARM\Keil\ARM\ARMCC\bin\ArmCC" --Via "..\bin\blink.__i"
"C:\ARM\Keil\ARM\ARMCC\bin\ArmLink" --Via "..\bin\ARMatura.lnp"
C:\ARM\Keil\ARM\ARMCC\bin\fromelf.exe "..\bin\ARMatura.axf" --i32combined --output "..\bin\ARMatura.hex"
