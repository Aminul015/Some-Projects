#include <iostream>
#include <graphics.h>
 


 
// Wings

void handDown(int i)
{

    line(200 + i, 355, 190 + i, 385);

    line(85 + i, 155, 115 + i, 195);

    arc(90 + i, 130, 228, 292, 70);
}
 

void handUp(int i)
{

    line(85 + i, 155, 125 + i, 115);

    line(85 + i, 155, 55 + i, 118);

    arc(90 + i, 177, 60, 122, 70);
}
 
// Driver code

int main()
{

    int gd = DETECT, gm;
 

    // Path of the BGI folder

    initgraph(&gd, &gm, " ");

    int i = 0;
 

    for (i = 0; i < 400; i++) {

        // Body

        circle(150 + i, 150, 20);

        arc(90 + i, 190, 50, 145, 60);

        arc(87 + i, 117, 220, 320, 60);
 

        // Beak

        line(170 + i, 147, 180 + i, 153);

        line(180 + i, 153, 170 + i, 156);
 

        // Eye

        circle(162 + i, 150, 2);
 

        // Tail

        line(10 + i, 155, 40 + i, 155);

        line(10 + i, 145, 40 + i, 155);

        line(10 + i, 165, 40 + i, 155);
 

        // Move hands

        if (i % 2 == 0)

            handUp(i);

        else

            handDown(i);
 

        // Stop the screen for 10 secs

        delay(10);
 

        // Clear the screen

    }

     
 

    getch();
 

    // Close the graph

    closegraph();
}
