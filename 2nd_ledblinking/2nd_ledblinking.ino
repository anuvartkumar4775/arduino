/*
 LED blinking program using PIN no. 13
 written by Anuvart kumar
 19th june 2021
 */

void setup() {
  // put your setup code here, to run once:
  // configure pin no. 13 as output pin
  pinMode(13,OUTPUT); // this will make pin 13 as OUTPUT pin
}

void loop() {
  // put your main code here, to run repeatedly:
  // blink the LED after every 1 sec
  //turn ON the led 
  digitalWrite("13,HIGH"); //give some delay which means that LED will remain in on state for some time
  delay(1000);//delay of 1 sec.
  //turn off the LED
  digitalWrite("13,LOW"); // give some delay so that led remains in the off state for some time
  delay(1000); // delay of 1 sec
}
