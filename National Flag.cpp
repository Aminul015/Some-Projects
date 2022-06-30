#include<iostream>
#include<graphics.h>

int main()
{ 
	int gd=DETECT,gm;
	
	initwindow(640,480,"Flag");
	
	setcolor(WHITE);
	rectangle(10,5,310,190);
	setfillstyle(1,WHITE);
	floodfill(6,6,WHITE);
	
	setcolor(GREEN);
	rectangle(10,5,310,190);
	setfillstyle(1,GREEN);
	floodfill(50,50,GREEN); 
	
	setcolor(RED);
    circle(180,100,70);
	setfillstyle(1,RED);
	floodfill(180,100,RED); 
	
	system("pause");	
} 


