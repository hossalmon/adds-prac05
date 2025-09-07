#include "RecursiveBinarySearch.h"

bool RecursiveBinarySearch::search(std::vector<int> list, int item) {
    if (list.empty()) return false;
    return searchHelper(list, item, 0, static_cast<int>(list.size()) - 1);
}

bool RecursiveBinarySearch::searchHelper(const std::vector<int>& a, int item, int lo, int hi) {
    if (lo > hi) return false;

    int mid = lo + (hi - lo) / 2;

    if (a[mid] == item) {
        return true;
    } else if (item < a[mid]) {
        return searchHelper(a, item, lo, mid - 1);
    } else {
        return searchHelper(a, item, mid + 1, hi);
    }
}
