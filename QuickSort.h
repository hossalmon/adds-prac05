#ifndef QUICKSORT_H
#define QUICKSORT_H

#include "Sort.h"
#include "vector"

class QuickSort : public Sort {
    private:
        // in-place quicksort on the half open range [lo, hi]
        void quickSort(std::vector<int>& a, int lo, int hi);

        // partitions the range [lo, hi] around a chosen pivot
        // returns the final index of the point after partition
        int partition(std::vector<int>& a, int lo, int hi);

        // if current subarray length >= 3, choose 3rd element
        // in subarray as the pivot. otherwise use lo
        int selectPivotIndex(int lo, int hi) const;

    public:
        // overriding inherited sort function
        std::vector<int> sort(std::vector<int> list) override;
};

#endif