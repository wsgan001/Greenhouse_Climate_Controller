
#ifndef	_HTC_H_
#warning Header file pic16f877a.h included directly. Use #include <htc.h> instead.
#endif

/* header file for the MICROCHIP PIC microcontroller
 *  16F877A
 */


#ifndef __PIC16F877A_H
#define __PIC16F877A_H

//
// Configuration mask definitions
//


// Config Register: CONFIG
#define CONFIG               0x2007
// Oscillator Selection bits
// RC oscillator
#define FOSC_EXTRC           0xFFFF
// HS oscillator
#define FOSC_HS              0xFFFE
// XT oscillator
#define FOSC_XT              0xFFFD
// LP oscillator
#define FOSC_LP              0xFFFC
// Watchdog Timer Enable bit
// WDT enabled
#define WDTE_ON              0xFFFF
// WDT disabled
#define WDTE_OFF             0xFFFB
// Power-up Timer Enable bit
// PWRT disabled
#define PWRTE_OFF            0xFFFF
// PWRT enabled
#define PWRTE_ON             0xFFF7
// Brown-out Reset Enable bit
// BOR enabled
#define BOREN_ON             0xFFFF
// BOR disabled
#define BOREN_OFF            0xFFBF
// Low-Voltage (Single-Supply) In-Circuit Serial Programming Enable bit
// RB3/PGM pin has PGM function; low-voltage programming enabled
#define LVP_ON               0xFFFF
// RB3 is digital I/O, HV on MCLR must be used for programming
#define LVP_OFF              0xFF7F
// Data EEPROM Memory Code Protection bit
// Data EEPROM code protection off
#define CPD_OFF              0xFFFF
// Data EEPROM code-protected
#define CPD_ON               0xFEFF
// Flash Program Memory Write Enable bits
// Write protection off; all program memory may be written to by EECON control
#define WRT_OFF              0xFFFF
// 0000h to 00FFh write-protected; 0100h to 1FFFh may be written to by EECON control
#define WRT_256              0xFDFF
// 0000h to 07FFh write-protected; 0800h to 1FFFh may be written to by EECON control
#define WRT_1FOURTH          0xFBFF
// 0000h to 0FFFh write-protected; 1000h to 1FFFh may be written to by EECON control
#define WRT_HALF             0xF9FF
// In-Circuit Debugger Mode bit
// In-Circuit Debugger disabled, RB6 and RB7 are general purpose I/O pins
#define DEBUG_OFF            0xFFFF
// In-Circuit Debugger enabled, RB6 and RB7 are dedicated to the debugger
#define DEBUG_ON             0xF7FF
// Flash Program Memory Code Protection bit
// Code protection off
#define CP_OFF               0xFFFF
// All program memory code-protected
#define CP_ON                0xDFFF


//
// Special function register definitions
//


// Register: INDF
volatile unsigned char           INDF                @ 0x000;
// bit and bitfield definitions

// Register: TMR0
volatile unsigned char           TMR0                @ 0x001;
// bit and bitfield definitions

// Register: PCL
volatile unsigned char           PCL                 @ 0x002;
// bit and bitfield definitions

// Register: STATUS
volatile unsigned char           STATUS              @ 0x003;
// bit and bitfield definitions
volatile bit CARRY               @ ((unsigned)&STATUS*8)+0;
volatile bit DC                  @ ((unsigned)&STATUS*8)+1;
volatile bit ZERO                @ ((unsigned)&STATUS*8)+2;
volatile bit nPD                 @ ((unsigned)&STATUS*8)+3;
volatile bit nTO                 @ ((unsigned)&STATUS*8)+4;
volatile bit IRP                 @ ((unsigned)&STATUS*8)+7;
volatile bit RP0                 @ ((unsigned)&STATUS*8)+5;
volatile bit RP1                 @ ((unsigned)&STATUS*8)+6;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	C                   : 1;
        unsigned	DC                  : 1;
        unsigned	Z                   : 1;
        unsigned	nPD                 : 1;
        unsigned	nTO                 : 1;
        unsigned	RP                  : 2;
        unsigned	IRP                 : 1;
    };
    struct {
        unsigned	                    : 5;
        unsigned	RP0                 : 1;
        unsigned	RP1                 : 1;
    };
} STATUSbits @ 0x003;
#endif

// Register: FSR
volatile unsigned char           FSR                 @ 0x004;
// bit and bitfield definitions

// Register: PORTA
volatile unsigned char           PORTA               @ 0x005;
// bit and bitfield definitions
volatile bit RA0                 @ ((unsigned)&PORTA*8)+0;
volatile bit RA1                 @ ((unsigned)&PORTA*8)+1;
volatile bit RA2                 @ ((unsigned)&PORTA*8)+2;
volatile bit RA3                 @ ((unsigned)&PORTA*8)+3;
volatile bit RA4                 @ ((unsigned)&PORTA*8)+4;
volatile bit RA5                 @ ((unsigned)&PORTA*8)+5;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	RA0                 : 1;
        unsigned	RA1                 : 1;
        unsigned	RA2                 : 1;
        unsigned	RA3                 : 1;
        unsigned	RA4                 : 1;
        unsigned	RA5                 : 1;
    };
} PORTAbits @ 0x005;
#endif

