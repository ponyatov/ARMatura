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

//*** <<< Use Configuration Wizard in Context Menu >>> ***

// <h> Wiring Constants

#ifndef WCONSTANTS_H
#define WCONSTANTS_H

// Wiring API version for libraries
// this is passed in at compile-time
#ifndef WIRING
// <o> Wiring API version <100=> 100
#define WIRING 100
#endif

//#define INPUT    0x0
//#define OUTPUT   0x1
//#define OUTPUT   0xFF
enum xIOMODE {
	INPUT,
	OUTPUT
};


#endif
// WCONSTANTS_H

// </h>
