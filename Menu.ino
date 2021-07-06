// Função Menu que chama apenas a escrita do Menu //
void menu ()
{
  lcd.fillScreen(ST77XX_BLACK);
  lcd.fillRect(0,0,240,30,BLACK);
  lcd.setTextSize(4); //Define o tamanho do texto
  lcd.setTextColor(RED); //Define a cor do texto
  lcd.setCursor(13, 20); //Seta a posição X e Y
  lcd.print(" Zombies"); //Printa na tela a mensagem

  lcd.setTextSize(4); //Define o tamanho do texto
  lcd.setTextColor(RED); //Define a cor do texto
  lcd.setCursor(2, 50); //Seta a posição X e Y
  lcd.print(" Athletes"); //Printa na tela a mensagem 

  lcd.setTextSize(3); //Define o tamanho do texto
  lcd.setTextColor(CYAN); //Define a cor do texto
  lcd.setCursor(78, 100); //Seta a posição X e Y
  lcd.print("Jogar\n"); //Printa na tela a mensagem
  
  lcd.setCursor(89, 130); //Seta a posição X e Y
  lcd.setTextColor(BLUE); //Define a cor do texto
  lcd.print("Rank\n"); //Printa na tela a mensagem

  lcd.setTextColor(CYAN); //Define a cor do texto
  lcd.setCursor(50, 160); //Seta a posição X e Y
  lcd.print("Creditos\n"); //Printa na tela a mensagem

  lcd.setTextColor(BLUE); //Define a cor do texto
  lcd.setCursor(89, 190); //Seta a posição X e Y
  lcd.print("Sair"); //Printa na tela a mensagem
}
