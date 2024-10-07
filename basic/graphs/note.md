# Introduction to Graphics Programming in C
Graphics programming in C allows developers to create visual elements like shapes, lines, images, and text on the screen. It’s commonly used in applications such as video games, simulations, and drawing programs. In C, graphics programming can be achieved using libraries like graphics.h (for Turbo C), SDL, OpenGL, and others.

## Terms Used in Graphics Programming
- Pixel: The smallest unit of a display, which makes up images, shapes, and colors on the screen.
- Resolution: The number of pixels in each dimension that can be displayed. For example, a resolution of 640x480 means 640 pixels in width and 480 pixels in height.
- Color Depth: The number of bits used to represent the color of a pixel.
- Coordinate System: The system used to define the position of objects on the screen, typically with x and y values.
- Rendering: The process of generating the image from models or data into pixels on the screen.
- Frame Buffer: A portion of memory where image data (pixel values) is stored before being displayed on the screen.

## Initialization of Graphics in C
In older compilers like Turbo C, you use the `graphics.h` library to initialize and use graphics. Initialization typically involves setting up the graphics driver and the mode.

### Here’s a basic example of initializing graphics:

```
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
```
### Result of Graphics Operations
When performing operations like drawing a shape, changing colors, or rendering text, the result appears directly on the display. Functions such as `circle(), rectangle(), line(), setcolor()`, and others are used to manipulate pixels.


For example, drawing a circle on the screen:

```
circle(x, y, radius);
This places a circle at the coordinates (x, y) with a given radius.
```

### Common Library Functions in Graphics Programming

- initgraph(): Initializes the graphics system.
- closegraph(): Closes the graphics mode and returns to text mode.
- line(x1, y1, x2, y2): Draws a line between two points (x1, y1) and (x2, y2).
- circle(x, y, radius): Draws a circle centered at (x, y) with the specified radius.
- rectangle(left, top, right, bottom): Draws a rectangle.
- setcolor(color): Sets the color of the shapes drawn next.
- getpixel(x, y): Returns the color of the pixel at (x, y).
- putpixel(x, y, color): Sets the pixel at (x, y) to a specific color.
- outtextxy(x, y, text): Displays text at the coordinates (x, y).

### Results of Graphics Operations
Once you use the functions like circle(), line(), or rectangle(), the changes are immediately visible on the screen. 
The display is updated based on the coordinate system used by the graphics mode.

#### Example of a Simple C Graphics Program
Here's a complete example that draws a few basic shapes:

```
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
}s
```
This program initializes the graphics mode, draws a rectangle with a circle inside it, and then draws a line across the rectangle.