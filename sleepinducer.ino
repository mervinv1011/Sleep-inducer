//Sleep inducer
#include <LiquidCrystal.h>
LiquidCrystal lcd(13, 12, 11, 10, 9, 8); 
#define freq1 2 //Input for Frequency 5Hz
#define freq2 3 //Input for Frequency 10Hz
#define freq3 4 //Input for Frequency 15Hz
#define timer1 5 //Input for Duration 5s
#define timer2 6 //Input for Duration 10s
#define timer3 7 //Input for Duration 15s
#define relay A0 //Output for Electromagnet
#define ok A1 //Input for ok button
#define led A2 //Output for LED indicator
  int freq1val=0; 
  int freq2val=0; 
  int freq3val=0; 
  int timer1val=0;
  int timer2val=0; 
  int timer3val=0; 
  int okval=0;
void setup() 
{ 
  pinMode(freq1, INPUT_PULLUP);
  pinMode(freq2, INPUT_PULLUP);
  pinMode(freq3, INPUT_PULLUP);
  pinMode(timer1, INPUT_PULLUP);
  pinMode(timer2, INPUT_PULLUP);
  pinMode(timer3, INPUT_PULLUP);
  pinMode(relay, OUTPUT);
  pinMode(ok, INPUT_PULLUP);
  pinMode(led, OUTPUT); 
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.clear();
  lcd.print("Sleep Inducer");
}
void loop() 
{ 
   freq1val=digitalRead(freq1);
   freq2val=digitalRead(freq2);
   freq3val=digitalRead(freq3);
   timer1val=digitalRead(timer1);
   timer2val=digitalRead(timer2);
   timer3val=digitalRead(timer3); 
   okval=digitalRead(ok);
   if((freq1val==0) && (timer1val==0) && (okval==0))
   {
    lcd.clear();
    lcd.print("Freq= ");
    lcd.setCursor(8,0);
    lcd.print("5 Hz");
    lcd.setCursor(0,1);
    lcd.print("Time= ");
    lcd.setCursor(8,1);
    lcd.print("5 sec");
    for(int i=0; i<=5; i++)
    {
      for (int j=0; j<=5; j++)
      {
      digitalWrite(relay, HIGH);
      digitalWrite(led, HIGH);
      delay(50);
      digitalWrite(relay, LOW);
      digitalWrite(led, LOW);
      delay(50);
      }
    }
    lcd.clear();
    lcd.print("  OK to Start  ");
   } 
   else if((freq1val==0) && (timer2val==0) && (okval==0))
   {
    lcd.clear();
    lcd.print("Freq= ");
    lcd.setCursor(8,0);
    lcd.print("5 Hz");
    lcd.setCursor(0,1);
    lcd.print("Time= ");
    lcd.setCursor(8,1);
    lcd.print("10 sec");
    for(int i=0; i<=10; i++)
    {
      for (int j=0; j<=5; j++)
      {
      digitalWrite(relay, HIGH);
      digitalWrite(led, HIGH);
      delay(50);
      digitalWrite(relay, LOW);
      digitalWrite(led, LOW);
      delay(50);
      }
    }
    lcd.clear();
    lcd.print("  OK to Start  ");
   }  
   else if((freq1val==0) && (timer3val==0) && (okval==0))
   {
    lcd.clear();
    lcd.print("Freq= ");
    lcd.setCursor(8,0);
    lcd.print("5 Hz");
    lcd.setCursor(0,1);
    lcd.print("Time= ");
    lcd.setCursor(8,1);
    lcd.print("15 sec");
    for(int i=0; i<=15; i++)
    {
      for (int j=0; j<=5; j++)
      {
      digitalWrite(relay, HIGH);
      digitalWrite(led, HIGH);
      delay(50);
      digitalWrite(relay, LOW);
      digitalWrite(led, LOW);
      delay(50);
      }
    }
    lcd.clear();
    lcd.print("  OK to Start  ");
   } 
   else if((freq2val==0) && (timer1val==0) && (okval==0))
   {
    lcd.clear();
    lcd.print("Freq= ");
    lcd.setCursor(8,0);
    lcd.print("10 Hz");
    lcd.setCursor(0,1);
    lcd.print("Time= ");
    lcd.setCursor(8,1);
    lcd.print("5 sec");
    for(int i=0; i<=8; i++)
    {
      for (int j=0; j<=5; j++)
      {
      digitalWrite(relay, HIGH);
      digitalWrite(led, HIGH);
      delay(30);
      digitalWrite(relay, LOW);
      digitalWrite(led, LOW);
      delay(30);
      }
    }
    lcd.clear();
    lcd.print("  OK to Start  ");
   }  
   else if((freq2val==0) && (timer2val==0) && (okval==0))
   {
    lcd.clear();
    lcd.print("Freq= ");
    lcd.setCursor(8,0);
    lcd.print("10 Hz");
    lcd.setCursor(0,1);
    lcd.print("Time= ");
    lcd.setCursor(8,1);
    lcd.print("10 sec");
    for(int i=0; i<=15; i++)
    {
      for (int j=0; j<=5; j++)
      {
      digitalWrite(relay, HIGH);
      digitalWrite(led, HIGH);
      delay(30);
      digitalWrite(relay, LOW);
      digitalWrite(led, LOW);
      delay(30);
      }
    }
    lcd.clear();
    lcd.print("  OK to Start  ");
   }  
   else if((freq2val==0) && (timer3val==0) && (okval==0))
   {
    lcd.clear();
    lcd.print("Freq= ");
    lcd.setCursor(8,0);
    lcd.print("10 Hz");
    lcd.setCursor(0,1);
    lcd.print("Time= ");
    lcd.setCursor(8,1);
    lcd.print("15 sec");
    for(int i=0; i<=25; i++)
    {
      for (int j=0; j<=5; j++)
      {
      digitalWrite(relay, HIGH);
      digitalWrite(led, HIGH);
      delay(30);
      digitalWrite(relay, LOW);
      digitalWrite(led, LOW);
      delay(30);
      }
    }
    lcd.clear();
    lcd.print("  OK to Start  ");
   }  
   else if((freq3val==0) && (timer1val==0) && (okval==0))
   {
    lcd.clear();
    lcd.print("Freq= ");
    lcd.setCursor(8,0);
    lcd.print("15 Hz");
    lcd.setCursor(0,1);
    lcd.print("Time= ");
    lcd.setCursor(8,1);
    lcd.print("5 sec");
    for(int i=0; i<=9; i++)
    {
      for (int j=0; j<=5; j++)
      {
      digitalWrite(relay, HIGH);
      digitalWrite(led, HIGH);
      delay(25);
      digitalWrite(relay, LOW);
      digitalWrite(led, LOW);
      delay(25);
      }
    }
    lcd.clear();
    lcd.print("  OK to Start  ");
   } 
   else if((freq3val==0) && (timer2val==0) && (okval==0))
   {
    lcd.clear();
    lcd.print("Freq= ");
    lcd.setCursor(8,0);
    lcd.print("15 Hz");
    lcd.setCursor(0,1);
    lcd.print("Time= ");
    lcd.setCursor(8,1);
    lcd.print("10 sec");
    for(int i=0; i<=20; i++)
    {
      for (int j=0; j<=5; j++)
      {
      digitalWrite(relay, HIGH);
      digitalWrite(led, HIGH);
      delay(25);
      digitalWrite(relay, LOW);
      digitalWrite(led, LOW);
      delay(25);
      }
    }
    lcd.clear();
    lcd.print("  OK to Start  ");
   } 
   else if((freq3val==0) && (timer3val==0) && (okval==0))
   {
    lcd.clear();
    lcd.print("Freq= ");
    lcd.setCursor(8,0);
    lcd.print("15 Hz");
    lcd.setCursor(0,1);
    lcd.print("Time= ");
    lcd.setCursor(8,1);
    lcd.print("15 sec");
    for(int i=0; i<=30; i++)
    {
      for (int j=0; j<=5; j++)
      {
      digitalWrite(relay, HIGH);
      digitalWrite(led, HIGH);
      delay(25);
      digitalWrite(relay, LOW);
      digitalWrite(led, LOW);
      delay(25);
      }
    }
    lcd.clear();
    lcd.print("  OK to Start  ");
   }
   else if(okval==0)
   {
    lcd.clear();
    lcd.print("Set Time & Freq..");
    delay(2000);
    lcd.clear();
    lcd.print("  OK to Start  ");
   }
}
/*
   lcd.clear();
   lcd.print("Count= ");
   lcd.setCursor(8,0);
   lcd.print(i);
*/