void setup() {
  // put your setup code here, to run once:
  pinMode(8,1);
  pinMode(9,1);
  pinMode(10,1);
  pinMode(11,1);
  pinMode(A0,0);
  pinMode(A1,0);
  pinMode(A2,0);
  digitalWrite(A0,HIGH);
  digitalWrite(A1,HIGH);
  digitalWrite(A2,HIGH);
}

void loop(){
  // put your main code here, to run repeatedly:
  if (digitalRead(A0)==LOW)

  {
   digitalWrite(8,1);
   delay(1000);
   digitalWrite(8,0);
   
   digitalWrite(9,1);
   delay(1000);
   digitalWrite(9,0);
   
   digitalWrite(10,1);
   delay(1000);
   digitalWrite(10,0);
   
   digitalWrite(11,1);
   delay(1000);
   digitalWrite(11,0);
   
   }
  if (digitalRead (A1)==LOW)
   //for(int i=0;i<100;i++)

  
  {
   digitalWrite(11,1);
   delay(1000);
   digitalWrite(11,0);
   

   digitalWrite(10,1);
   delay(1000);
   digitalWrite(10,0);
   

   digitalWrite(9,1);
   delay(1000);
   digitalWrite(9,0);
   

   digitalWrite(8,1);
   delay(1000);
   digitalWrite(8,0);
   
  }
  if (digitalRead(A2)==LOW)

  {
    
   digitalWrite(11,0);

   digitalWrite(10,0);

   digitalWrite(9,0);

   digitalWrite(8,0);
  
  }
 
 else

 {
  digitalWrite(A1,1);
  digitalWrite(A2,1);  
   
 }


}
