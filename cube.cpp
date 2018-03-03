/*
3*3*3 LED Cube library cpp file
This library is make in good hope it help you with your 3*3*3 LED cube coding...
If you got any questions please read readme.doc or keywords.doc ,or ask me on GitHub
credits:
maked by FilipSoft
uploaded on GitHub in 2018
*/

#include "cube.h"
#include "Arduino.h"

// constructor
cube::cube(int s1, int s2, int s3, int s4, int s5, int s6, int s7, int s8, int s9,int r1,int r2,int r3){
s[0] = s1;
s[1] = s2;
s[2] = s3;
s[3] = s4;
s[4] = s5;
s[5] = s6;
s[6] = s7;
s[7] = s8;
s[8] = s9;

r[0] = r1;
r[1] = r2;
r[2] = r3;

for(int i = 0;i<9;i++){
pinMode(s[i],OUTPUT);
}

for(int i = 0;i<9;i++){
pinMode(r[i],OUTPUT);
}
}

// snake
void cube::snake(int r,int time){

if(r == 0){
digitalWrite(A1,HIGH);
digitalWrite(A2,HIGH);
}

if(r  == 1){
digitalWrite(A0,HIGH);
digitalWrite(A2,HIGH);
}

if(r  == 2){
digitalWrite(A0,HIGH);
digitalWrite(A1,HIGH);
}

for(int i = 0;i<3;i++){
digitalWrite(s[i],HIGH);
delay(time);
digitalWrite(s[i],LOW);
}


for(int i = 5;i>2;i--){
digitalWrite(s[i],HIGH);
delay(time);
digitalWrite(s[i],LOW);
}

for(int i = 6;i<9;i++){
digitalWrite(s[i],HIGH);
delay(time);
digitalWrite(s[i],LOW);
}


digitalWrite(A0,LOW);
digitalWrite(A1,LOW);
digitalWrite(A2,LOW);
}

// reversesnake
void cube::reversesnake(int riadok,int time){

if(riadok == 0){
digitalWrite(A1,HIGH);
digitalWrite(A2,HIGH);
}

if(riadok == 1){
digitalWrite(A0,HIGH);
digitalWrite(A2,HIGH);
}

if(riadok == 2){
digitalWrite(A0,HIGH);
digitalWrite(A1,HIGH);
}

for(int i = 8;i>5;i--){
digitalWrite(s[i],HIGH);
delay(time);
digitalWrite(s[i],LOW);
}


for(int i = 3;i<6;i++){
digitalWrite(s[i],HIGH);
delay(time);
digitalWrite(s[i],LOW);
}

for(int i = 2;i>=0;i--){
digitalWrite(s[i],HIGH);
delay(time);
digitalWrite(s[i],LOW);
}


digitalWrite(A0,LOW);
digitalWrite(A1,LOW);
digitalWrite(A2,LOW);
}

//pulse
void cube::pulse(int repeat,int time, int spin, int rpin){

for(int i = 0;i<repeat;i++){

for(int i = 0;i<9;i++){
digitalWrite(s[i],HIGH);
}

digitalWrite(s[spin],LOW);

for(int i = 0;i<time/2;i++){
digitalWrite(s[spin],HIGH);
digitalWrite(r[rpin],HIGH);
delay(1);
digitalWrite(s[spin],LOW);
digitalWrite(r[rpin],LOW);
delay(1);
}

for(int i = 0;i<9;i++){
digitalWrite(s[i],LOW);
}

digitalWrite(s[spin],HIGH);
digitalWrite(r[2],HIGH);
digitalWrite(r[0],HIGH);


delay(time);

for(int i = 0;i<3;i++){
digitalWrite(r[i],LOW);
}

}


//end pulse
for(int i = 0;i<9;i++){
digitalWrite(s[i],LOW);
}

for(int i = 0;i<3;i++){
digitalWrite(r[i],LOW);
}
}

//clock
void cube::clock(int a,int b,int c,int time){

for(int i = 0;i < time / 3;i++){

digitalWrite(A1,HIGH);
digitalWrite(s[a],HIGH);
digitalWrite(A2,HIGH);
delay(1);
digitalWrite(A1,LOW);
digitalWrite(s[a],LOW);
digitalWrite(A2,LOW);

digitalWrite(A0,HIGH);
digitalWrite(s[b],HIGH);
digitalWrite(A2,HIGH);
delay(1);
digitalWrite(A0,LOW);
digitalWrite(s[b],LOW);
digitalWrite(A2,LOW);

digitalWrite(A1,HIGH);
digitalWrite(s[c],HIGH);
digitalWrite(A0,HIGH);
delay(1);
digitalWrite(A1,LOW);
digitalWrite(s[c],LOW);
digitalWrite(A0,LOW);
}

digitalWrite(s[a],HIGH);
digitalWrite(s[b],HIGH);
digitalWrite(s[c],HIGH);
digitalWrite(A0,HIGH);
digitalWrite(A2,HIGH);

delay(time);

for(int i = 0;i < time / 3;i++){

digitalWrite(A0,HIGH);
digitalWrite(s[a],HIGH);
digitalWrite(A1,HIGH);
delay(1);
digitalWrite(A0,LOW);
digitalWrite(s[a],LOW);
digitalWrite(A1,LOW);

digitalWrite(A0,HIGH);
digitalWrite(s[b],HIGH);
digitalWrite(A2,HIGH);
delay(1);
digitalWrite(A0,LOW);
digitalWrite(s[b],LOW);
digitalWrite(A2,LOW);

digitalWrite(A1,HIGH);
digitalWrite(s[c],HIGH);
digitalWrite(A2,HIGH);
delay(1);
digitalWrite(A1,LOW);
digitalWrite(s[c],LOW);
digitalWrite(A2,LOW);
}

digitalWrite(s[a],LOW);
digitalWrite(s[b],HIGH);
digitalWrite(s[c],LOW);
digitalWrite(A0,LOW);
digitalWrite(A2,LOW);
digitalWrite(A1,LOW);

delay(time);

digitalWrite(s[a],LOW);
digitalWrite(s[b],LOW);
digitalWrite(s[c],LOW);
digitalWrite(A0,LOW);
digitalWrite(A2,LOW);
digitalWrite(A1,LOW);

for(int i = 0;i < time / 3;i++){

digitalWrite(A1,HIGH);
digitalWrite(s[a],HIGH);
digitalWrite(A2,HIGH);
delay(1);
digitalWrite(A1,LOW);
digitalWrite(s[a],LOW);
digitalWrite(A2,LOW);

digitalWrite(A0,HIGH);
digitalWrite(s[b],HIGH);
digitalWrite(A2,HIGH);
delay(1);
digitalWrite(A0,LOW);
digitalWrite(s[b],LOW);
digitalWrite(A2,LOW);

digitalWrite(A1,HIGH);
digitalWrite(s[c],HIGH);
digitalWrite(A0,HIGH);
delay(1);
digitalWrite(A1,LOW);
digitalWrite(s[c],LOW);
digitalWrite(A0,LOW);
}
digitalWrite(s[a],LOW);
digitalWrite(s[b],LOW);
digitalWrite(s[c],LOW);
digitalWrite(A0,LOW);
digitalWrite(A2,LOW);
digitalWrite(A1,LOW);
}
