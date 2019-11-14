
//Traffic light using port manipulation
int speed = 500 ;

void setup()
{
DDRB = B111111; 
}

void loop ()
{
  PORTB = B001000;
  delay(speed);
  PORTB = B010000;
  delay(speed);
  PORTB = B100000;
  delay(speed);
}
