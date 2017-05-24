int R1_A1=A1;
int MIN_A3=A3;
int R5_A5=A5;
int MUP_A0=A0;
int VCC=4;

//Current voltage Out for Middle_front_print

//int VCC =3;

//-----------------------------------------------------------------------declaration motor--configration----
int LM1=9; //left_motor
int LM2=10;//left_motor
int RM1=11;//right_motor
int RM2=12;//right_motor
//------------------------------------------------------------------------------------sensor_configration-
int Left=0;
int Middle=0;
int Right=0;
int Middle_Upper=0;

int t1=0;
int t=0;

void setup() 
{
  
//------------------------------------------------------------  
pinMode(Left,INPUT);

pinMode(Middle,INPUT);

pinMode(Right,INPUT);

pinMode(Middle_Upper,INPUT);

pinMode(VCC,OUTPUT);

//--------M_O_T_O_R-------------------------------------------

  pinMode(LM1,OUTPUT);
  pinMode(LM2,OUTPUT);
  pinMode(RM1,OUTPUT);
  pinMode(RM2,OUTPUT);
 // pinMode(4,OUTPUT);


}

void loop()
{  
  
   t=20;
   t1=100-t;
   digitalWrite(4,HIGH);
   delayMicroseconds(t1);
   
   Left=analogRead(R5_A5);
   Middle=analogRead(MIN_A3);
   Right=analogRead(R1_A1);
   Middle_Upper=analogRead(MUP_A0);
   


//---------------------------------------------------------------------------------return-------------------------------------------------------------------------------------------------------

//return

 if((Left>100)&&(Middle>100)&&(Middle_Upper>100)&&(Right>100)) //path End
{
     
         digitalWrite(LM1, LOW);digitalWrite(RM1,HIGH); 
         digitalWrite(LM2, HIGH); digitalWrite(RM2,LOW);

         //delay(350);
}

//forward//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
else if((Left>100)&&(Middle<100)&&(Middle_Upper<100)&&(Right>100)) //bot_on_the_track
{
     
         digitalWrite(LM1, HIGH);digitalWrite(RM1,HIGH); 
         digitalWrite(LM2, LOW); digitalWrite(RM2,LOW);

         //delay(350);
}
//new
else if((Left>100)&&(Middle>100)&&(Middle_Upper<100)&&(Right>100)) //bot_on_the_track
{
     
         digitalWrite(LM1, HIGH);digitalWrite(RM1,HIGH); 
         digitalWrite(LM2, LOW); digitalWrite(RM2,LOW);

         //delay(350);
}



else if((Left<100)&&(Middle<100)&&(Middle_Upper<100)&&(Right>100))  //avoid_left_branch
{
     
         digitalWrite(LM1, HIGH);digitalWrite(RM1,HIGH); 
         digitalWrite(LM2, LOW); digitalWrite(RM2,LOW);

         //delay(350);
}


else if((Left<100)&&(Middle>100)&&(Middle_Upper<100)&&(Right>100))  //avoid_left_branch
{
     
         digitalWrite(LM1, HIGH);digitalWrite(RM1,HIGH); 
         digitalWrite(LM2, LOW); digitalWrite(RM2,LOW);

         delay(350);
}




//right-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
else if((Left>100)&&(Middle<100)&&(Middle_Upper<100)&&(Right<100)) //recogniiase the right branch
{
     
         digitalWrite(LM1, HIGH);digitalWrite(RM1,LOW); 
         digitalWrite(LM2, LOW); digitalWrite(RM2,HIGH);
         delay(350);
         //delay(350);
}

else if((Left>100)&&(Middle>100)&&(Middle_Upper>100)&&(Right<100)) //recogniiase the right branch
{
     
         digitalWrite(LM1, HIGH);digitalWrite(RM1,LOW); 
         digitalWrite(LM2, LOW); digitalWrite(RM2,HIGH);
         delay(350);
         //delay(350);
}
//----------------------------------
else if((Left<100)&&(Middle<100)&&(Middle_Upper>100)&&(Right<100)) //recogniiase the right branch
{
     
         digitalWrite(LM1, HIGH);digitalWrite(RM1,LOW); 
         digitalWrite(LM2, LOW); digitalWrite(RM2,HIGH);
         delay(350);
         //delay(350);
}


else if((Left<100)&&(Middle>100)&&(Middle_Upper>100)&&(Right<100)) //recogniiase the right branch
{
     
         digitalWrite(LM1, HIGH);digitalWrite(RM1,LOW); 
         digitalWrite(LM2, LOW); digitalWrite(RM2,HIGH);
         delay(350);
         //delay(350);
}




else if((Left>100)&&(Middle<100)&&(Middle_Upper>100)&&(Right<100)) //recogniiase the right path
{
     
         digitalWrite(LM1, HIGH);digitalWrite(RM1,LOW); 
         digitalWrite(LM2, LOW); digitalWrite(RM2,HIGH);

         //delay(350);
}

//left
else if((Left<100)&&(Middle<100)&&(Middle_Upper>100)&&(Right>100)) //recogniiase the right path
{
     
         digitalWrite(LM1, LOW);digitalWrite(RM1,HIGH); 
         digitalWrite(LM2, LOW); digitalWrite(RM2,LOW);

         //delay(350);
}


//end


else if((Left<100)&&(Middle<100)&&(Middle_Upper<100)&&(Right<100)) //recogniiase the right path
{
     
         digitalWrite(LM1, LOW);digitalWrite(RM1,LOW); 
         digitalWrite(LM2, LOW); digitalWrite(RM2,LOW);

         //delay(350);
}



}

//else

