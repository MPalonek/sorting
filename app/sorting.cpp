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

void quick_sort_rec(std::vector<int>& D, int start, int end)
{
    if (start < end)
    {
        // find pivot (could be elem at any index - lets try with last one)
        int pivot = D[end]; // undefined behavior if vector is empty
        int sec_ptr = end;
        bool found_bigger = false;

        // Rearrange the array (partition)
        // pivot in the "middle"
        // on the left elements are smaller than pivot
        // on the right elements are bigger than pivot
        for (int i = start; i < end; i++)
        {
            if (!found_bigger && pivot < D[i])
            {
                sec_ptr = i; // get current index
                found_bigger = true;
            }
            else if (found_bigger && pivot > D[i])
            {
                int elem = D[i];
                D[i] = D[sec_ptr];
                D[sec_ptr] = elem;
                sec_ptr++;
            }
        }
        if (found_bigger)
        {
            D[end] = D[sec_ptr];
            D[sec_ptr] = pivot;
        }
        
        /*
        // Divide into sub-arrays and work on them recursively
        std::vector<int> L, R;
        for (auto& elem : D)
        {
            if (elem < pivot)
            {
                L.push_back(elem);
            }
            else if (elem > pivot)
            {
                R.push_back(elem);
            }
        }
        
        for (auto elem : D)
        {
            std::cout << elem << " ";
        }
        std::cout <<"\n---"<< std::endl;
        */
        quick_sort_rec(D, start, sec_ptr - 1);
        quick_sort_rec(D, sec_ptr +1, end);
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