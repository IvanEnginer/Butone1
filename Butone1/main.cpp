#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRD = 0xFF;
    PORTB =0xFF;
    while (1) 
    {
//        PORTD = 0x00;
        if (!(PINB&(1<<PINB0)))
        {
            PORTD = (1<<PD6);
            _delay_ms(10);
        }
        if (!(PINB&(1<<PINB1)))
        {
            PORTD = (0<<PD6);
            _delay_ms(10);
        }
    }
}

