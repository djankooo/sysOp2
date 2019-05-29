#include <ncurses.h>
#include <thread>
#include <mutex>
#include <unistd.h>

using namespace std;

 void create_box(int y, int x, int w, int h) {

   mvhline(y, x + 1, '-', w - 1);
   mvhline(y + h, x + 1, '-', w - 1);
   mvvline(y + 1, x, '|', h - 1);
   mvvline(y + 1, x + w, '|', h - 1);
 }

mutex ball_mutex;

 int main(void) {

   Ball ball = new Ball(&ball_mutex)
   int startx, starty, height, width;
   int x, y;

   initscr();
   cbreak();
   keypad(stdscr, TRUE);
   noecho();


   attron(COLOR_PAIR(1));

   create_box(0, 0, 78, 22);
    refresh();
    getch();
	//mvhline(0,0,'_',80);
	//mvhline(15,0,'_',80);
	//printw("Heloooooooo");
	endwin();
    return 0;
}
