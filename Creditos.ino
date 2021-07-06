// Função Creditos //
void creditos ()
{
  lcd.fillScreen(ST77XX_BLACK); //Deixa o fundo da tela da cor desejada, no caso BLACK
  lcd.setTextSize(2); //Define o tamanho do texto
  lcd.setTextColor(BLUE); ////Define a cor do texto
  
  lcd.setCursor(18, 0); //Seta a posição X e Y
  lcd.print("-=-=-=-=-=-=-=-=-"); //Printa na tela a mensagem
  
  lcd.setCursor(30, 30); //Seta a posição X e Y
  lcd.print("Anderson Daniel"); //Printa na tela a mensagem
  
  lcd.setCursor(12, 70); //Seta a posição X e Y
  lcd.print("Eduardo M. Pereira"); //Printa na tela a mensagem
  
  lcd.setCursor(0, 110); //Seta a posição X e Y
  lcd.print("Gabriel L. Conchinel"); //Printa na tela a mensagem
 
  lcd.setCursor(30, 150); //Seta a posição X e Y
  lcd.print("Vinicius Casseb"); //Printa na tela a mensagem
  
  lcd.setCursor(32, 190); //Seta a posição X e Y
  lcd.print("Pedro H. Costa"); //Printa na tela a mensagem
  
  lcd.setCursor(18, 220); //Seta a posição X e Y
  lcd.print("-=-=-=-=-=-=-=-=-"); //Printa na tela a mensagem
}
