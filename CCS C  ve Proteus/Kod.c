#include <16f877.h>
#use delay(clock=4000000)
#fuses HS,NOWDT,NOPUT,NOLVP,NOCPD,NOPROTECT,NODEBUG,NOBROWNOUT,NOWRT
#use fast_io(b)
#use fast_io(a)

#define buton1 pin_a1
#define buton2 pin_a2

#define led1 pin_b0
#define led2 pin_b1
#define led3 pin_b2
#define led4 pin_b3
#define led5 pin_b4
#define led6 pin_b5
#define led7 pin_b6
#define led8 pin_b7

int i;

void main(){
   setup_psp(PSP_DISABLED);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_CCP1(CCP_OFF);
   setup_CCP2(CCP_OFF);
   
   
set_tris_a(0x07);
set_tris_b(0x00);


while(true){
   /*
   
      for(i=1;i<=128;i=i*2){
         output_b(i);
         delay_ms(20);
      }
   i = 1;
      */
    if(input(buton1)){
      output_high(led1);
      delay_ms(20);
      output_high(led2);
      delay_ms(20);
      output_high(led3);
      delay_ms(20);
      output_high(led4);
      delay_ms(20);
      output_high(led5);
      delay_ms(20);
      output_high(led6);
      delay_ms(20);
      output_high(led7);
      delay_ms(20);
      output_high(led8);
      delay_ms(20);
   
   output_low(led1);
   delay_ms(20);
   output_low(led2);
   delay_ms(20);
   output_low(led3);
   delay_ms(20);
   output_low(led4);
   delay_ms(20);
   output_low(led5);
   delay_ms(20);
   output_low(led6);
   delay_ms(20);
   output_low(led7);
   delay_ms(20);
   output_low(led8);
   delay_ms(20);
   }
   
   if(input(buton2)){
   output_high(led1);
   delay_ms(20);
   output_high(led2);
   delay_ms(20);
   output_high(led3);
   delay_ms(20);
   output_high(led4);
   delay_ms(20);
   output_high(led5);
   delay_ms(20);
   output_high(led6);
   delay_ms(20);
   output_high(led7);
   delay_ms(20);
   output_high(led8);
   delay_ms(20);
   
   output_low(led1);
   delay_ms(20);
   output_low(led2);
   delay_ms(20);
   output_low(led3);
   delay_ms(20);
   output_low(led4);
   delay_ms(20);
   output_low(led5);
   delay_ms(20);
   output_low(led6);
   delay_ms(20);
   output_low(led7);
   delay_ms(20);
   
   output_high(led7);
   delay_ms(20);
   output_high(led6);
   delay_ms(20);
   output_high(led5);
   delay_ms(20);
   output_high(led4);
   delay_ms(20);
   output_high(led5);
   delay_ms(20);
   output_high(led3);
   delay_ms(20);
   output_high(led2);
   delay_ms(20);
   output_high(led1);
   delay_ms(20);
   
    output_low(led8);
   delay_ms(20);
   output_low(led7);
   delay_ms(20);
   output_low(led6);
   delay_ms(20);
   output_low(led5);
   delay_ms(20);
   output_low(led4);
   delay_ms(20);
   output_low(led3);
   delay_ms(20);
   output_low(led2);
   delay_ms(20);
   output_low(led1);
   delay_ms(20);

   }
}  //while
}  //main
