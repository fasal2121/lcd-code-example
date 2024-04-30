#include <Wire.h>  // Importation de la bibliothèque Wire pour la communication I2C
#include <LiquidCrystal_I2C.h>  // Importation de la bibliothèque LiquidCrystal_I2C pour les écrans LCD utilisant I2C

// Initialisation de l'écran LCD avec son adresse I2C (0x27) et ses dimensions (20 colonnes, 4 lignes)
LiquidCrystal_I2C lcd(0x27, 20, 4);

// Variable pour stocker le score
int score = 0;

void setup() {
  lcd.init();  // Initialisation du LCD
}

void loop() {
  lcd.backlight();  // Active le rétroéclairage du LCD

  // Positionne le curseur au début de la première ligne
  lcd.setCursor(0, 0);

  // Affiche le texte "Total points" sur la première ligne
  lcd.print("Total points :");

  // Affiche la valeur de la variable score
  lcd.print(score);

  // délai de 1 seconde
  delay(1000);

  // Incrémentation de la variable score
  score+=1;
}
