#include<iostream>
#include<graphics.h>  
 
    int main()  
    {  
        int gd=DETECT,gm;  
        initgraph (&gd,&gm," ");  
          
         
        line(50,40,190,40);  
           
        rectangle(125,115,215,165);  
          
        arc(120,200,180,0,30);  
          
        circle(120,270,30);  
          
        ellipse(120,350,0,360,30,20);
		  
        getch();  
        closegraph();
    }  
