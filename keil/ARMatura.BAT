SET PATH=C:\ARM\Keil\ARM\ARMCC\bin\;C:\AVR\WinAVR\bin;C:\AVR\WinAVR\utils\bin;C:\Program Files\Borland\Delphi7\Bin;C:\Program Files\Borland\Delphi7\Projects\Bpl\;C:\WINDOWS\system32;C:\WINDOWS;C:\WINDOWS\System32\Wbem;C:\Program Files\Intel\DMIX;C:\Program Files\Microsoft SQL Server\100\Tools\Binn\;C:\Program Files\Microsoft SQL Server\100\DTS\Binn\;C:\OrCAD\OrCAD_10.5\tools\bin;C:\OrCAD\OrCAD_10.5\tools\PSpice\Library;C:\OrCAD\OrCAD_10.5\tools\fet\bin;C:\OrCAD\OrCAD_10.5\tools\Capture;C:\Program Files\Common Files\Autodesk Shared\;C:\Program Files\Git\cmd;C:\ARM\Yaga\bin;C:\LaTeX\MiKTeX\miktex\bin\;C:\GnuWin32\bin;C:\ARM\Qemu;C:\ARM\Yaga\bin;C:\MinGW\bin;C:\Python;C:\Program Files\PuTTY;C:\Program Files\WinRAR;;C:\PROGRA~1\COMMON~1\AUTODE~1
SET CPU_TYPE=STM32F103C4
SET CPU_VENDOR=STMicroelectronics
SET UV2_TARGET=ARMatura
SET CPU_CLOCK=0x007A1200
"C:\ARM\Keil\ARM\ARMCC\bin\ArmAsm" --Via "..\bin\keil_startup_stm32f4xx._ia"
"C:\ARM\Keil\ARM\ARMCC\bin\ArmCC" --Via "..\bin\system_stm32f4xx.__i"
"C:\ARM\Keil\ARM\ARMCC\bin\ArmCC" --Via "..\bin\blink.__i"
"C:\ARM\Keil\ARM\ARMCC\bin\ArmLink" --Via "..\bin\ARMatura.lnp"
C:\ARM\Keil\ARM\ARMCC\bin\fromelf.exe "..\bin\ARMatura.axf" --i32combined --output "..\bin\ARMatura.hex"
