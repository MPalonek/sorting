#include "sorting.h"
#include <iostream>

void merge_sort_rec(std::vector<int>& D)
{
    // Step 1. Split array
    if (D.size() > 1)
    {
        // find middle
        int middle = D.size() / 2; // result of the / operator is the algebraic quotient with any fractional part discarded

        std::vector<int> L, R;
        for (int& elem : D)
        {
            auto i = &elem - &D[0]; // current index (works only on contiguously laid out sequences)
            if (i < middle)
            {
                L.push_back(elem);
            }
            else
            {
                R.push_back(elem);
            }
        }

        // sort left
        merge_sort_rec(L);
        // sort right
        merge_sort_rec(R);

        int i = 0;
        int j = 0;
        int k = 0;

        // merge sorted [:i] and [j:]
        // compare two arrays ("2 fingers")
        while (i < L.size() && j < R.size())
        {
            if (L[i] <= R[j])
            {
                D[k] = L[i];
                i++;
            }
            else
            {
                D[k] = R[j];
                j++;
            }
            k++;
        }

        // insert what remained in one of the arrays
        while (i < L.size())
        {
            D[k] = L[i];
            i++;
            k++;
        }
        while (j < R.size())
        {
            D[k] = R[j];
            j++;
            k++;
        }
    }
}

void selection_sort_rec(std::vector<int>& D, int k)
{
    if (k < 1)
    {
        return;
    }

    // find the biggest number in array
    int biggest_num = 0;
    int index = 0;
    for (int i = 0; i <= k; i++)
    {
        if (D[i] > biggest_num)
        {
            biggest_num = D[i];
            index = i;
        }
    }

    // swap it with number at the "end" of array
    D[index] = D[k];
    D[k] = biggest_num;
    k--;
    selection_sort_rec(D, k);
}

/*
int main()
{
    std::vector<int> D = { 4, 3, 8, 1, 19, 2 };
    selection_sort_rec(D, D.size() - 1);
    merge_sort_rec(D);

    for (auto elem : D)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
*/