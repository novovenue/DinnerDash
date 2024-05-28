#include "GameLeaderboard.h"
#include "Display.h"
#include "GameManager.h"

int main() {
    GameLeaderboard leaderboard;
    Display display(&leaderboard);
    GameManager gameManager(&leaderboard);

    gameManager.playerCompletedLevel("Alice", 100);
    gameManager.playerCompletedLevel("Bob", 150);
    gameManager.playerCompletedLevel("Alice", 50);

    gameManager.resetGame();
    gameManager.playerCompletedLevel("Charlie", 200);

    return 0;
}

