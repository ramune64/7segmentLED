int pin_ten_nums[] = {0,1,2,3,4,5,6};
int pin_nums[] = {0+7,1+7,2+7,3+7,4+7,5+7,6+7};
int one;
int ten;

int num = 0;
/* 
         [2]
 |-----------------|
 |                 |
 | [0]             |[3]
 |                 |
 |      [1]        |
 |-----------------|
 |                 |
 | [6]             |[4]
 |                 |
 |       [5]       |
 |-----------------|
 */
 void sevensegments_none(){
  for(int i=0;i<7;i++){
    digitalWrite(pin_nums[i],LOW);
  }
}
void sevensegments_zero(){
  for(int i=0;i<7;i++){
    digitalWrite(pin_nums[i],LOW);
  }
  digitalWrite(pin_nums[0],HIGH);
  digitalWrite(pin_nums[2],HIGH);
  digitalWrite(pin_nums[3],HIGH);
  digitalWrite(pin_nums[4],HIGH);
  digitalWrite(pin_nums[5],HIGH);
  digitalWrite(pin_nums[6],HIGH);
}
void sevensegments_one(){
  for(int i=0;i<7;i++){
    digitalWrite(pin_nums[i],LOW);
  }
  digitalWrite(pin_nums[4],HIGH);
  digitalWrite(pin_nums[3],HIGH);
}
void sevensegments_two(){
  for(int i=0;i<7;i++){
    digitalWrite(pin_nums[i],LOW);
  }
  digitalWrite(pin_nums[3],HIGH);
  digitalWrite(pin_nums[1],HIGH);
  digitalWrite(pin_nums[2],HIGH);
  digitalWrite(pin_nums[6],HIGH);
  digitalWrite(pin_nums[5],HIGH);
}
void sevensegments_three(){
  for(int i=0;i<7;i++){
    digitalWrite(pin_nums[i],LOW);
  }
  digitalWrite(pin_nums[1],HIGH);
  digitalWrite(pin_nums[3],HIGH);
  digitalWrite(pin_nums[2],HIGH);
  digitalWrite(pin_nums[4],HIGH);
  digitalWrite(pin_nums[5],HIGH);
}
void sevensegments_four(){
  for(int i=0;i<7;i++){
    digitalWrite(pin_nums[i],LOW);
  }
  digitalWrite(pin_nums[3],HIGH);
  digitalWrite(pin_nums[1],HIGH);
  digitalWrite(pin_nums[0],HIGH);
  digitalWrite(pin_nums[4],HIGH);
}
void sevensegments_five(){
  for(int i=0;i<7;i++){
    digitalWrite(pin_nums[i],LOW);
  }
  digitalWrite(pin_nums[1],HIGH);
  digitalWrite(pin_nums[0],HIGH);
  digitalWrite(pin_nums[2],HIGH);
  digitalWrite(pin_nums[5],HIGH);
  digitalWrite(pin_nums[4],HIGH);
}
void sevensegments_six(){
  for(int i=0;i<7;i++){
    digitalWrite(pin_nums[i],LOW);
  }
  digitalWrite(pin_nums[1],HIGH);
  digitalWrite(pin_nums[2],HIGH);
  digitalWrite(pin_nums[0],HIGH);
  digitalWrite(pin_nums[4],HIGH);
  digitalWrite(pin_nums[5],HIGH);
  digitalWrite(pin_nums[6],HIGH);
}
void sevensegments_seven(){
  for(int i=0;i<7;i++){
    digitalWrite(pin_nums[i],LOW);
  }
  digitalWrite(pin_nums[3],HIGH);
  digitalWrite(pin_nums[2],HIGH);
  digitalWrite(pin_nums[0],HIGH);
  digitalWrite(pin_nums[4],HIGH);
}
void sevensegments_eight(){
  for(int i=0;i<7;i++){
    digitalWrite(pin_nums[i],HIGH);
  }
}
void sevensegments_nine(){
  for(int i=0;i<7;i++){
    digitalWrite(pin_nums[i],LOW);
  }
  digitalWrite(pin_nums[0],HIGH);
  digitalWrite(pin_nums[1],HIGH);
  digitalWrite(pin_nums[2],HIGH);
  digitalWrite(pin_nums[3],HIGH);
  digitalWrite(pin_nums[5],HIGH);
  digitalWrite(pin_nums[4],HIGH);
}


/* 
         [1]
 |-----------------|
 |                 |
 | [3]             |[0]
 |                 |
 |      [2]        |
 |-----------------|
 |                 |
 | [4]             |[6]
 |                 |
 |       [5]       |
 |-----------------|
 */
