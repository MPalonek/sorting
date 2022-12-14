#ifndef SORTING_H
#define SORTING_H

#include <vector>

void merge_sort_rec(std::vector<int>& D);
void quick_sort_rec(std::vector<int>& D, int start, int end);
void selection_sort_rec(std::vector<int>& D, int k);

#endif /* SORTING_H */