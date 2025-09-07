#include "BubbleSort.h"
#include <utility>

std::vector<int> BubbleSort::sort(std::vector<int> list) {
    int n = list.size();
    bool swapped;

    // Bubble sort
    for (int i = 0; i < n-1; i++) {
        swapped = false;
        for (int j = 0; j < n-i-1; j++) {
            if (list[j] > list[j+1]) {
                std::swap(list[j], list[j+1]);
                swapped=true;
            }
        }
        // Optimisation - stop early if no swaps in this pass
        if (!swapped) break;
    }

    return list;
}