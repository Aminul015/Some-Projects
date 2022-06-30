#include<iostream>
#include<graphics.h>

int main()
{
  int gd=DETECT,gm;
  initgraph(&gd, &gm, " ");
  
    setbkcolor(BLUE);
    setcolor(12);
  
   circle(50,50,40);
   circle(112,52,42);
   
   line(22,82,82,140);
   line(82,140,138,80);
   
   floodfill(50,50,12);
   floodfill(112,52,12);
    floodfill(80,50,12);
     floodfill(80,102,12);
     
     delay(5000);
     closegraph();
}
