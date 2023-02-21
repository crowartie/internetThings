#define D2 2
#define D3 3
#define D4 4
#define D5 5
#define D6 6
#define D7 7
#define D8 8
char keyButtonKeyboard[4][3]={
  	{'1','2','3'},
	{'4','5','6'},
  	{'7','8','9'},
  	{'*','0','#'}};
int rows[]={D2,D3,D4,D5};
int cols[]={D6,D7,D8};


void setup()
{
  Serial.begin(9600);
  pinMode(D6, OUTPUT);
  pinMode(D7, OUTPUT);
  pinMode(D8, OUTPUT);
  digitalWrite(D2, HIGH);
  digitalWrite(D3, HIGH);
  digitalWrite(D4, HIGH);
  digitalWrite(D5, HIGH);

}

void loop(){
  for(int i=0;i<3;i++){
    digitalWrite(cols[i],LOW);
    for(int j=0;j<4;j++){
      if(digitalRead(rows[j])==LOW){
        Serial.println(keyButtonKeyboard[j][i]);
      	delay(130);
      }
    }    
    digitalWrite(cols[i],HIGH);
  }
}
