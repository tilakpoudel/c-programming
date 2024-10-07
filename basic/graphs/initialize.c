#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    // Check for errors
    if (graphresult() != 0) {
        printf("Graphics initialization failed!");
        return 1;
    }

    // Drawing a circle
    circle(250, 200, 50);

    getch();
    closegraph();
    
    return 0;
}
