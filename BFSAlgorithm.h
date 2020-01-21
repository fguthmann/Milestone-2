//
// Created by noa on 18/01/2020.
//

#ifndef MILESTONE_2_BFSALGORITHM_H
#define MILESTONE_2_BFSALGORITHM_H

#include <list>
#include "MatrixSearcher.h"
using namespace std;

class BFSAlgorithm : public MatrixSearcher {
public:
    virtual vector<string> search(Matrix searchable);
};


#endif //MILESTONE_2_BFSALGORITHM_H