// Register: PORTB
volatile unsigned char           PORTB               @ 0x006;
// bit and bitfield definitions
volatile bit RB0                 @ ((unsigned)&PORTB*8)+0;
volatile bit RB1                 @ ((unsigned)&PORTB*8)+1;
volatile bit RB2                 @ ((unsigned)&PORTB*8)+2;
volatile bit RB3                 @ ((unsigned)&PORTB*8)+3;
volatile bit RB4                 @ ((unsigned)&PORTB*8)+4;
volatile bit RB5                 @ ((unsigned)&PORTB*8)+5;
volatile bit RB6                 @ ((unsigned)&PORTB*8)+6;
volatile bit RB7                 @ ((unsigned)&PORTB*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	RB0                 : 1;
        unsigned	RB1                 : 1;
        unsigned	RB2                 : 1;
        unsigned	RB3                 : 1;
        unsigned	RB4                 : 1;
        unsigned	RB5                 : 1;
        unsigned	RB6                 : 1;
        unsigned	RB7                 : 1;
    };
} PORTBbits @ 0x006;
#endif

// Register: PORTC
volatile unsigned char           PORTC               @ 0x007;
// bit and bitfield definitions
volatile bit RC0                 @ ((unsigned)&PORTC*8)+0;
volatile bit RC1                 @ ((unsigned)&PORTC*8)+1;
volatile bit RC2                 @ ((unsigned)&PORTC*8)+2;
volatile bit RC3                 @ ((unsigned)&PORTC*8)+3;
volatile bit RC4                 @ ((unsigned)&PORTC*8)+4;
volatile bit RC5                 @ ((unsigned)&PORTC*8)+5;
volatile bit RC6                 @ ((unsigned)&PORTC*8)+6;
volatile bit RC7                 @ ((unsigned)&PORTC*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	RC0                 : 1;
        unsigned	RC1                 : 1;
        unsigned	RC2                 : 1;
        unsigned	RC3                 : 1;
        unsigned	RC4                 : 1;
        unsigned	RC5                 : 1;
        unsigned	RC6                 : 1;
        unsigned	RC7                 : 1;
    };
} PORTCbits @ 0x007;
#endif

// Register: PORTD
volatile unsigned char           PORTD               @ 0x008;
// bit and bitfield definitions
volatile bit RD0                 @ ((unsigned)&PORTD*8)+0;
volatile bit RD1                 @ ((unsigned)&PORTD*8)+1;
volatile bit RD2                 @ ((unsigned)&PORTD*8)+2;
volatile bit RD3                 @ ((unsigned)&PORTD*8)+3;
volatile bit RD4                 @ ((unsigned)&PORTD*8)+4;
volatile bit RD5                 @ ((unsigned)&PORTD*8)+5;
volatile bit RD6                 @ ((unsigned)&PORTD*8)+6;
volatile bit RD7                 @ ((unsigned)&PORTD*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	RD0                 : 1;
        unsigned	RD1                 : 1;
        unsigned	RD2                 : 1;
        unsigned	RD3                 : 1;
        unsigned	RD4                 : 1;
        unsigned	RD5                 : 1;
        unsigned	RD6                 : 1;
        unsigned	RD7                 : 1;
    };
} PORTDbits @ 0x008;
#endif

// Register: PORTE
volatile unsigned char           PORTE               @ 0x009;
// bit and bitfield definitions
volatile bit RE0                 @ ((unsigned)&PORTE*8)+0;
volatile bit RE1                 @ ((unsigned)&PORTE*8)+1;
volatile bit RE2                 @ ((unsigned)&PORTE*8)+2;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	RE0                 : 1;
        unsigned	RE1                 : 1;
        unsigned	RE2                 : 1;
    };
} PORTEbits @ 0x009;
#endif

// Register: PCLATH
volatile unsigned char           PCLATH              @ 0x00A;
// bit and bitfield definitions
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	PCLATH              : 5;
    };
} PCLATHbits @ 0x00A;
#endif

// Register: INTCON
volatile unsigned char           INTCON              @ 0x00B;
// bit and bitfield definitions
volatile bit RBIF                @ ((unsigned)&INTCON*8)+0;
volatile bit INTF                @ ((unsigned)&INTCON*8)+1;
volatile bit TMR0IF              @ ((unsigned)&INTCON*8)+2;
volatile bit RBIE                @ ((unsigned)&INTCON*8)+3;
volatile bit INTE                @ ((unsigned)&INTCON*8)+4;
volatile bit TMR0IE              @ ((unsigned)&INTCON*8)+5;
volatile bit PEIE                @ ((unsigned)&INTCON*8)+6;
volatile bit GIE                 @ ((unsigned)&INTCON*8)+7;
volatile bit T0IF                @ ((unsigned)&INTCON*8)+2;
volatile bit T0IE                @ ((unsigned)&INTCON*8)+5;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	RBIF                : 1;
        unsigned	INTF                : 1;
        unsigned	TMR0IF              : 1;
        unsigned	RBIE                : 1;
        unsigned	INTE                : 1;
        unsigned	TMR0IE              : 1;
        unsigned	PEIE                : 1;
        unsigned	GIE                 : 1;
    };
    struct {
        unsigned	                    : 2;
        unsigned	T0IF                : 1;
        unsigned	: 2;
        unsigned	T0IE                : 1;
    };
} INTCONbits @ 0x00B;
#endif

