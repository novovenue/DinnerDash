#ifndef GAMELEADERBOARD_H
#define GAMELEADERBOARD_H

#include <map>
#include <string>
#include <iostream>
#include "Subject.h"

class GameLeaderboard : public Subject {
public:
    void addScore(const std::string& player, int score) {
        scores[player] += score;
        notifyObservers();
    }

    void resetScores() {
        scores.clear();
        notifyObservers();
    }

    void printLeaderboard() const {
        std::cout << "Leaderboard:\n";
        for (const auto& pair : scores) {
            std::cout << pair.first << ": " << pair.second << " points\n";
        }
    }

    const std::map<std::string, int>& getScores() const {
        return scores;
    }

private:
    std::map<std::string, int> scores;
};

#endif
