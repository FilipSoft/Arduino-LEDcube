/*
3*3*3 LED Cube library header file
This lib. is make in good hope it help you with your 3*3*3 LED cube coding...
If you got any questions please read readme.doc or keywords.doc ,or ask me on GitHub
credits:
maked by FilipSoft
uploaded on GitHub in 2018
*/
#ifndef cube_h
#define cube_h

#include "Arduino.h"

class cube{

public:
cube(int s1, int s2, int s3, int s4, int s5, int s6, int s7, int s8, int s9,int r1,int r2,int r3);
void snake(int r,int time);
void reversesnake(int r,int time);
void pulse(int repeat,int time, int spin, int rpin);
void clock(int a,int b,int c,int time);

private:
int s[9];
int r[3];
};

#endif
