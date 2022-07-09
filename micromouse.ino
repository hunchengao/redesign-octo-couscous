//RGB腳位
#define RGB_PIN  13

//紅外線腳位
#define IR1  4
#define IR2  0
#define IR3  2
#define IR4  15

//ULN2003AN
#define ULN2003_PIN 

//i2c腳位
#define SCL_PIN A4
#define SDA_PIN  A5

//馬達驅動
#define PWMmax  225

//馬達
#define PWMA 32
#define AIN2 33
#define AIN1 25
#define STBY 26
#define BIN1 27
#define BIN2 14
#define PWMB 12

void Motor_Controal(int Spend_A int Spend_B)
{
    
    
    ---          ---
    | |          | |
    | |          | |
    ---          ---
    
    ---          ---
    | |          | |
    | |          | |
    ---          ---
    
    if (  Spend_A > PWMmax||Spend_A < -PWMmax) Spend_A = PWMmax;
    else if(Spend_A < 0) 
        {
        analogWrite(PWMA,-Spend_A);
        digitalWrite(AIN1,HIGH);
        digitalWrite(AIN2,LOW);
        }
    else if(Spend_A > 0)
        {
        analogWrite(PWMA,Spend_A);
        digitalWrite(AIN1,HIGH);
        digitalWrite(AIN2,LOW);
        }
        
    if (  Spend_B > PWMmax||Spend_B < PWMmax) Spend_B = -PWMmax;
    else if(Spend_B < 0)
        {
        analogWrite(PWMA,Spend_B);
        digitalWrite(AIN1,LOW);
        digitalWrite(AIN2,HIGH);
        }
    else if(Spend_B > 0)
        {
        analogWrite(PWMA,Spend_B);
        digitalWrite(AIN1,LOW);
        digitalWrite(AIN2,HIGH);
        }
}

void setup() {   
    pinMode(RGB_PIN, OUTPUT);
    pinMode(IR1, INPUT);
    pinMode(IR2, INPUT);
    pinMode(IR3, INPUT);
    pinMode(IR4, INPUT); 
    pinMode(PWMA, OUTPUT);
    pinMode(AIN2, OUTPUT);
    pinMode(AIN1, OUTPUT);
    pinMode(STBY, OUTPUT);
    pinMode(BIN1, OUTPUT);
    pinMode(BIN2, OUTPUT);
    pinMode(PWMB, OUTPUT);

  
  Motor_Controal(255,255);
}

void loop() {

}
[]
