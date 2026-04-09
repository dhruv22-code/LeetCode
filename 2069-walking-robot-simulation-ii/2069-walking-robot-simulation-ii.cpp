class Robot {
public:
    int x = 0, y = 0;
    int width, height;
    int dir; 

    Robot(int width, int height) {
        this->width = width;
        this->height = height;
        dir = 0; 
    }

    void step(int num) {
        int per = 2 * (width + height) - 4;
        num %= per;

        if (num == 0 && x == 0 && y == 0) {
            dir = 3;
            return;
        }

        if (num == 0) return;

        if (dir == 0) { // East
            int canMove = width - 1 - x;

            if (num <= canMove) {
                x += num;
            } else {
                x = width - 1;
                dir = 1;
                step(num - canMove);
            }
        }
        else if (dir == 1) { // North
            int canMove = height - 1 - y;

            if (num <= canMove) {
                y += num;
            } else {
                y = height - 1;
                dir = 2;
                step(num - canMove);
            }
        }
        else if (dir == 2) { // West
            int canMove = x;

            if (num <= canMove) {
                x -= num;
            } else {
                x = 0;
                dir = 3;
                step(num - canMove);
            }
        }
        else { // South
            int canMove = y;

            if (num <= canMove) {
                y -= num;
            } else {
                y = 0;
                dir = 0;
                step(num - canMove);
            }
        }
    }

    vector<int> getPos() {
        return {x, y};
    }

    string getDir() {
        if (dir == 0) return "East";
        if (dir == 1) return "North";
        if (dir == 2) return "West";
        return "South";
    }
};