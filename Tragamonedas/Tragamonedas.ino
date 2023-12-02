const int analogInPin1 = A1;
const int OutPin1 = 13;
int cont1 = 0;
int band1 = 0;
//---------------------------
const int analogInPin2 = A3;
const int OutPin2 = 13;
int cont2 = 0;
int band2 = 0;
//---------------------------
const int analogInPin5 = A4;
const int OutPin5 = 13;
int cont5 = 0;
int band5 = 0;
//---------------------------
const int analogInPin10 = A5;
const int OutPin10 = 13;
int cont10 = 0;
int band10 = 0;
//---------------------------
const int analogInPin20 = A6;
const int OutPin20 = 13;
int cont20 = 0;
int band20 = 0;
//---------------------------
int total = 0;

void setup() {
  
  Serial.begin(9600);
  pinMode(OutPin1, OUTPUT);
  pinMode(analogInPin1, INPUT);

  pinMode(OutPin2, OUTPUT);
  pinMode(analogInPin2, INPUT);

  pinMode(OutPin5, OUTPUT);
  pinMode(analogInPin5, INPUT);

  pinMode(OutPin10, OUTPUT);
  pinMode(analogInPin10, INPUT);

  pinMode(OutPin20, OUTPUT);
  pinMode(analogInPin20, INPUT);
}

//--------------------------------------------------------------------------------------------------------------------------------------------------

void loop() {

  Moneda1();
  delay(500);
  Moneda2();
  delay(500);
  Serial.println("Total juntado: $" + total);
  delay(500);
}

//--------------------------------------------------------------------------------------------------------------------------------------------------

int Moneda1 (){

  int sensorValue = analogRead(analogInPin1);

  do{
    if(sensorValue > 900){
      digitalWrite(OutPin1, HIGH);
      band1 = 1;
    }else {
      digitalWrite(OutPin1, LOW);

      if(band1 == 1){
        band1 = 2;
      }
    }

    if (band1 == 2){
      cont1 = cont1 + 1;
      total = total + 1;
      band1 == 0;
      Serial.println("Monedas de $1 hasta el momento: " + cont1);
    }

    Serial.println(sensorValue = "Hola");
    delay(100);

  } while (sensorValue <= 500);

  return cont1;
}

//---------------------------------------------------------------------------------------------------------------------

int Moneda2 (){

  int sensorValue = analogRead(analogInPin2);

  do{
    if(sensorValue > 900){
      digitalWrite(OutPin2, HIGH);
      band2 = 1;
    }else {
      digitalWrite(OutPin2, LOW);

      if(band2 == 1){
        band2 = 2;
      }
    }

    if (band2 == 2){
      cont2++;
      total = total + 2;
      band2 == 0;
      Serial.println("Monedas de $2 hasta el momento: " + cont2);
    }

    Serial.println(sensorValue);
    delay(100);

  } while (sensorValue <= 500);

  return cont2;
}

//---------------------------------------------------------------------------------------------------------------------

int Moneda5 (){

  int sensorValue5 = analogRead(analogInPin5);

  do{
    if(sensorValue5 > 900){
      digitalWrite(OutPin5, HIGH);
      band5 = 1;
    }else {
      digitalWrite(OutPin5, LOW);

      if(band5 == 1){
        band5 = 2;
      }
    }

    if (band5 == 2){
      cont5++;
      total = total + 5;
      band5 == 0;
      Serial.println("Monedas de $5 hasta el momento: " + cont5);
    }

    Serial.println(sensorValue5);
    delay(100);

  } while (sensorValue5 <= 500);

  return cont5;
}

//---------------------------------------------------------------------------------------------------------------------

int Moneda10 (){

  int sensorValue = analogRead(analogInPin10);

  do{
    if(sensorValue > 900){
      digitalWrite(OutPin10, HIGH);
      band10 = 1;
    }else {
      digitalWrite(OutPin10, LOW);

      if(band10 == 1){
        band10 = 2;
      }
    }

    if (band10 == 2){
      cont10++;
      total = total + 10;
      band10 == 0;
      Serial.println("Monedas de $10 hasta el momento: " + cont10);
    }

    Serial.println(sensorValue);
    delay(100);

  } while (sensorValue <= 500);

  return cont10;
}

//---------------------------------------------------------------------------------------------------------------------

int Moneda20 (){

  int sensorValue = analogRead(analogInPin20);

  do{
    if(sensorValue > 900){
      digitalWrite(OutPin20, HIGH);
      band20 = 1;
    }else {
      digitalWrite(OutPin20, LOW);

      if(band20 == 1){
        band20 = 2;
      }
    }

    if (band20 == 2){
      cont20++;
      total = total + 20;
      band20 == 0;
      Serial.println("Monedas de $20 hasta el momento: " + cont20);
    }

    Serial.println(sensorValue);
    delay(100);

  } while (sensorValue <= 500);

  return cont20;
}