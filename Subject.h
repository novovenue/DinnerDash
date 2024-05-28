#ifndef SUBJECT_H
#define SUBJECT_H

#include <vector>
#include <algorithm>
#include "Observer.h"

class Subject {
public:
    virtual void addObserver(Observer* observer) {
        observers.push_back(observer);
    }

    virtual void removeObserver(Observer* observer) {
        observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
    }

    virtual void notifyObservers() {
        for (Observer* observer : observers) {
            observer->update();
        }
    }

protected:
    std::vector<Observer*> observers;
};

#endif