// Register: PIR1
volatile unsigned char           PIR1                @ 0x00C;
// bit and bitfield definitions
volatile bit TMR1IF              @ ((unsigned)&PIR1*8)+0;
volatile bit TMR2IF              @ ((unsigned)&PIR1*8)+1;
volatile bit CCP1IF              @ ((unsigned)&PIR1*8)+2;
volatile bit SSPIF               @ ((unsigned)&PIR1*8)+3;
volatile bit TXIF                @ ((unsigned)&PIR1*8)+4;
volatile bit RCIF                @ ((unsigned)&PIR1*8)+5;
volatile bit ADIF                @ ((unsigned)&PIR1*8)+6;
volatile bit PSPIF               @ ((unsigned)&PIR1*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	TMR1IF              : 1;
        unsigned	TMR2IF              : 1;
        unsigned	CCP1IF              : 1;
        unsigned	SSPIF               : 1;
        unsigned	TXIF                : 1;
        unsigned	RCIF                : 1;
        unsigned	ADIF                : 1;
        unsigned	PSPIF               : 1;
    };
    struct {
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	                    : 2;
        unsigned	: 1;
        unsigned	: 1;
    };
} PIR1bits @ 0x00C;
#endif

// Register: PIR2
volatile unsigned char           PIR2                @ 0x00D;
// bit and bitfield definitions
volatile bit CCP2IF              @ ((unsigned)&PIR2*8)+0;
volatile bit BCLIF               @ ((unsigned)&PIR2*8)+3;
volatile bit EEIF                @ ((unsigned)&PIR2*8)+4;
volatile bit CMIF                @ ((unsigned)&PIR2*8)+6;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	CCP2IF              : 1;
        unsigned	                    : 2;
        unsigned	BCLIF               : 1;
        unsigned	EEIF                : 1;
        unsigned	: 1;
        unsigned	CMIF                : 1;
    };
} PIR2bits @ 0x00D;
#endif
// bit and bitfield definitions

// Register: TMR1L
volatile unsigned char           TMR1L               @ 0x00E;
// bit and bitfield definitions

// Register: TMR1H
volatile unsigned char           TMR1H               @ 0x00F;
// bit and bitfield definitions

// Register: TMR1
volatile unsigned int            TMR1                @ 0x00E;

// Register: T1CON
volatile unsigned char           T1CON               @ 0x010;
// bit and bitfield definitions
volatile bit TMR1ON              @ ((unsigned)&T1CON*8)+0;
volatile bit TMR1CS              @ ((unsigned)&T1CON*8)+1;
volatile bit nT1SYNC             @ ((unsigned)&T1CON*8)+2;
volatile bit T1OSCEN             @ ((unsigned)&T1CON*8)+3;
volatile bit T1SYNC              @ ((unsigned)&T1CON*8)+2;
volatile bit T1CKPS0             @ ((unsigned)&T1CON*8)+4;
volatile bit T1CKPS1             @ ((unsigned)&T1CON*8)+5;
volatile bit T1INSYNC            @ ((unsigned)&T1CON*8)+2;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	TMR1ON              : 1;
        unsigned	TMR1CS              : 1;
        unsigned	nT1SYNC             : 1;
        unsigned	T1OSCEN             : 1;
        unsigned	T1CKPS              : 2;
    };
    struct {
        unsigned	                    : 2;
        unsigned	T1SYNC              : 1;
        unsigned	: 1;
        unsigned	T1CKPS0             : 1;
        unsigned	T1CKPS1             : 1;
    };
    struct {
        unsigned	: 2;
        unsigned	T1INSYNC            : 1;
    };
} T1CONbits @ 0x010;
#endif

// Register: TMR2
volatile unsigned char           TMR2                @ 0x011;
// bit and bitfield definitions

// Register: T2CON
volatile unsigned char           T2CON               @ 0x012;
// bit and bitfield definitions
volatile bit TMR2ON              @ ((unsigned)&T2CON*8)+2;
volatile bit T2CKPS0             @ ((unsigned)&T2CON*8)+0;
volatile bit T2CKPS1             @ ((unsigned)&T2CON*8)+1;
volatile bit TOUTPS0             @ ((unsigned)&T2CON*8)+3;
volatile bit TOUTPS1             @ ((unsigned)&T2CON*8)+4;
volatile bit TOUTPS2             @ ((unsigned)&T2CON*8)+5;
volatile bit TOUTPS3             @ ((unsigned)&T2CON*8)+6;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	T2CKPS              : 2;
        unsigned	TMR2ON              : 1;
        unsigned	TOUTPS              : 4;
    };
    struct {
        unsigned	T2CKPS0             : 1;
        unsigned	T2CKPS1             : 1;
        unsigned	                    : 1;
        unsigned	TOUTPS0             : 1;
        unsigned	TOUTPS1             : 1;
        unsigned	TOUTPS2             : 1;
        unsigned	TOUTPS3             : 1;
    };
} T2CONbits @ 0x012;
#endif

// Register: SSPBUF
volatile unsigned char           SSPBUF              @ 0x013;
// bit and bitfield definitions

// Register: SSPCON
volatile unsigned char           SSPCON              @ 0x014;
// bit and bitfield definitions
volatile bit CKP                 @ ((unsigned)&SSPCON*8)+4;
volatile bit SSPEN               @ ((unsigned)&SSPCON*8)+5;
volatile bit SSPOV               @ ((unsigned)&SSPCON*8)+6;
volatile bit WCOL                @ ((unsigned)&SSPCON*8)+7;
volatile bit SSPM0               @ ((unsigned)&SSPCON*8)+0;
volatile bit SSPM1               @ ((unsigned)&SSPCON*8)+1;
volatile bit SSPM2               @ ((unsigned)&SSPCON*8)+2;
volatile bit SSPM3               @ ((unsigned)&SSPCON*8)+3;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	SSPM                : 4;
        unsigned	CKP                 : 1;
        unsigned	SSPEN               : 1;
        unsigned	SSPOV               : 1;
        unsigned	WCOL                : 1;
    };
    struct {
        unsigned	SSPM0               : 1;
        unsigned	SSPM1               : 1;
        unsigned	SSPM2               : 1;
        unsigned	SSPM3               : 1;
    };
} SSPCONbits @ 0x014;
#endif
// bit and bitfield definitions

