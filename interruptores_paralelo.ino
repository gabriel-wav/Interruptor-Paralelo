int b1 = 13;
int b2 = 12;
int b3 = 14;
int b4 = 27;

int led1 = 2;
int led2 = 5;
int led3 = 21;
int led4 = 23;
bool statusBotao1 = 0;
bool statusBotao2 = 0;
bool statusBotao3 = 0;
bool statusBotao4 = 0;

void setup() { 
  pinMode (led1, OUTPUT);
  pinMode (led2, OUTPUT);
  pinMode (led3, OUTPUT);  
  pinMode (led4, OUTPUT);

  pinMode (b1, INPUT);
  pinMode (b2, INPUT);
  pinMode (b3, INPUT);
  pinMode (b4, INPUT);

}

void loop() {
  statusBotao1 = digitalRead(b1);  //LED 1 E 4 ACENDEM QUANDO É ACIONADO B1 E B2 SIMULTANEAMENTE
  statusBotao2 = digitalRead(b2);
if (statusBotao1 == HIGH && statusBotao2 == HIGH)
{
   digitalWrite (led1, HIGH);
   digitalWrite (led4, HIGH);
}
else
{
   digitalWrite (led1, LOW);
   digitalWrite (led4, LOW);
}
 
 statusBotao1 = digitalRead(b1); //LED 2 E 3 ACENDEM QUANDO É ACIONADO B1 E B3 SIMULTANEAMENTE
 statusBotao3 = digitalRead(b3);
if (statusBotao1 == HIGH && statusBotao3 == HIGH)
{
   digitalWrite (led2, HIGH);
   digitalWrite (led3, HIGH);
}
else
{
   digitalWrite (led2, LOW);
   digitalWrite (led3, LOW);
}

 statusBotao2 = digitalRead(b2); //LED 3 E 4 ACENDEM QUANDO É ACIONADO B2 E B3 SIMULTANEAMENTE
 statusBotao3 = digitalRead(b3);
if (statusBotao2 == HIGH && statusBotao3 == HIGH)
{
   digitalWrite (led3, HIGH);
   digitalWrite (led4, HIGH);
}
else
{
   digitalWrite (led3, LOW);
   digitalWrite (led4, LOW);
}

statusBotao2 = digitalRead(b2); //LED 1 E 3 ACENDEM QUANDO É ACIONADO B2 E B4 SIMULTANEAMENTE
 statusBotao4 = digitalRead(b4);
  if (statusBotao2 == HIGH && statusBotao4 == HIGH)
{
   digitalWrite (led1, HIGH);
   digitalWrite (led3, HIGH);
}
else{
   digitalWrite (led1, LOW);
   digitalWrite (led3, LOW);
}

}

  