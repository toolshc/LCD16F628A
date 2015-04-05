#include <16f628a.h>
#fuses XT, NOWDT, PUT, MCLR, NOBROWNOUT NOLVP NOCPD, NOPROTECT

#use delay (clock = 4000000)

#include <lcd.c>

void main() {
   
   lcd_init();
   lcd_gotoxy(1,1);
   lcd_putc("OFERTA AQUI");
   
}