// Register: CCPR1L
volatile unsigned char           CCPR1L              @ 0x015;
// bit and bitfield definitions

// Register: CCPR1H
volatile unsigned char           CCPR1H              @ 0x016;
// bit and bitfield definitions

// Register: CCPR1
volatile unsigned int            CCPR1               @ 0x015;

// Register: CCP1CON
volatile unsigned char           CCP1CON             @ 0x017;
// bit and bitfield definitions
volatile bit CCP1Y               @ ((unsigned)&CCP1CON*8)+4;
volatile bit CCP1X               @ ((unsigned)&CCP1CON*8)+5;
volatile bit CCP1M0              @ ((unsigned)&CCP1CON*8)+0;
volatile bit CCP1M1              @ ((unsigned)&CCP1CON*8)+1;
volatile bit CCP1M2              @ ((unsigned)&CCP1CON*8)+2;
volatile bit CCP1M3              @ ((unsigned)&CCP1CON*8)+3;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	CCP1M               : 4;
        unsigned	CCP1Y               : 1;
        unsigned	CCP1X               : 1;
    };
    struct {
        unsigned	CCP1M0              : 1;
        unsigned	CCP1M1              : 1;
        unsigned	CCP1M2              : 1;
        unsigned	CCP1M3              : 1;
    };
} CCP1CONbits @ 0x017;
#endif

// Register: RCSTA
volatile unsigned char           RCSTA               @ 0x018;
// bit and bitfield definitions
volatile bit RX9D                @ ((unsigned)&RCSTA*8)+0;
volatile bit OERR                @ ((unsigned)&RCSTA*8)+1;
volatile bit FERR                @ ((unsigned)&RCSTA*8)+2;
volatile bit ADDEN               @ ((unsigned)&RCSTA*8)+3;
volatile bit CREN                @ ((unsigned)&RCSTA*8)+4;
volatile bit SREN                @ ((unsigned)&RCSTA*8)+5;
volatile bit RX9                 @ ((unsigned)&RCSTA*8)+6;
volatile bit SPEN                @ ((unsigned)&RCSTA*8)+7;
volatile bit RCD8                @ ((unsigned)&RCSTA*8)+0;
volatile bit RC9                 @ ((unsigned)&RCSTA*8)+6;
volatile bit nRC8                @ ((unsigned)&RCSTA*8)+6;
volatile bit RC8_9               @ ((unsigned)&RCSTA*8)+6;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	RX9D                : 1;
        unsigned	OERR                : 1;
        unsigned	FERR                : 1;
        unsigned	ADDEN               : 1;
        unsigned	CREN                : 1;
        unsigned	SREN                : 1;
        unsigned	RX9                 : 1;
        unsigned	SPEN                : 1;
    };
    struct {
        unsigned	RCD8                : 1;
        unsigned	                    : 5;
        unsigned	RC9                 : 1;
    };
    struct {
        unsigned	: 6;
        unsigned	nRC8                : 1;
    };
    struct {
        unsigned	: 6;
        unsigned	RC8_9               : 1;
    };
} RCSTAbits @ 0x018;
#endif

// Register: TXREG
volatile unsigned char           TXREG               @ 0x019;
// bit and bitfield definitions

// Register: RCREG
volatile unsigned char           RCREG               @ 0x01A;
// bit and bitfield definitions
// bit and bitfield definitions

// Register: CCPR2L
volatile unsigned char           CCPR2L              @ 0x01B;
// bit and bitfield definitions

// Register: CCPR2H
volatile unsigned char           CCPR2H              @ 0x01C;
// bit and bitfield definitions

// Register: CCPR2
volatile unsigned int            CCPR2               @ 0x01B;

// Register: CCP2CON
volatile unsigned char           CCP2CON             @ 0x01D;
// bit and bitfield definitions
volatile bit CCP2Y               @ ((unsigned)&CCP2CON*8)+4;
volatile bit CCP2X               @ ((unsigned)&CCP2CON*8)+5;
volatile bit CCP2M0              @ ((unsigned)&CCP2CON*8)+0;
volatile bit CCP2M1              @ ((unsigned)&CCP2CON*8)+1;
volatile bit CCP2M2              @ ((unsigned)&CCP2CON*8)+2;
volatile bit CCP2M3              @ ((unsigned)&CCP2CON*8)+3;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	CCP2M               : 4;
        unsigned	CCP2Y               : 1;
        unsigned	CCP2X               : 1;
    };
    struct {
        unsigned	CCP2M0              : 1;
        unsigned	CCP2M1              : 1;
        unsigned	CCP2M2              : 1;
        unsigned	CCP2M3              : 1;
    };
} CCP2CONbits @ 0x01D;
#endif

// Register: ADRESH
volatile unsigned char           ADRESH              @ 0x01E;
// bit and bitfield definitions

