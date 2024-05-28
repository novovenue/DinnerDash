#ifndef DISPLAY_H
#define DISPLAY_H

#include <iostream>
#include "Observer.h"
#include "GameLeaderboard.h"

class Display : public Observer {
public:
    Display(GameLeaderboard* leaderboard) : leaderboard(leaderboard) {
        leaderboard->addObserver(this);
    }

    void update() override {
        std::cout << "Leaderboard updated:\n";
        leaderboard->printLeaderboard();
    }

private:
    GameLeaderboard* leaderboard;
};

#endif
