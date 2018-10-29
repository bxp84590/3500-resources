/* Compile with

gcc curses_demo.c -lcurses

or

gcc curses_demo.c -lncurses

*/

#include <curses.h>

int main(int argc, char *argv[])
{
    initscr();
    
    clear();
    move(10, 20);
    addstr("Hello world");
    move(LINES-1, 0);
    
    
    refresh();
    getch();
    
    endwin();
    
    return 0;
}

