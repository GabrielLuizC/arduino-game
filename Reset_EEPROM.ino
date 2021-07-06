void reset_eeprom()
{
  byte reset;
  for(int i=0; i<1000; i++)
  {
      EEPROM.write(i, reset);
    }
}
