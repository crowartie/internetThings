#define D2 2
#define D3 3
#define D4 4
#define D5 5
#define D6 6
#define D7 7
#define D8 8


void setup(){
    Serial.begin(9600);
	  pinMode(D8, INPUT);
    pinMode(D6, OUTPUT);
    pinMode(D7, OUTPUT);
}
bool arr[45][6]={
  	{0, 0, 0, 1, 0, 0},
	  {0, 0, 0, 1, 0, 1},
	  {0, 0, 0, 1, 1, 0},
    {0, 0, 1, 0, 0, 0},
    {0, 0, 1, 0, 0, 1},
    {0, 0, 1, 0, 1, 0},
    {0, 0, 1, 1, 0, 0},
    {0, 0, 1, 1, 0, 1},
    {0, 0, 1, 1, 1, 0},
    {0, 1, 0, 0, 0, 0},
    {0, 1, 0, 0, 0, 1},
    {0, 1, 0, 0, 1, 0},
    {0, 1, 0, 1, 0, 0},
    {0, 1, 0, 1, 0, 1},
    {0, 1, 0, 1, 1, 0},
    {0, 1, 1, 0, 0, 0},
    {0, 1, 1, 0, 0, 1},
    {0, 1, 1, 0, 1, 0},
    {0, 1, 1, 1, 0, 0},
    {0, 1, 1, 1, 0, 1},
    {0, 1, 1, 1, 1, 0},
    {1, 0, 0, 0, 0, 0},
    {1, 0, 0, 0, 0, 1},
    {1, 0, 0, 0, 1, 0},
    {1, 0, 0, 1, 0, 0},
    {1, 0, 0, 1, 0, 1},
    {1, 0, 0, 1, 1, 0},
    {1, 0, 1, 0, 0, 0},
    {1, 0, 1, 0, 0, 1},
    {1, 0, 1, 0, 1, 0},
    {1, 0, 1, 1, 0, 0},
    {1, 0, 1, 1, 0, 1},
    {1, 0, 1, 1, 1, 0},
    {1, 1, 0, 0, 0, 0},
    {1, 1, 0, 0, 0, 1},
    {1, 1, 0, 0, 1, 0},
    {1, 1, 0, 1, 0, 0},
    {1, 1, 0, 1, 0, 1},
    {1, 1, 0, 1, 1, 0},
    {1, 1, 1, 0, 0, 0},
    {1, 1, 1, 0, 0, 1},
    {1, 1, 1, 0, 1, 0},
    {1, 1, 1, 1, 0, 0},
    {1, 1, 1, 1, 0, 1},
    {1, 1, 1, 1, 1, 0}
};
int ch,press=0;	
void loop(){ 
    if(digitalRead(D8)==HIGH){
        delay(250);
    	  if(press==0){
        	  digitalWrite(D2, arr[ch][0]);
            digitalWrite(D3, arr[ch][1]);
            digitalWrite(D4, arr[ch][2]);
            digitalWrite(D5, arr[ch][3]);
            digitalWrite(D6, arr[ch][4]);
            digitalWrite(D7, arr[ch][5]);
            ch++;
            if(ch==45){
            	  ch=0;
            }
            press=1;
        }
    }
    else{
        press=0;
    }
}
