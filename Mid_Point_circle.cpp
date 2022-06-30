#include<iostream>
#include<graphics.h>

using namespace std;

void plotpoints(int a0,int b0, int a, int b)
{
    putpixel(a0+a, b0+b,7);
    putpixel(a0+a, b0-b,7);
    putpixel(a0-a, b0+b,7);
    putpixel(a0-a, b0-b,7);
    putpixel(a0+b, b0+a,7);
    putpixel(a0+b, b0-a,7);
    putpixel(a0-b, b0+a,7);
    putpixel(a0-b, b0-a,7);
}
 void midpoint (int a0, int b0, int r)
 {
     int a=0, b=r;
     int f=1-r;

     plotpoints(a0,b0,a,b);

     while (a<b)
     {
         a++;
         if(f<0)
         {
             f= f+(2*a)+1;
         }
          else
          {
              b--;
              f= f+(2*(a-b))+1;
          }

          plotpoints(a0,b0,a,b);
     }
 }

 int main()
 {
    int gd=DETECT, gm, a,b,r;
    initgraph (&gd, &gm, "");
    initwindow(800,600, "mid point circle");

  cout<<"Enter the value of center co-ordinate:";
  cin>>a>>b;
  
  cout<<"Enter  radius of the circle:";
  cin>>r;

  midpoint(a,b,r);
  getch();

  return 0;

 }
    
 
 
 
 
 
