/* $Id: WConstants.h 1156 2011-06-07 04:01:16Z bhagman $
||
|| @author         Hernando Barragan <b@wiring.org.co>
|| @url            http://wiring.org.co/
|| @contribution   Brett Hagman <bhagman@wiring.org.co>
|| @contribution   Alexander Brevig <abrevig@wiring.org.co>
|| @contribution   Dmitry Ponyatov <dponyatov@gmail.com> ARM CMSIS adaptation
||
|| @description
|| | Main constant and macro definitions for Wiring.
|| |
|| | Wiring Common API
|| #
||
|| @license Please see cores/Common/License.txt.
||
*/

#ifndef WCONSTANTS_H
#define WCONSTANTS_H

// Wiring API version for libraries
// this is passed in at compile-time
#ifndef WIRING
#define WIRING 100
#endif

// passed in at compile-time
#ifndef F_CPU
//#define F_CPU 16000000L
//#error "F_CPU was not defined."
#endif

//#define INPUT    0x0
//#define OUTPUT   0x1
////#define OUTPUT   0xFF
enum xIOMODE {
	INPUT=0,
	OUTPUT=1
};

#endif // WCONSTANTS_H
