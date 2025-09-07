#ifndef SORT_H
#define SORT_H

#include <vector>

class Sort {
    public:
        // Sorts given list in ascending order and returns the sorted copy
        virtual std::vector<int> sort(std::vector<int> list) = 0;
        virtual ~Sort() = default;  // destructor
};

#endif