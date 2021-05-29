// Arduino Car + Lighht

/*
file  : arduino_car_light.ino
author: Ming-Chang Lee
email : alan9956@gmail.com
RWEPA : http://rwepa.blogspot.tw/
date  : 2021.5.28 
*/

int pwm = 0;
int readright = 0;
int readleft = 0;

void setup()
{
pinMode( 12, OUTPUT);
pinMode( 10, OUTPUT);
pinMode( 13 , OUTPUT);
pinMode( 11 , OUTPUT);
pwm = 255 ;
}
void loop()
{
readright = analogRead(0) ;
readleft = analogRead(1) + 100;
if ((( readright + readleft ) / 2 ) >= 850 )
{
if ( abs( readright - readleft ) > 150 )
{
if (readright >= readleft )
right();
else
left();
}
else
forward();
}
else
brake();
}

void right()
{
digitalWrite( 12 , LOW );
analogWrite(10 , pwm);
digitalWrite( 13 , HIGH );
analogWrite(11 , pwm);
}

void brake()
{
analogWrite(10 , 0);
analogWrite(11 , 0);
}

void left()
{
digitalWrite( 12 , HIGH );
analogWrite(10 , pwm);
digitalWrite( 13 , LOW );
analogWrite(11 , pwm);
}

void bake()
{
digitalWrite( 12 , LOW );
analogWrite(10 , pwm);
digitalWrite( 13 , LOW );
analogWrite(11 , pwm);
}

void forward()
{
digitalWrite( 12 , HIGH );
analogWrite(10 , pwm);
digitalWrite( 13 , HIGH );
analogWrite(11 , pwm);
}
　

// end
