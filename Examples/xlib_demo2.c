/* Compile with

gcc xlib_demo1.c -L/usr/X11R6/lib -lX11

or something similar (may vary by system)

*/

#include <stdio.h>
#include <stdlib.h>
#include <X11/Xlib.h>

int main(int argc, char *argv[])
{
    Display *Monitor;
    Window DrawWindow;
    GC WindowGC;
    int x1;
    int y1;
    int x2;
    int y2;
    
    
    Monitor = XOpenDisplay(NULL);
    
    if (Monitor == NULL)
    {
        printf("Unable to open graphics display\n");
        
        exit(0);
    }
    
    DrawWindow = XCreateSimpleWindow(Monitor, RootWindow(Monitor, 0),
        10, 10,
        1024, 768,
        2,
        BlackPixel(Monitor, 0),
        WhitePixel(Monitor, 0)
    );
    
    WindowGC = XCreateGC(Monitor, DrawWindow, 0, NULL);
    XMapWindow(Monitor, DrawWindow);
    XFlush(Monitor);
    
    while (1)
    {
        printf("Line coordinates? ");
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        
        if (x1 == -1)
        {
            break;
        }
        
        XDrawLine(Monitor, DrawWindow, WindowGC, x1, y1, x2, y2);
        XFlush(Monitor);
    }
    
    XCloseDisplay(Monitor);
    
    return 0;
}

