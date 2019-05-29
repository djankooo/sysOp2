#include "lib.h"

class Ball {
    public:
        Ball();
        ~Ball();
        int getX();
        int getY();

        void destroy();
        void check_collisions();
        void clear_ball();
        void draw_ball();
        void move_ball(std::mutex* m_lock, std::condition_variable* cv);
        void run();
        bool ball_lost;
        int hit = 0;
        int startSpeed = 100000;
        int posX;
        int posY;
        int dX;
        int dY;
        bool running, blocked = false;

    private:

};