// Register: ADCON0
volatile unsigned char           ADCON0              @ 0x01F;
// bit and bitfield definitions
volatile bit ADON                @ ((unsigned)&ADCON0*8)+0;
volatile bit GO_nDONE            @ ((unsigned)&ADCON0*8)+2;
volatile bit GO                  @ ((unsigned)&ADCON0*8)+2;
volatile bit CHS0                @ ((unsigned)&ADCON0*8)+3;
volatile bit CHS1                @ ((unsigned)&ADCON0*8)+4;
volatile bit CHS2                @ ((unsigned)&ADCON0*8)+5;
volatile bit ADCS0               @ ((unsigned)&ADCON0*8)+6;
volatile bit ADCS1               @ ((unsigned)&ADCON0*8)+7;
volatile bit nDONE               @ ((unsigned)&ADCON0*8)+2;
volatile bit GO_DONE             @ ((unsigned)&ADCON0*8)+2;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	ADON                : 1;
        unsigned	                    : 1;
        unsigned	GO_nDONE            : 1;
        unsigned	CHS                 : 3;
        unsigned	ADCS                : 2;
    };
    struct {
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 3;
        unsigned	: 2;
    };
    struct {
        unsigned	: 2;
        unsigned	GO                  : 1;
        unsigned	CHS0                : 1;
        unsigned	CHS1                : 1;
        unsigned	CHS2                : 1;
        unsigned	ADCS0               : 1;
        unsigned	ADCS1               : 1;
    };
    struct {
        unsigned	: 2;
        unsigned	nDONE               : 1;
    };
    struct {
        unsigned	: 2;
        unsigned	GO_DONE             : 1;
    };
} ADCON0bits @ 0x01F;
#endif

//
// Special function register definitions: Bank 1
//


// Register: OPTION_REG
volatile unsigned char           OPTION_REG          @ 0x081;
// bit and bitfield definitions
volatile bit PSA                 @ ((unsigned)&OPTION_REG*8)+3;
volatile bit T0SE                @ ((unsigned)&OPTION_REG*8)+4;
volatile bit T0CS                @ ((unsigned)&OPTION_REG*8)+5;
volatile bit INTEDG              @ ((unsigned)&OPTION_REG*8)+6;
volatile bit nRBPU               @ ((unsigned)&OPTION_REG*8)+7;
volatile bit PS0                 @ ((unsigned)&OPTION_REG*8)+0;
volatile bit PS1                 @ ((unsigned)&OPTION_REG*8)+1;
volatile bit PS2                 @ ((unsigned)&OPTION_REG*8)+2;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	PS                  : 3;
        unsigned	PSA                 : 1;
        unsigned	T0SE                : 1;
        unsigned	T0CS                : 1;
        unsigned	INTEDG              : 1;
        unsigned	nRBPU               : 1;
    };
    struct {
        unsigned	PS0                 : 1;
        unsigned	PS1                 : 1;
        unsigned	PS2                 : 1;
    };
} OPTION_REGbits @ 0x081;
#endif

// Register: TRISA
volatile unsigned char           TRISA               @ 0x085;
// bit and bitfield definitions
volatile bit TRISA0              @ ((unsigned)&TRISA*8)+0;
volatile bit TRISA1              @ ((unsigned)&TRISA*8)+1;
volatile bit TRISA2              @ ((unsigned)&TRISA*8)+2;
volatile bit TRISA3              @ ((unsigned)&TRISA*8)+3;
volatile bit TRISA4              @ ((unsigned)&TRISA*8)+4;
volatile bit TRISA5              @ ((unsigned)&TRISA*8)+5;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	TRISA0              : 1;
        unsigned	TRISA1              : 1;
        unsigned	TRISA2              : 1;
        unsigned	TRISA3              : 1;
        unsigned	TRISA4              : 1;
        unsigned	TRISA5              : 1;
    };
} TRISAbits @ 0x085;
#endif

// Register: TRISB
volatile unsigned char           TRISB               @ 0x086;
// bit and bitfield definitions
volatile bit TRISB0              @ ((unsigned)&TRISB*8)+0;
volatile bit TRISB1              @ ((unsigned)&TRISB*8)+1;
volatile bit TRISB2              @ ((unsigned)&TRISB*8)+2;
volatile bit TRISB3              @ ((unsigned)&TRISB*8)+3;
volatile bit TRISB4              @ ((unsigned)&TRISB*8)+4;
volatile bit TRISB5              @ ((unsigned)&TRISB*8)+5;
volatile bit TRISB6              @ ((unsigned)&TRISB*8)+6;
volatile bit TRISB7              @ ((unsigned)&TRISB*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	TRISB0              : 1;
        unsigned	TRISB1              : 1;
        unsigned	TRISB2              : 1;
        unsigned	TRISB3              : 1;
        unsigned	TRISB4              : 1;
        unsigned	TRISB5              : 1;
        unsigned	TRISB6              : 1;
        unsigned	TRISB7              : 1;
    };
} TRISBbits @ 0x086;
#endif

// Register: TRISC
volatile unsigned char           TRISC               @ 0x087;
// bit and bitfield definitions
volatile bit TRISC0              @ ((unsigned)&TRISC*8)+0;
volatile bit TRISC1              @ ((unsigned)&TRISC*8)+1;
volatile bit TRISC2              @ ((unsigned)&TRISC*8)+2;
volatile bit TRISC3              @ ((unsigned)&TRISC*8)+3;
volatile bit TRISC4              @ ((unsigned)&TRISC*8)+4;
volatile bit TRISC5              @ ((unsigned)&TRISC*8)+5;
volatile bit TRISC6              @ ((unsigned)&TRISC*8)+6;
volatile bit TRISC7              @ ((unsigned)&TRISC*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	TRISC0              : 1;
        unsigned	TRISC1              : 1;
        unsigned	TRISC2              : 1;
        unsigned	TRISC3              : 1;
        unsigned	TRISC4              : 1;
        unsigned	TRISC5              : 1;
        unsigned	TRISC6              : 1;
        unsigned	TRISC7              : 1;
    };
} TRISCbits @ 0x087;
#endif

