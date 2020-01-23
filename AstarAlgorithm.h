//
// Created by noa on 20/01/2020.
//

#ifndef MILESTONE_2_ASTARALGORITHM_H
#define MILESTONE_2_ASTARALGORITHM_H

#include <cmath>
#include "MatrixSearcher.h"

class AstarAlgorithm : public MatrixSearcher {
public:
    unordered_map<string, double> search(Searchable<string>* searchable);
    unordered_map<string, double> initHeuristicCost(Matrix* searchable);
    unordered_map<string, double> initCostMap(Matrix* searchable);
    State<string>* findMinOpenList(priority_queue<State<string>*> openList);
    void popFromOpenList(State<string>* current);
    bool isCurrentInOpenList(priority_queue<State<string>*> list, State<string>* current);
};


#endif //MILESTONE_2_ASTARALGORITHM_H