void sevensegments_ten_none(){
  for(int i=0;i<7;i++){
    digitalWrite(pin_ten_nums[i],LOW);
  }
}
void sevensegments_ten_zero(){
  for(int i=0;i<7;i++){
    digitalWrite(pin_ten_nums[i],LOW);
  }
  digitalWrite(pin_ten_nums[0],HIGH);
  digitalWrite(pin_ten_nums[1],HIGH);
  digitalWrite(pin_ten_nums[3],HIGH);
  digitalWrite(pin_ten_nums[4],HIGH);
  digitalWrite(pin_ten_nums[5],HIGH);
  digitalWrite(pin_ten_nums[6],HIGH);
}
void sevensegments_ten_one(){
  for(int i=0;i<7;i++){
    digitalWrite(pin_ten_nums[i],LOW);
  }
  digitalWrite(pin_ten_nums[0],HIGH);
  digitalWrite(pin_ten_nums[6],HIGH);
}
void sevensegments_ten_two(){
  for(int i=0;i<7;i++){
    digitalWrite(pin_ten_nums[i],LOW);
  }
  digitalWrite(pin_ten_nums[0],HIGH);
  digitalWrite(pin_ten_nums[1],HIGH);
  digitalWrite(pin_ten_nums[2],HIGH);
  digitalWrite(pin_ten_nums[4],HIGH);
  digitalWrite(pin_ten_nums[5],HIGH);
}
void sevensegments_ten_three(){
  for(int i=0;i<7;i++){
    digitalWrite(pin_ten_nums[i],LOW);
  }
  digitalWrite(pin_ten_nums[1],HIGH);
  digitalWrite(pin_ten_nums[0],HIGH);
  digitalWrite(pin_ten_nums[2],HIGH);
  digitalWrite(pin_ten_nums[6],HIGH);
  digitalWrite(pin_ten_nums[5],HIGH);
}
void sevensegments_ten_four(){
  for(int i=0;i<7;i++){
    digitalWrite(pin_ten_nums[i],LOW);
  }
  digitalWrite(pin_ten_nums[3],HIGH);
  digitalWrite(pin_ten_nums[2],HIGH);
  digitalWrite(pin_ten_nums[0],HIGH);
  digitalWrite(pin_ten_nums[6],HIGH);
}
void sevensegments_ten_five(){
  for(int i=0;i<7;i++){
    digitalWrite(pin_ten_nums[i],LOW);
  }
  digitalWrite(pin_ten_nums[1],HIGH);
  digitalWrite(pin_ten_nums[3],HIGH);
  digitalWrite(pin_ten_nums[2],HIGH);
  digitalWrite(pin_ten_nums[5],HIGH);
  digitalWrite(pin_ten_nums[6],HIGH);
}
void sevensegments_ten_six(){
  for(int i=0;i<7;i++){
    digitalWrite(pin_ten_nums[i],LOW);
  }
  digitalWrite(pin_ten_nums[1],HIGH);
  digitalWrite(pin_ten_nums[2],HIGH);
  digitalWrite(pin_ten_nums[3],HIGH);
  digitalWrite(pin_ten_nums[4],HIGH);
  digitalWrite(pin_ten_nums[5],HIGH);
  digitalWrite(pin_ten_nums[6],HIGH);
}
void sevensegments_ten_seven(){
  for(int i=0;i<7;i++){
    digitalWrite(pin_ten_nums[i],LOW);
  }
  digitalWrite(pin_ten_nums[3],HIGH);
  digitalWrite(pin_ten_nums[1],HIGH);
  digitalWrite(pin_ten_nums[0],HIGH);
  digitalWrite(pin_ten_nums[6],HIGH);
}
void sevensegments_ten_eight(){
  for(int i=0;i<7;i++){
    digitalWrite(pin_ten_nums[i],HIGH);
  }
}
void sevensegments_ten_nine(){
  for(int i=0;i<7;i++){
    digitalWrite(pin_ten_nums[i],LOW);
  }
  digitalWrite(pin_ten_nums[0],HIGH);
  digitalWrite(pin_ten_nums[1],HIGH);
  digitalWrite(pin_ten_nums[2],HIGH);
  digitalWrite(pin_ten_nums[3],HIGH);
  digitalWrite(pin_ten_nums[5],HIGH);
  digitalWrite(pin_ten_nums[6],HIGH);
}


void (*functions[10])() = {sevensegments_zero,sevensegments_one,sevensegments_two,sevensegments_three,sevensegments_four,sevensegments_five,sevensegments_six,sevensegments_seven,sevensegments_eight,sevensegments_nine};
  void (*functions_ten[10])() = {sevensegments_ten_zero,sevensegments_ten_one,sevensegments_ten_two,sevensegments_ten_three,sevensegments_ten_four,sevensegments_ten_five,sevensegments_ten_six,sevensegments_ten_seven,sevensegments_ten_eight,sevensegments_ten_nine};


void num_bright(int num){
  if(num >= 100){
    return;
  }else{
    one = num%10;
    ten = int(num/10);
    functions[one]();
    functions_ten[ten]();
  }
}


void setup() {
  // put your setup code here, to run once:
  pinMode(14,"INPUT");
  pinMode(15,"INPUT");
for(int i=0;i<7;i++){
  pinMode(pin_nums[i],OUTPUT);
  digitalWrite(pin_nums[i],LOW);
  pinMode(pin_ten_nums[i],OUTPUT);
  digitalWrite(pin_ten_nums[i],LOW);
}
}




void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(14) == HIGH){
    num += 5;
    delay(200);
  }
  if(digitalRead(15) == HIGH){
    num -= 5;
    delay(200);
  }
  num=max(0,num);
  num=min(95,num);
  num_bright(num);
  /* for(int i=0;i<7;i++){
    digitalWrite(pin_nums[i],HIGH);
    delay(500);
  }
  for(int i=0;i<7;i++){
    digitalWrite(pin_nums[i],LOW);
    delay(500);
  } */
/* sevensegments_ten_zero();
sevensegments_zero();
delay(500);
sevensegments_ten_one();
sevensegments_one();
delay(500);
sevensegments_ten_two();
sevensegments_two();
delay(500);
sevensegments_ten_three();
sevensegments_three();
delay(500);
sevensegments_ten_four();
sevensegments_four();
delay(500);
sevensegments_ten_five();
sevensegments_five();
delay(500);
sevensegments_ten_six();
sevensegments_six();
delay(500);
sevensegments_ten_seven();
sevensegments_seven();
delay(500);
sevensegments_ten_eight();
sevensegments_eight();
delay(500);
sevensegments_ten_nine();
sevensegments_nine();
delay(500);
sevensegments_ten_zero();
sevensegments_zero();
delay(500);
sevensegments_ten_none();
sevensegments_none();
delay(500); */
}
