#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    // Draw a rectangle
    rectangle(150, 100, 400, 250);

    // Draw a circle inside the rectangle
    circle(275, 175, 50);

    // Draw a line across the rectangle
    line(150, 175, 400, 175);

    getch();
    closegraph();
    return 0;
}
