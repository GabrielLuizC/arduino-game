// Função da Movimentação das "Setas" do Game e a alteração dentro do Menu //
void setas()
{
  if (menus.tela == 0)
  {
    if(digitalRead(pino_bot1) == LOW)
    {
      delay(500);
      menus.seta++;

      if(menus.seta == 1)
      {
        lcd.fillScreen(ST77XX_BLACK);
        lcd.setTextSize(4); //Define o tamanho do texto
        lcd.setTextColor(RED); //Define a cor do texto
        lcd.setCursor(13, 20); //Seta a posição X e Y
        lcd.print(" Zombies"); //Printa na tela a mensagem
      
        lcd.setTextSize(4); //Define o tamanho do texto
        lcd.setTextColor(RED); //Define a cor do texto
        lcd.setCursor(2, 50); //Seta a posição X e Y
        lcd.print(" Athletes"); //Printa na tela a mensagem 
  
        lcd.fillRect(0,95,240,35,0x1f1f);
        lcd.setTextSize(3); //Define o tamanho do texto
        lcd.setTextColor(WHITE); //Define a cor do texto
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

      if(menus.seta == 2)
      {
        lcd.fillRect(0,92,240,33,0x0000);
        lcd.setTextSize(3); //Define o tamanho do texto
        lcd.setTextColor(CYAN); //Define a cor do texto
        lcd.setCursor(78, 100); //Seta a posição X e Y
        lcd.print("Jogar\n"); //Printa na tela a mensagem

        lcd.fillRect(0,125,240,33,0x1d1d);
        lcd.setCursor(89, 130); //Seta a posição X e Y
        lcd.setTextColor(WHITE); //Define a cor do texto
        lcd.print("Rank\n"); //Printa na tela a mensagem
      }
        
      if(menus.seta == 3)
      {
        lcd.fillRect(0,125,240,33,0x0000);
        lcd.setCursor(89, 130); //Seta a posição X e Y
        lcd.setTextSize(3); //Define o tamanho do texto
        lcd.setTextColor(BLUE); //Define a cor do texto
        lcd.print("Rank\n"); //Printa na tela a mensagem

        lcd.fillRect(0,155,240,33,0x1f1f);
        lcd.setTextColor(WHITE); //Define a cor do texto
        lcd.setCursor(50, 160); //Seta a posição X e Y
        lcd.print("Creditos\n"); //Printa na tela a mensagem
        
      }

      if(menus.seta == 4)
      {
        lcd.fillRect(0,155,240,33,0x0000);
        lcd.setTextColor(CYAN); //Define a cor do texto
        lcd.setCursor(50, 160); //Seta a posição X e Y
        lcd.print("Creditos\n"); //Printa na tela a mensagem

        lcd.fillRect(0,185,240,33,0x1d1d);
        lcd.setTextColor(WHITE); //Define a cor do texto
        lcd.setCursor(89, 190); //Seta a posição X e Y
        lcd.print("Sair"); //Printa na tela a mensagem
      }
        
      if(menus.seta == 5)
      {
        lcd.fillRect(0,185,240,33,0x0000);
        lcd.setTextColor(BLUE); //Define a cor do texto
        lcd.setCursor(89, 190); //Seta a posição X e Y
        lcd.print("Sair"); //Printa na tela a mensagem
        menus.seta = 0;
      }
    }
    
    if(digitalRead(pino_bot2) == LOW)
    {
      switch (menus.seta)
      {            
        case 0:                    
          menu();
          break;                    
  
        case 1:                    
          jogar();     
          break;                     
      
        case 2:                    
          toprank();
          menus.seta = 0;     
          break;                     
      
        case 3:                    
          creditos(); 
          menus.seta = 0;     
          break;                     
      
        case 4:                    
          sair(); 
          menus.seta = 0;      
          break;
      } 
    }      
  }
}