// Register: TRISD
volatile unsigned char           TRISD               @ 0x088;
// bit and bitfield definitions
volatile bit TRISD0              @ ((unsigned)&TRISD*8)+0;
volatile bit TRISD1              @ ((unsigned)&TRISD*8)+1;
volatile bit TRISD2              @ ((unsigned)&TRISD*8)+2;
volatile bit TRISD3              @ ((unsigned)&TRISD*8)+3;
volatile bit TRISD4              @ ((unsigned)&TRISD*8)+4;
volatile bit TRISD5              @ ((unsigned)&TRISD*8)+5;
volatile bit TRISD6              @ ((unsigned)&TRISD*8)+6;
volatile bit TRISD7              @ ((unsigned)&TRISD*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	TRISD0              : 1;
        unsigned	TRISD1              : 1;
        unsigned	TRISD2              : 1;
        unsigned	TRISD3              : 1;
        unsigned	TRISD4              : 1;
        unsigned	TRISD5              : 1;
        unsigned	TRISD6              : 1;
        unsigned	TRISD7              : 1;
    };
} TRISDbits @ 0x088;
#endif

// Register: TRISE
volatile unsigned char           TRISE               @ 0x089;
// bit and bitfield definitions
volatile bit TRISE0              @ ((unsigned)&TRISE*8)+0;
volatile bit TRISE1              @ ((unsigned)&TRISE*8)+1;
volatile bit TRISE2              @ ((unsigned)&TRISE*8)+2;
volatile bit PSPMODE             @ ((unsigned)&TRISE*8)+4;
volatile bit IBOV                @ ((unsigned)&TRISE*8)+5;
volatile bit OBF                 @ ((unsigned)&TRISE*8)+6;
volatile bit IBF                 @ ((unsigned)&TRISE*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	TRISE0              : 1;
        unsigned	TRISE1              : 1;
        unsigned	TRISE2              : 1;
        unsigned	                    : 1;
        unsigned	PSPMODE             : 1;
        unsigned	IBOV                : 1;
        unsigned	OBF                 : 1;
        unsigned	IBF                 : 1;
    };
} TRISEbits @ 0x089;
#endif

// Register: PIE1
volatile unsigned char           PIE1                @ 0x08C;
// bit and bitfield definitions
volatile bit TMR1IE              @ ((unsigned)&PIE1*8)+0;
volatile bit TMR2IE              @ ((unsigned)&PIE1*8)+1;
volatile bit CCP1IE              @ ((unsigned)&PIE1*8)+2;
volatile bit SSPIE               @ ((unsigned)&PIE1*8)+3;
volatile bit TXIE                @ ((unsigned)&PIE1*8)+4;
volatile bit RCIE                @ ((unsigned)&PIE1*8)+5;
volatile bit ADIE                @ ((unsigned)&PIE1*8)+6;
volatile bit PSPIE               @ ((unsigned)&PIE1*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	TMR1IE              : 1;
        unsigned	TMR2IE              : 1;
        unsigned	CCP1IE              : 1;
        unsigned	SSPIE               : 1;
        unsigned	TXIE                : 1;
        unsigned	RCIE                : 1;
        unsigned	ADIE                : 1;
        unsigned	PSPIE               : 1;
    };
} PIE1bits @ 0x08C;
#endif

// Register: PIE2
volatile unsigned char           PIE2                @ 0x08D;
// bit and bitfield definitions
volatile bit CCP2IE              @ ((unsigned)&PIE2*8)+0;
volatile bit BCLIE               @ ((unsigned)&PIE2*8)+3;
volatile bit EEIE                @ ((unsigned)&PIE2*8)+4;
volatile bit CMIE                @ ((unsigned)&PIE2*8)+6;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	CCP2IE              : 1;
        unsigned	                    : 2;
        unsigned	BCLIE               : 1;
        unsigned	EEIE                : 1;
        unsigned	: 1;
        unsigned	CMIE                : 1;
    };
} PIE2bits @ 0x08D;
#endif

// Register: PCON
volatile unsigned char           PCON                @ 0x08E;
// bit and bitfield definitions
volatile bit nBOR                @ ((unsigned)&PCON*8)+0;
volatile bit nPOR                @ ((unsigned)&PCON*8)+1;
volatile bit nBO                 @ ((unsigned)&PCON*8)+0;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	nBOR                : 1;
        unsigned	nPOR                : 1;
    };
    struct {
        unsigned	nBO                 : 1;
    };
} PCONbits @ 0x08E;
#endif

