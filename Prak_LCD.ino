#include <LiquidCrystal.h>

// Inisialisasi LCD dengan pin (RS, E, D4, D5, D6, D7)
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

void setup() {
  lcd.begin(16, 2);  // Inisialisasi LCD 16x2
}

void loop() {
  lcd.clear();  // Menghapus layar LCD
  lcd.setCursor(0, 0);  // Set posisi di kolom 0, baris ke-0
  lcd.print("Raffi Fadlika");
  lcd.setCursor(0, 1);  // Set posisi di kolom 0, baris ke-1
  lcd.print("42623002");

  delay(2000);  // Tampilkan selama 2 detik

  lcd.clear();
  lcd.setCursor(0, 0);  // Set posisi di kolom 4, baris ke-0
  lcd.print("Andrew Nathanael");
  lcd.setCursor(0, 1);  // Set posisi di kolom 5, baris ke-1
  lcd.print("42623005");

  delay(2000);  // Tampilkan selama 2 detik
}
