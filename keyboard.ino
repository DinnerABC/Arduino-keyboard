#include<Keyboard.h>
#include<Mouse.h>
#include<stdlib.h>

int button1 = 0;
int button2 = 0;
int button3 = 0;
int button4 = 0;
int button5 = 0;
int button6 = 0;
int button7 = 0;
int button8 = 0;
int button9 = 0;
int button10 = 0;
int button11 = 0;
int button12 = 0;
int button13 = 0;
int button14 = 0;
int button15 = 0;

void setup() {
  Keyboard.begin();
  pinMode(10, OUTPUT);
  //设置引脚为上拉
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);
  pinMode(15, INPUT_PULLUP);
  pinMode(16, INPUT_PULLUP);
  pinMode(18, INPUT_PULLUP);
  pinMode(19, INPUT_PULLUP);
  pinMode(20, INPUT_PULLUP);
  pinMode(21, INPUT_PULLUP);
}

//检测按键状态
int jishu = 0;

void loop() {
  //按键1
  button1 = digitalRead(16);//设置button1为引脚2的状态，
  button2 = digitalRead(2);

  int  vertical = random(8, 15);
  int level = random(10, 30);
  int shijian = random(100, 300);
  int control = 0;

  if (button1 == LOW) {
    do {
      if (button2 = LOW) {
        control = 1;
        Keyboard.press('d');
      }
      else {
        if (jishu == 0) {
          Mouse.move(0, -vertical);
          delay(shijian);
          Mouse.move(+level, 0);
          jishu = 1;
        }
        else {
          Mouse.move(0, +vertical);
          delay(shijian);
          Mouse.move(-level, 0);
          jishu = 0;
        }
        delay(shijian);
        Mouse.click(MOUSE_LEFT);
        //归位
        delay(100);
        if (jishu == 1) {
          Mouse.move(0, +vertical);
          delay(shijian);
          Mouse.move(-level, 0);
        }
        else {
          Mouse.move(0, -vertical);
          delay(shijian);
          Mouse.move(+level, 0);
        }
        delay(3000);
      }

    } while (control == 0);
  }
  else {
    //如果按键1没有按下，就
    digitalWrite(10, LOW);
  }
  delay(3000);
}

//按键2
/*  button2 = digitalRead(2);//设置button4为引脚15的状态，

  if (button2 == LOW) {
  //如果按键4按下，就
  digitalWrite(10, HIGH);
  Keyboard.press('d');
  Keyboard.releaseAll();
  }
  else {
  //如果按键4没有按下，就
  digitalWrite(10, LOW);
  }
  }
  //按键3
  button3 = digitalRead(4);//设置button3为引脚4的状态，

  if (button3 == LOW) {
  //如果按键3按下，就
  digitalWrite(10, HIGH);
  Mouse.move(0, +vertical);
  Keyboard.releaseAll();
  }
  else {
  //如果按键3没有按下，就
  digitalWrite(10, LOW);
  }

  //按键4
  button4 = digitalRead(15);//设置button4为引脚15的状态，

  if (button4 == LOW) {
  //如果按键4按下，就
  digitalWrite(10, HIGH);
  Keyboard.press('d');
  Keyboard.releaseAll();
  }
  else {
  //如果按键4没有按下，就
  digitalWrite(10, LOW);
  }

  //按键5
  button5 = digitalRead(2);//设置button5为引脚16的状态，

  if (button5 == LOW) {
  //如果按键5按下，就
  digitalWrite(10, HIGH);
  Mouse.click(MOUSE_LEFT);
  }
  else {
  //如果按键5没有按下，就
  digitalWrite(10, LOW);
  }

  //按键6
  button6 = digitalRead(5);//设置button6为引脚5的状态，

  if (button6 == LOW) {
  //如果按键6按下，就
  digitalWrite(10, HIGH);
  Keyboard.press('f');
  Keyboard.releaseAll();
  }
  else {
  //如果按键6没有按下，就
  digitalWrite(10, LOW);
  }

  //按键7
  button7 = digitalRead(6);//设置button7为引脚6的状态，

  if (button7 == LOW) {
  //如果按键7按下，就
  digitalWrite(10, HIGH);
  Keyboard.press('g');
  Keyboard.releaseAll();
  }
  else {
  //如果按键7没有按下，就
  digitalWrite(10, LOW);
  }

  //按键8
  button8 = digitalRead(7);//设置button8为引脚7的状态，

  if (button8 == LOW) {
  //如果按键8按下，就
  digitalWrite(10, HIGH);
  Keyboard.press('h');
  Keyboard.releaseAll();
  }
  else {
  //如果按键8没有按下，就
  digitalWrite(10, LOW);
  }

  //按键9
  button9 = digitalRead(18);//设置button9为引脚18的状态，

  if (button9 == LOW) {
  //如果按键9按下，就
  digitalWrite(10, HIGH);
  Keyboard.press('i');
  Keyboard.releaseAll();
  }
  else {
  //如果按键9没有按下，就
  digitalWrite(10, LOW);
  }

  //按键10
  button10 = digitalRead(19);//设置button10为引脚19的状态，

  if (button10 == LOW) {
  //如果按键10按下，就
  digitalWrite(10, HIGH);
  Keyboard.press('j');
  Keyboard.releaseAll();
  }
  else {
  //如果按键10没有按下，就
  digitalWrite(10, LOW);
  }

  //按键11
  button11 = digitalRead(8);//设置button11为引脚8的状态，

  if (button11 == LOW) {
  //如果按键11按下，就
  digitalWrite(10, HIGH);
  Keyboard.press('k');
  Keyboard.releaseAll();
  }
  else {
  //如果按键11没有按下，就
  digitalWrite(10, LOW);
  }

  //按键12
  button12 = digitalRead(9);//设置button12为引脚9的状态，

  if (button12 == LOW) {
  //如果按键12按下，就
  digitalWrite(10, HIGH);
  Keyboard.press('l');
  Keyboard.releaseAll();
  }
  else {
  //如果按键12没有按下，就
  digitalWrite(10, LOW);
  }


  //按键13
  button13 = digitalRead(14);//设置button13为引脚14的状态，

  if (button13 == LOW) {
  //如果按键13按下，就
  digitalWrite(10, HIGH);
  Keyboard.press('m');
  Keyboard.releaseAll();
  }
  else {
  //如果按键13没有按下，就
  digitalWrite(10, LOW);
  }

  //按键14
  button14 = digitalRead(20);//设置button14为引脚20的状态，

  if (button14 == LOW) {
  //如果按键14按下，就
  digitalWrite(10, HIGH);
  Keyboard.press('n');
  Keyboard.releaseAll();
  }
  else {
  //如果按键14没有按下，就
  digitalWrite(10, LOW);
  }

  //按键15
  button15 = digitalRead(21);//设置button15为引脚21的状态，

  if (button15 == LOW) {
  //如果按键15按下，就
  digitalWrite(10, HIGH);
  Keyboard.press('o');
  Keyboard.releaseAll();
  }
  else {
  //如果按键15没有按下，就
  digitalWrite(10, LOW);
  }
*/
//delay(3000);//延时，避免瞎按不停，可以根据按键速度调整延时长短，单位毫秒。
