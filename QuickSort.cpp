#include "QuickSort.h"
#include <utility>

std::vector<int> QuickSort::sort(std::vector<int> list) {
    if (!list.empty()) {
        quickSort(list, 0, static_cast<int>(list.size()));
    }
    return list;
}

void QuickSort::quickSort(std::vector<int>& a, int lo, int hi) {
    // work on half-open interval [lo, hi)
    if (hi-lo <= 1) return;
    int p = partition(a, lo, hi);   // final pivot position
    quickSort(a, lo, p);            // left half - [lo, p)
    quickSort(a, p+1, hi);          // right half - (p, hi) --> [p+1, hi)
}

int QuickSort::partition(std::vector<int>& a, int lo, int hi) {
    // choose pivot index
    int pivotIdx = selectPivotIndex(lo, hi);
    int pivotVal = a[pivotIdx];

    // move pivot to the end
    std::swap(a[pivotIdx], a[hi-1]);
    int store = lo;

    // partition elements < pivot to the front
    for (int i = lo; i < hi-1; ++i) {
        if (a[i] < pivotVal) {
            std::swap(a[i], a[store]);
            ++store;
        }
    }

    // place pivot in its final location
    std::swap(a[store], a[hi - 1]);
    return store;
}

int QuickSort::selectPivotIndex(int lo, int hi) const {
    // subarray length in [lo, hi)
    int len = hi - lo;
    if (len >= 3) {
        return lo + 2; // third element in the current subarray
    }
    return lo; // otherwise use the first element
}