#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H

#include <string>
#include "GameLeaderboard.h"

class GameManager {
public:
    GameManager(GameLeaderboard* leaderboard) : leaderboard(leaderboard) {}

    void playerCompletedLevel(const std::string& player, int score) {
        leaderboard->addScore(player, score);
    }

    void resetGame() {
        leaderboard->resetScores();
    }

private:
    GameLeaderboard* leaderboard;
};

#endif
