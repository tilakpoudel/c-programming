#include <graphics.h>
#include <conio.h>
#include <stdio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    // Set Background and Foreground color
    setbkcolor(WHITE);   // Set background color
    setcolor(BLUE);      // Set foreground (drawing) color

    // Clear the screen to apply the background color
    cleardevice();

    // 1. Plotting a Line and Getting Points
    line(100, 100, 300, 100);  // Draw a horizontal line
    int x = 150, y = 100;      // Point on the line
    putpixel(x, y, RED);       // Plot a point in red

    // 2. Drawing a Circle
    setcolor(RED);             // Change drawing color to red
    circle(200, 200, 50);      // Draw a circle with radius 50

    // 3. Drawing an Ellipse
    setcolor(GREEN);           // Change drawing color to green
    ellipse(400, 200, 0, 360, 50, 25);  // Draw an ellipse

    // 4. Drawing a Circular Arc
    setcolor(MAGENTA);         // Change drawing color to magenta
    arc(300, 300, 0, 180, 50); // Draw an arc from 0° to 180°

    // 5. Drawing a Rectangle
    setcolor(BLUE);
    rectangle(50, 50, 150, 100); // Draw a rectangle

    // 6. Drawing and Filling a Polygon
    setcolor(YELLOW);
    int points[] = {320, 150, 400, 50, 480, 150, 320, 150}; // Polygon points
    drawpoly(4, points);       // Draw the polygon

    // Filling the polygon
    setfillstyle(SOLID_FILL, CYAN);   // Set fill pattern and color
    fillpoly(4, points);        // Fill the polygon with cyan

    // 7. Displaying Text in Graphics Mode
    setcolor(BLACK);
    outtextxy(200, 400, "Graphics Programming in C");

    getch();
    closegraph();
    return 0;
}
