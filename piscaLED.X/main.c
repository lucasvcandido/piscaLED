/*
 * File:   main.c
 * Author: 19180064
 *
 * Created on 9 de Março de 2020, 10:08
 */


#include <xc.h>
#include "config.h"

#define LED1 PORTDbits.RD0
#define LED2 PORTDbits.RD1
#define botao1 PORTDbits.RD3
#define botao2 PORTDbits.RD2
#define dirLED1 TRISDbits.TRISD0
#define dirLED2 TRISDbits.TRISD1
#define dirIn 1
#define dirOut 0

void main(void) {
    
    LED1 = 0;
    LED2 = 0;
    dirLED1 = dirOut;
    dirLED2 = dirOut;
    botao1 = dirIn;
    botao2 = dirIn;
    
    while(1){
        LED1 = 1;
        LED2 = 0;
        __delay_ms(500);
        LED1 = 0;
        LED2 = 1;
        
    }
    
    
}