// Register: SSPCON2
volatile unsigned char           SSPCON2             @ 0x091;
// bit and bitfield definitions
volatile bit SEN                 @ ((unsigned)&SSPCON2*8)+0;
volatile bit RSEN                @ ((unsigned)&SSPCON2*8)+1;
volatile bit PEN                 @ ((unsigned)&SSPCON2*8)+2;
volatile bit RCEN                @ ((unsigned)&SSPCON2*8)+3;
volatile bit ACKEN               @ ((unsigned)&SSPCON2*8)+4;
volatile bit ACKDT               @ ((unsigned)&SSPCON2*8)+5;
volatile bit ACKSTAT             @ ((unsigned)&SSPCON2*8)+6;
volatile bit GCEN                @ ((unsigned)&SSPCON2*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	SEN                 : 1;
        unsigned	RSEN                : 1;
        unsigned	PEN                 : 1;
        unsigned	RCEN                : 1;
        unsigned	ACKEN               : 1;
        unsigned	ACKDT               : 1;
        unsigned	ACKSTAT             : 1;
        unsigned	GCEN                : 1;
    };
} SSPCON2bits @ 0x091;
#endif

// Register: PR2
volatile unsigned char           PR2                 @ 0x092;
// bit and bitfield definitions

// Register: SSPADD
volatile unsigned char           SSPADD              @ 0x093;
// bit and bitfield definitions

// Register: SSPSTAT
volatile unsigned char           SSPSTAT             @ 0x094;
// bit and bitfield definitions
volatile bit BF                  @ ((unsigned)&SSPSTAT*8)+0;
volatile bit UA                  @ ((unsigned)&SSPSTAT*8)+1;
volatile bit R_nW                @ ((unsigned)&SSPSTAT*8)+2;
volatile bit S                   @ ((unsigned)&SSPSTAT*8)+3;
volatile bit P                   @ ((unsigned)&SSPSTAT*8)+4;
volatile bit D_nA                @ ((unsigned)&SSPSTAT*8)+5;
volatile bit CKE                 @ ((unsigned)&SSPSTAT*8)+6;
volatile bit SMP                 @ ((unsigned)&SSPSTAT*8)+7;
volatile bit R                   @ ((unsigned)&SSPSTAT*8)+2;
volatile bit D                   @ ((unsigned)&SSPSTAT*8)+5;
volatile bit I2C_READ            @ ((unsigned)&SSPSTAT*8)+2;
volatile bit I2C_START           @ ((unsigned)&SSPSTAT*8)+3;
volatile bit I2C_STOP            @ ((unsigned)&SSPSTAT*8)+4;
volatile bit I2C_DATA            @ ((unsigned)&SSPSTAT*8)+5;
volatile bit nW                  @ ((unsigned)&SSPSTAT*8)+2;
volatile bit nA                  @ ((unsigned)&SSPSTAT*8)+5;
volatile bit nWRITE              @ ((unsigned)&SSPSTAT*8)+2;
volatile bit nADDRESS            @ ((unsigned)&SSPSTAT*8)+5;
volatile bit R_W                 @ ((unsigned)&SSPSTAT*8)+2;
volatile bit D_A                 @ ((unsigned)&SSPSTAT*8)+5;
volatile bit READ_WRITE          @ ((unsigned)&SSPSTAT*8)+2;
volatile bit DATA_ADDRESS        @ ((unsigned)&SSPSTAT*8)+5;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	BF                  : 1;
        unsigned	UA                  : 1;
        unsigned	R_nW                : 1;
        unsigned	S                   : 1;
        unsigned	P                   : 1;
        unsigned	D_nA                : 1;
        unsigned	CKE                 : 1;
        unsigned	SMP                 : 1;
    };
    struct {
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
        unsigned	: 1;
    };
    struct {
        unsigned	                    : 2;
        unsigned	R                   : 1;
        unsigned	: 2;
        unsigned	D                   : 1;
    };
    struct {
        unsigned	: 2;
        unsigned	I2C_READ            : 1;
        unsigned	I2C_START           : 1;
        unsigned	I2C_STOP            : 1;
        unsigned	I2C_DATA            : 1;
    };
    struct {
        unsigned	: 2;
        unsigned	nW                  : 1;
        unsigned	: 2;
        unsigned	nA                  : 1;
    };
    struct {
        unsigned	: 2;
        unsigned	nWRITE              : 1;
        unsigned	: 2;
        unsigned	nADDRESS            : 1;
    };
    struct {
        unsigned	: 2;
        unsigned	R_W                 : 1;
        unsigned	: 2;
        unsigned	D_A                 : 1;
    };
    struct {
        unsigned	: 2;
        unsigned	READ_WRITE          : 1;
        unsigned	: 2;
        unsigned	DATA_ADDRESS        : 1;
    };
} SSPSTATbits @ 0x094;
#endif

// Register: TXSTA
volatile unsigned char           TXSTA               @ 0x098;
// bit and bitfield definitions
volatile bit TX9D                @ ((unsigned)&TXSTA*8)+0;
volatile bit TRMT                @ ((unsigned)&TXSTA*8)+1;
volatile bit BRGH                @ ((unsigned)&TXSTA*8)+2;
volatile bit SYNC                @ ((unsigned)&TXSTA*8)+4;
volatile bit TXEN                @ ((unsigned)&TXSTA*8)+5;
volatile bit TX9                 @ ((unsigned)&TXSTA*8)+6;
volatile bit CSRC                @ ((unsigned)&TXSTA*8)+7;
volatile bit TXD8                @ ((unsigned)&TXSTA*8)+0;
volatile bit nTX8                @ ((unsigned)&TXSTA*8)+6;
volatile bit TX8_9               @ ((unsigned)&TXSTA*8)+6;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	TX9D                : 1;
        unsigned	TRMT                : 1;
        unsigned	BRGH                : 1;
        unsigned	                    : 1;
        unsigned	SYNC                : 1;
        unsigned	TXEN                : 1;
        unsigned	TX9                 : 1;
        unsigned	CSRC                : 1;
    };
    struct {
        unsigned	TXD8                : 1;
        unsigned	: 5;
        unsigned	nTX8                : 1;
    };
    struct {
        unsigned	: 6;
        unsigned	TX8_9               : 1;
    };
} TXSTAbits @ 0x098;
#endif

