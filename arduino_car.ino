// Arduino Car示範 ... Car測試程式碼

/*
file  : arduino_car.ino
author: Ming-Chang Lee
email : alan9956@gmail.com
RWEPA : http://rwepa.blogspot.tw/
date  : 2021.5.28 
*/

void setup()
{
pinMode( 12 , OUTPUT); //控制右輪前後
pinMode( 10 , OUTPUT); //控制右輪轉速
pinMode( 13 , OUTPUT); //控制左輪前後
pinMode( 11 , OUTPUT); //控制左輪轉速
}

void loop()
{
digitalWrite( 12 , LOW ); //控制右輪後退
digitalWrite( 10 , HIGH ); //右輪轉速最高
digitalWrite( 13 , HIGH ); //控制左輪前進
digitalWrite( 11 , HIGH ); //控制左輪最高
}

// end
