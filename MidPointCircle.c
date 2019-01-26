#include<graphics.h> 
#include<stdio.h> 

void main() 
{ 
int gd = DETECT,gm; 
initgraph(&gd,&gm ,NULL); 
circle(100,100,50); 
while(!kbhit()); 
closegraph(); 
}