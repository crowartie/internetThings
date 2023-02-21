#define D2 2
#define D3 3
#define D4 4
#define D5 5
#define D6 6
#define D7 7
#define D8 8


void setup()
{
  Serial.begin(9600);
  pinMode(D8, INPUT);
  pinMode(D6, OUTPUT);
  pinMode(D7, OUTPUT);
}
int ch1=0;


void loop(){ 
  int ch=0;	
  int arrStatus[64][6];
  for(int i=0; i<2; i++){
  	for(int i1=0;i1<2;i1++){
      for(int i2=0;i2<2;i2++){
        for(int i3=0;i3<2;i3++){
          for(int i4=0;i4<2;i4++){
            for(int i5=0;i5<2;i5++){
              arrStatus[ch][0]=i;
              arrStatus[ch][1]=i1;
              arrStatus[ch][2]=i2;
              arrStatus[ch][3]=i3;
              arrStatus[ch][4]=i4;
              arrStatus[ch][5]=i5;
              ch++;				
  		  	}
  		  }
  		}
      }
    }
  }
  int sensorVal = digitalRead(D8);
  if(sensorVal==HIGH){
    while(true){
      if(arrStatus[ch1][0]==0 and arrStatus[ch1][1]==0 and arrStatus[ch1][2]==0 and arrStatus[ch1][3]==0 and arrStatus[ch1][4]==0 and arrStatus[ch1][5]==0){
        ch1++;
      }
      else if(arrStatus[ch1][4]==0 and arrStatus[ch1][5]==0){
        ch1++;
      }
      else if(arrStatus[ch1][0]==0 and arrStatus[ch1][1]==0 and arrStatus[ch1][2]==0 and arrStatus[ch1][3]==0){
        ch1++;
      }
      else{
        Serial.println(arrStatus[ch1][0]);
        digitalWrite(D2, arrStatus[ch1][0]);
  	    digitalWrite(D3, arrStatus[ch1][1]);
  	    digitalWrite(D4, arrStatus[ch1][2]);
  	    digitalWrite(D5, arrStatus[ch1][3]);
        digitalWrite(D6, arrStatus[ch1][4]);
  	    digitalWrite(D7, arrStatus[ch1][5]);
        ch1++;
        if(ch1==64){
          ch1=0;
        }
        delay(250);
          break;
        }
      }
    }
}