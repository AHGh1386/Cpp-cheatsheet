# C++ (starter)

<img src="https://global-prog.com/wp-content/uploads/2019/07/cpp-e1572092855695.jpg.webp"/>

C++ is the first programming language that I have learned.

My Editor for C++ is Code::Blocks but you can use visual studio code as well.
If you want to use Visual studio, you should first download some extensions for C++.

In this repository I wanna put some simple C++ codes.

It's a good language to start studying.

### Give star⭐ if it was useful 😉

```cpp
#include <iostream>
#include <conio.h>

using namespace std;

const int FIELD_WIDTH = 11;
const int FIELD_HEIGHT = 11;

char field[FIELD_HEIGHT][FIELD_WIDTH];
int ballX, ballY;
int playerX, playerY;
int score;

void InitializeField() {
    for (int i = 0; i < FIELD_HEIGHT; i++) {
        for (int j = 0; j < FIELD_WIDTH; j++) {
            field[i][j] = ' ';
        }
    }

    for (int i = 0; i < FIELD_HEIGHT; i++) {
        field[i][0] = '|';
        field[i][FIELD_WIDTH - 1] = '|';
        field[5][i] = '-';
    }

    ballX = 5;
    ballY = 5;
    playerX = 1;
    playerY = 5;
    score = 0;
}

void DrawField() {
    system("cls");
    for (int i = 0; i < FIELD_HEIGHT; i++) {
        for (int j = 0; j < FIELD_WIDTH; j++) {
            cout << field[i][j];
        }
        cout << endl;
    }
    cout << "Score: " << score << endl;
}

void MovePlayer(char direction) {
    field[playerX][playerY] = ' ';
    switch (direction) {
        case 'w':
            playerX--;
            break;
        case 's':
            playerX++;
            break;
        case 'a':
            playerY--;
            break;
        case 'd':
            playerY++;
            break;
    }
    field[playerX][playerY] = 'P';
}

void MoveBall() {
    int dx = (playerX - ballX) > 0 ? 1 : -1;
    int dy = (playerY - ballY) > 0 ? 1 : -1;

    if (ballX + dx >= 1 && ballX + dx <= FIELD_HEIGHT - 2) {
        ballX += dx;
    }

    if (ballY + dy >= 1 && ballY + dy <= FIELD_WIDTH - 2) {
        ballY += dy;
    }

    if (ballX == playerX && ballY == playerY) {
        score++;
        ballX = 5;
        ballY = 5;
    }

    field[ballX][ballY] = 'B';
}

void PlayGame() {
    InitializeField();
    DrawField();

    char key;

    while (true) {
        if (_kbhit()) {
            key = _getch();
            switch (key) {
                case 'w':
                case 's':
                case 'a':
                case 'd':
                    MovePlayer(key);
                    break;
                case 'q':
                    return;
            }
        }

        MoveBall();
        DrawField();
        Sleep(100);
    }
}

int main() {
    PlayGame();
    return 0;
}
```
