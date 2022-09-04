#include <gtest/gtest.h> // googletest header file

#include "../app/sorting.cpp"
#include <algorithm> // for std::sort
#include <fstream>

// --------------------------
// Merge Sort O(n logn)
// --------------------------

TEST(mergeSortSuite, mergeSort1)
{
	std::vector<int> A = { 1 };
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	merge_sort_rec(A);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::cout << "Work time: " << work_time << std::endl;
	EXPECT_EQ(A, B);
}

TEST(mergeSortSuite, mergeSort2)
{
	std::vector<int> A = { 2, 1 };
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	merge_sort_rec(A);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::cout << "Work time: " << work_time << std::endl;
	EXPECT_EQ(A, B);
}

TEST(mergeSortSuite, mergeSort10)
{
	std::vector<int> A = { 3, 8, 9, 1, 12, 10, 13, 7, 18, 17 };
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	merge_sort_rec(A);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::cout << "Work time: " << work_time << std::endl;
	EXPECT_EQ(A, B);
}

TEST(mergeSortSuite, mergeSort100)
{
	std::ifstream is("../../../../test/100.txt");
	std::istream_iterator<int> start(is), end;
	std::vector<int> A(start, end);
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	merge_sort_rec(A);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::cout << "Work time: " << work_time << std::endl;
	EXPECT_EQ(A.size(), 100);
	EXPECT_EQ(A, B);
}

TEST(mergeSortSuite, mergeSort1k)
{
	std::ifstream is("../../../../test/1k.txt");
	std::istream_iterator<int> start(is), end;
	std::vector<int> A(start, end);
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	merge_sort_rec(A);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::cout << "Work time: " << work_time << std::endl;
	EXPECT_EQ(A.size(), 1000);
	EXPECT_EQ(A, B);
}

TEST(mergeSortSuite, mergeSort1kReversed)
{
	std::ifstream is("../../../../test/1k_reversed.txt");
	std::istream_iterator<int> start(is), end;
	std::vector<int> A(start, end);
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	merge_sort_rec(A);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::cout << "Work time: " << work_time << std::endl;
	EXPECT_EQ(A.size(), 1000);
	EXPECT_EQ(A, B);
}

TEST(mergeSortSuite, mergeSort5k)
{
	std::ifstream is("../../../../test/5k.txt");
	std::istream_iterator<int> start(is), end;
	std::vector<int> A(start, end);
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	merge_sort_rec(A);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::cout << "Work time: " << work_time << std::endl;
	EXPECT_EQ(A.size(), 5000);
	EXPECT_EQ(A, B);
}

TEST(mergeSortSuite, mergeSort10k)
{
	std::ifstream is("../../../../test/10k.txt");
	std::istream_iterator<int> start(is), end;
	std::vector<int> A(start, end);
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	merge_sort_rec(A);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::cout << "Work time: " << work_time << std::endl;
	EXPECT_EQ(A.size(), 10000);
	EXPECT_EQ(A, B);
}

// --------------------------
// Selection Sort (n^2)
// --------------------------

TEST(selectionSortSuite, selectionSort1)
{
	std::vector<int> A = { 1 };
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	selection_sort_rec(A, A.size()-1);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::cout << "Work time: " << work_time << std::endl;
	EXPECT_EQ(A, B);
}

TEST(selectionSortSuite, selectionSort2)
{
	std::vector<int> A = { 2, 1 };
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	selection_sort_rec(A, A.size() - 1);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::cout << "Work time: " << work_time << std::endl;
	EXPECT_EQ(A, B);
}

TEST(selectionSortSuite, selectionSort10)
{
	std::vector<int> A = { 3, 8, 9, 1, 12, 10, 13, 7, 18, 17 };
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	selection_sort_rec(A, A.size() - 1);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::cout << "Work time: " << work_time << std::endl;
	EXPECT_EQ(A, B);
}

TEST(selectionSortSuite, selectionSort100)
{
	std::ifstream is("../../../../test/100.txt");
	std::istream_iterator<int> start(is), end;
	std::vector<int> A(start, end);
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	selection_sort_rec(A, A.size() - 1);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::cout << "Work time: " << work_time << std::endl;
	EXPECT_EQ(A.size(), 100);
	EXPECT_EQ(A, B);
}

TEST(selectionSortSuite, selectionSort1k)
{
	std::ifstream is("../../../../test/1k.txt");
	std::istream_iterator<int> start(is), end;
	std::vector<int> A(start, end);
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	selection_sort_rec(A, A.size() - 1);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::cout << "Work time: " << work_time << std::endl;
	EXPECT_EQ(A.size(), 1000);
	EXPECT_EQ(A, B);
}

TEST(selectionSortSuite, selectionSort1kReversed)
{
	std::ifstream is("../../../../test/1k_reversed.txt");
	std::istream_iterator<int> start(is), end;
	std::vector<int> A(start, end);
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	selection_sort_rec(A, A.size() - 1);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::cout << "Work time: " << work_time << std::endl;
	EXPECT_EQ(A.size(), 1000);
	EXPECT_EQ(A, B);
}

TEST(selectionSortSuite, selectionSort5k)
{
	std::ifstream is("../../../../test/5k.txt");
	std::istream_iterator<int> start(is), end;
	std::vector<int> A(start, end);
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	selection_sort_rec(A, A.size() - 1);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::cout << "Work time: " << work_time << std::endl;
	EXPECT_EQ(A.size(), 5000);
	EXPECT_EQ(A, B);
}

TEST(selectionSortSuite, selectionSort10k)
{
	std::ifstream is("../../../../test/10k.txt");
	std::istream_iterator<int> start(is), end;
	std::vector<int> A(start, end);
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	selection_sort_rec(A, A.size() - 1);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::cout << "Work time: " << work_time << std::endl;
	EXPECT_EQ(A.size(), 10000);
	EXPECT_EQ(A, B);
}