// Register: SPBRG
volatile unsigned char           SPBRG               @ 0x099;
// bit and bitfield definitions

// Register: CMCON
volatile unsigned char           CMCON               @ 0x09C;
// bit and bitfield definitions
volatile bit CIS                 @ ((unsigned)&CMCON*8)+3;
volatile bit C1INV               @ ((unsigned)&CMCON*8)+4;
volatile bit C2INV               @ ((unsigned)&CMCON*8)+5;
volatile bit C1OUT               @ ((unsigned)&CMCON*8)+6;
volatile bit C2OUT               @ ((unsigned)&CMCON*8)+7;
volatile bit CM0                 @ ((unsigned)&CMCON*8)+0;
volatile bit CM1                 @ ((unsigned)&CMCON*8)+1;
volatile bit CM2                 @ ((unsigned)&CMCON*8)+2;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	CM                  : 3;
        unsigned	CIS                 : 1;
        unsigned	C1INV               : 1;
        unsigned	C2INV               : 1;
        unsigned	C1OUT               : 1;
        unsigned	C2OUT               : 1;
    };
    struct {
        unsigned	CM0                 : 1;
        unsigned	CM1                 : 1;
        unsigned	CM2                 : 1;
    };
} CMCONbits @ 0x09C;
#endif

// Register: CVRCON
volatile unsigned char           CVRCON              @ 0x09D;
// bit and bitfield definitions
volatile bit CVRR                @ ((unsigned)&CVRCON*8)+5;
volatile bit CVROE               @ ((unsigned)&CVRCON*8)+6;
volatile bit CVREN               @ ((unsigned)&CVRCON*8)+7;
volatile bit CVR0                @ ((unsigned)&CVRCON*8)+0;
volatile bit CVR1                @ ((unsigned)&CVRCON*8)+1;
volatile bit CVR2                @ ((unsigned)&CVRCON*8)+2;
volatile bit CVR3                @ ((unsigned)&CVRCON*8)+3;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	CVR                 : 4;
        unsigned	                    : 1;
        unsigned	CVRR                : 1;
        unsigned	CVROE               : 1;
        unsigned	CVREN               : 1;
    };
    struct {
        unsigned	CVR0                : 1;
        unsigned	CVR1                : 1;
        unsigned	CVR2                : 1;
        unsigned	CVR3                : 1;
    };
} CVRCONbits @ 0x09D;
#endif

// Register: ADRESL
volatile unsigned char           ADRESL              @ 0x09E;
// bit and bitfield definitions

// Register: ADCON1
volatile unsigned char           ADCON1              @ 0x09F;
// bit and bitfield definitions
volatile bit ADCS2               @ ((unsigned)&ADCON1*8)+6;
volatile bit ADFM                @ ((unsigned)&ADCON1*8)+7;
volatile bit PCFG0               @ ((unsigned)&ADCON1*8)+0;
volatile bit PCFG1               @ ((unsigned)&ADCON1*8)+1;
volatile bit PCFG2               @ ((unsigned)&ADCON1*8)+2;
volatile bit PCFG3               @ ((unsigned)&ADCON1*8)+3;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	PCFG                : 4;
        unsigned	                    : 2;
        unsigned	ADCS2               : 1;
        unsigned	ADFM                : 1;
    };
    struct {
        unsigned	PCFG0               : 1;
        unsigned	PCFG1               : 1;
        unsigned	PCFG2               : 1;
        unsigned	PCFG3               : 1;
    };
} ADCON1bits @ 0x09F;
#endif

//
// Special function register definitions: Bank 2
//


// Register: EEDATA
volatile unsigned char           EEDATA              @ 0x10C;
// bit and bitfield definitions

// Register: EEADR
volatile unsigned char           EEADR               @ 0x10D;
// bit and bitfield definitions

// Register: EEDATH
volatile unsigned char           EEDATH              @ 0x10E;
// bit and bitfield definitions
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	                    : 6;
    };
} EEDATHbits @ 0x10E;
#endif

// Register: EEADRH
volatile unsigned char           EEADRH              @ 0x10F;
// bit and bitfield definitions
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	                    : 5;
    };
} EEADRHbits @ 0x10F;
#endif

//
// Special function register definitions: Bank 3
//


// Register: EECON1
volatile unsigned char           EECON1              @ 0x18C;
// bit and bitfield definitions
volatile bit RD                  @ ((unsigned)&EECON1*8)+0;
volatile bit WR                  @ ((unsigned)&EECON1*8)+1;
volatile bit WREN                @ ((unsigned)&EECON1*8)+2;
volatile bit WRERR               @ ((unsigned)&EECON1*8)+3;
volatile bit EEPGD               @ ((unsigned)&EECON1*8)+7;
#ifndef _LIB_BUILD
volatile union {
    struct {
        unsigned	RD                  : 1;
        unsigned	WR                  : 1;
        unsigned	WREN                : 1;
        unsigned	WRERR               : 1;
        unsigned	                    : 3;
        unsigned	EEPGD               : 1;
    };
} EECON1bits @ 0x18C;
#endif

// Register: EECON2
volatile unsigned char           EECON2              @ 0x18D;
// bit and bitfield definitions

#endif