#include<graphics.h> 
#include<stdio.h> 

void main() 
{ 
int gd = DETECT,gm; 
initgraph(&gd,&gm ,NULL); 
ellipse(200,200,0,360,50,30); 
line(250,200,280,170); 
line(280,170,280,230); 
line(280,230,250,200); 
circle(160,190,3); 
while(!kbhit()); 
closegraph(); 
}