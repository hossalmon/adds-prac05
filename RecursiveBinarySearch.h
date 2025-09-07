#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H

#include <vector>

class RecursiveBinarySearch {
    private:
        // helper does recursion on an inclusive range [lo, hi]
        bool searchHelper(const std::vector<int>& a, int item, int lo, int hi);

    public:
        bool search(std::vector<int> list, int item);
};

#endif