//
// Created by noa on 19/01/2020.
//

#include "MatrixSearcher.h"

MatrixSearcher::MatrixSearcher() {
    this->evaluatedNodes = 0;
}

State<string>* MatrixSearcher::popOpenList() {
    this->evaluatedNodes++;
    State<string>* state = this->openList.top();
    this->openList.pop();
    return state;
}

int MatrixSearcher::OpenListSize() {
    return this->openList.size();
}

int MatrixSearcher::getNumberOfNodesEvaluated() {
    return this->evaluatedNodes;
}

priority_queue<State<string> *> MatrixSearcher::getOpenList() {
    return this->openList;
}

vector<string> MatrixSearcher::getPath() {
    return this->marked_cells;
}
