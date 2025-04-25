//Definimos las variables que utilizaremos en el código
int sensor=A1; //Indica el puerto en el que está conectado el sensor
int senal; // La señal que se recibe del sensor
int temperatura; //Buscamos que el dispositivo registe temperatura

void setup()
{
  pinMode(sensor, INPUT);
  Serial.begin(9600); //Para visualizar el resultado iniciamos la serie con la frecuencia de muestreo de 9600
}

void loop() //El loop quiere decir que las acciones a continuación se repiten de forma recurrente
{
  senal=analogRead(sensor); //Lo que se recibe del pin analógico
  temperatura=(5*100*senal/1024); 
  Serial.println(temperatura); //Imprimimos la temperatura
  delay(200);
}  // put your setup code here, to run once:



