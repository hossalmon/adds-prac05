#include <iostream>
#include <sstream>
#include <vector>
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

int main() {
    std::string line;
    std::getline(std::cin, line);

    std::istringstream iss(line);
    std::vector<int> numbers;
    int value;
    while (iss >> value) {
        numbers.push_back(value);
    }

    // sort using QuickSort
    QuickSort qs;
    std::vector<int> sorted = qs.sort(numbers);

    // search for 1
    RecursiveBinarySearch rbs;
    bool found = rbs.search(sorted, 1);

    // output is true/false followed by sorted list
    std::cout << (found ? "true" : "false");
    for (int num : sorted) {
        std::cout << " " << num;
    }
    std::cout << std::endl;

    return 0;
}
