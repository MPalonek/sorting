#include <gtest/gtest.h> // googletest header file

#include "../app/sorting.cpp"
#include <algorithm> // for std::sort
#include <fstream>
#include <chrono>

// ----------------------------------------------------
// Merge Sort O(n logn)
// ----------------------------------------------------

TEST(mergeSortSuite, random1)
{
	std::vector<int> A = { 1 };
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	merge_sort_rec(A);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::string testName = testing::UnitTest::GetInstance()->current_test_info()->name();
	std::cout << "[   INFO   ] work time: " << work_time << " sec - " << testName << std::endl;
	EXPECT_EQ(A, B);
}

TEST(mergeSortSuite, random2)
{
	std::vector<int> A = { 2, 1 };
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	merge_sort_rec(A);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::string testName = testing::UnitTest::GetInstance()->current_test_info()->name();
	std::cout << "[   INFO   ] work time: " << work_time << " sec - " << testName << std::endl;
	EXPECT_EQ(A, B);
}

TEST(mergeSortSuite, random10)
{
	std::vector<int> A = { 3, 8, 9, 1, 12, 10, 13, 7, 18, 17 };
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	merge_sort_rec(A);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::string testName = testing::UnitTest::GetInstance()->current_test_info()->name();
	std::cout << "[   INFO   ] work time: " << work_time << " sec - " << testName << std::endl;
	EXPECT_EQ(A, B);
}

TEST(mergeSortSuite, random100)
{
	std::ifstream is("../../../../test/100.txt");
	std::istream_iterator<int> start(is), end;
	std::vector<int> A(start, end);
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	merge_sort_rec(A);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::string testName = testing::UnitTest::GetInstance()->current_test_info()->name();
	std::cout << "[   INFO   ] work time: " << work_time << " sec - " << testName << std::endl;
	EXPECT_EQ(A.size(), 100);
	EXPECT_EQ(A, B);
}

TEST(mergeSortSuite, random1k)
{
	std::ifstream is("../../../../test/1k.txt");
	std::istream_iterator<int> start(is), end;
	std::vector<int> A(start, end);
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	merge_sort_rec(A);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::string testName = testing::UnitTest::GetInstance()->current_test_info()->name();
	std::cout << "[   INFO   ] work time: " << work_time << " sec - " << testName << std::endl;
	EXPECT_EQ(A.size(), 1000);
	EXPECT_EQ(A, B);
}

TEST(mergeSortSuite, reversed1k)
{
	std::ifstream is("../../../../test/1k_reversed.txt");
	std::istream_iterator<int> start(is), end;
	std::vector<int> A(start, end);
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	merge_sort_rec(A);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::string testName = testing::UnitTest::GetInstance()->current_test_info()->name();
	std::cout << "[   INFO   ] work time: " << work_time << " sec - " << testName << std::endl;
	EXPECT_EQ(A.size(), 1000);
	EXPECT_EQ(A, B);
}

TEST(mergeSortSuite, random5k)
{
	std::ifstream is("../../../../test/5k.txt");
	std::istream_iterator<int> start(is), end;
	std::vector<int> A(start, end);
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	merge_sort_rec(A);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::string testName = testing::UnitTest::GetInstance()->current_test_info()->name();
	std::cout << "[   INFO   ] work time: " << work_time << " sec - " << testName << std::endl;
	EXPECT_EQ(A.size(), 5000);
	EXPECT_EQ(A, B);
}

TEST(mergeSortSuite, random10k)
{
	std::ifstream is("../../../../test/10k.txt");
	std::istream_iterator<int> start(is), end;
	std::vector<int> A(start, end);
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	merge_sort_rec(A);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::string testName = testing::UnitTest::GetInstance()->current_test_info()->name();
	std::cout << "[   INFO   ] work time: " << work_time << " sec - " << testName << std::endl;
	EXPECT_EQ(A.size(), 10000);
	EXPECT_EQ(A, B);
}

TEST(mergeSortSuite, reversed10k)
{
	std::ifstream is("../../../../test/10k_reversed.txt");
	std::istream_iterator<int> start(is), end;
	std::vector<int> A(start, end);
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	merge_sort_rec(A);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::string testName = testing::UnitTest::GetInstance()->current_test_info()->name();
	std::cout << "[   INFO   ] work time: " << work_time << " sec - " << testName << std::endl;
	EXPECT_EQ(A.size(), 10000);
	EXPECT_EQ(A, B);
}

TEST(mergeSortSuite, reversed15k)
{
	std::ifstream is("../../../../test/15k_reversed.txt");
	std::istream_iterator<int> start(is), end;
	std::vector<int> A(start, end);
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	merge_sort_rec(A);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::string testName = testing::UnitTest::GetInstance()->current_test_info()->name();
	std::cout << "[   INFO   ] work time: " << work_time << " sec - " << testName << std::endl;
	EXPECT_EQ(A.size(), 15000);
	EXPECT_EQ(A, B);
}

// ----------------------------------------------------
// Quick Sort (n logn)
// ----------------------------------------------------

TEST(quickSortSuite, random1)
{
	std::vector<int> A = { 1 };
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	quick_sort_rec(A, 0, A.size() - 1);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::string testName = testing::UnitTest::GetInstance()->current_test_info()->name();
	std::cout << "[   INFO   ] work time: " << work_time << " sec - " << testName << std::endl;
	EXPECT_EQ(A, B);
}

TEST(quickSortSuite, random2)
{
	std::vector<int> A = { 2, 1 };
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	quick_sort_rec(A, 0, A.size() - 1);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::string testName = testing::UnitTest::GetInstance()->current_test_info()->name();
	std::cout << "[   INFO   ] work time: " << work_time << " sec - " << testName << std::endl;
	EXPECT_EQ(A, B);
}

TEST(quickSortSuite, random10)
{
	std::vector<int> A = { 3, 8, 9, 1, 12, 10, 13, 7, 18, 17 };
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	quick_sort_rec(A, 0, A.size() - 1);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::string testName = testing::UnitTest::GetInstance()->current_test_info()->name();
	std::cout << "[   INFO   ] work time: " << work_time << " sec - " << testName << std::endl;
	EXPECT_EQ(A, B);
}

TEST(quickSortSuite, random100)
{
	std::ifstream is("../../../../test/100.txt");
	std::istream_iterator<int> start(is), end;
	std::vector<int> A(start, end);
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	quick_sort_rec(A, 0, A.size() - 1);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::string testName = testing::UnitTest::GetInstance()->current_test_info()->name();
	std::cout << "[   INFO   ] work time: " << work_time << " sec - " << testName << std::endl;
	EXPECT_EQ(A.size(), 100);
	EXPECT_EQ(A, B);
}

TEST(quickSortSuite, random1k)
{
	std::ifstream is("../../../../test/1k.txt");
	std::istream_iterator<int> start(is), end;
	std::vector<int> A(start, end);
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	quick_sort_rec(A, 0, A.size() - 1);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::string testName = testing::UnitTest::GetInstance()->current_test_info()->name();
	std::cout << "[   INFO   ] work time: " << work_time << " sec - " << testName << std::endl;
	EXPECT_EQ(A.size(), 1000);
	EXPECT_EQ(A, B);
}

TEST(quickSortSuite, reversed1k)
{
	std::ifstream is("../../../../test/1k_reversed.txt");
	std::istream_iterator<int> start(is), end;
	std::vector<int> A(start, end);
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	quick_sort_rec(A, 0, A.size() - 1);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::string testName = testing::UnitTest::GetInstance()->current_test_info()->name();
	std::cout << "[   INFO   ] work time: " << work_time << " sec - " << testName << std::endl;
	EXPECT_EQ(A.size(), 1000);
	EXPECT_EQ(A, B);
}

TEST(quickSortSuite, random5k)
{
	std::ifstream is("../../../../test/5k.txt");
	std::istream_iterator<int> start(is), end;
	std::vector<int> A(start, end);
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	quick_sort_rec(A, 0, A.size() - 1);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::string testName = testing::UnitTest::GetInstance()->current_test_info()->name();
	std::cout << "[   INFO   ] work time: " << work_time << " sec - " << testName << std::endl;
	EXPECT_EQ(A.size(), 5000);
	EXPECT_EQ(A, B);
}

TEST(quickSortSuite, random10k)
{
	std::ifstream is("../../../../test/10k.txt");
	std::istream_iterator<int> start(is), end;
	std::vector<int> A(start, end);
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	quick_sort_rec(A, 0, A.size() - 1);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::string testName = testing::UnitTest::GetInstance()->current_test_info()->name();
	std::cout << "[   INFO   ] work time: " << work_time << " sec - " << testName << std::endl;
	EXPECT_EQ(A.size(), 10000);
	EXPECT_EQ(A, B);
}

TEST(quickSortSuite, reversed10k)
{
	std::ifstream is("../../../../test/10k_reversed.txt");
	std::istream_iterator<int> start(is), end;
	std::vector<int> A(start, end);
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	quick_sort_rec(A, 0, A.size() - 1);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::string testName = testing::UnitTest::GetInstance()->current_test_info()->name();
	std::cout << "[   INFO   ] work time: " << work_time << " sec - " << testName << std::endl;
	EXPECT_EQ(A.size(), 10000);
	EXPECT_EQ(A, B);
}

/*
// Stack Overflow on Windows10
TEST(quickSortSuite, reversed15k)
{
	std::ifstream is("../../../../test/15k_reversed.txt");
	std::istream_iterator<int> start(is), end;
	std::vector<int> A(start, end);
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	quick_sort_rec(A, 0, A.size() - 1);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::cout << "Work time: " << work_time << std::endl;
	EXPECT_EQ(A.size(), 15000);
	EXPECT_EQ(A, B);
}
*/

// ----------------------------------------------------
// Selection Sort (n^2)
// ----------------------------------------------------

TEST(selectionSortSuite, random1)
{
	std::vector<int> A = { 1 };
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	selection_sort_rec(A, A.size()-1);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::string testName = testing::UnitTest::GetInstance()->current_test_info()->name();
	std::cout << "[   INFO   ] work time: " << work_time << " sec - " << testName << std::endl;
	EXPECT_EQ(A, B);
}

TEST(selectionSortSuite, random2)
{
	std::vector<int> A = { 2, 1 };
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	selection_sort_rec(A, A.size() - 1);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::string testName = testing::UnitTest::GetInstance()->current_test_info()->name();
	std::cout << "[   INFO   ] work time: " << work_time << " sec - " << testName << std::endl;
	EXPECT_EQ(A, B);
}

TEST(selectionSortSuite, random10)
{
	std::vector<int> A = { 3, 8, 9, 1, 12, 10, 13, 7, 18, 17 };
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	selection_sort_rec(A, A.size() - 1);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::string testName = testing::UnitTest::GetInstance()->current_test_info()->name();
	std::cout << "[   INFO   ] work time: " << work_time << " sec - " << testName << std::endl;
	EXPECT_EQ(A, B);
}

TEST(selectionSortSuite, random100)
{
	std::ifstream is("../../../../test/100.txt");
	std::istream_iterator<int> start(is), end;
	std::vector<int> A(start, end);
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	selection_sort_rec(A, A.size() - 1);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::string testName = testing::UnitTest::GetInstance()->current_test_info()->name();
	std::cout << "[   INFO   ] work time: " << work_time << " sec - " << testName << std::endl;
	EXPECT_EQ(A.size(), 100);
	EXPECT_EQ(A, B);
}

TEST(selectionSortSuite, random1k)
{
	std::ifstream is("../../../../test/1k.txt");
	std::istream_iterator<int> start(is), end;
	std::vector<int> A(start, end);
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	selection_sort_rec(A, A.size() - 1);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::string testName = testing::UnitTest::GetInstance()->current_test_info()->name();
	std::cout << "[   INFO   ] work time: " << work_time << " sec - " << testName << std::endl;
	EXPECT_EQ(A.size(), 1000);
	EXPECT_EQ(A, B);
}

TEST(selectionSortSuite, reversed1k)
{
	std::ifstream is("../../../../test/1k_reversed.txt");
	std::istream_iterator<int> start(is), end;
	std::vector<int> A(start, end);
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	selection_sort_rec(A, A.size() - 1);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::string testName = testing::UnitTest::GetInstance()->current_test_info()->name();
	std::cout << "[   INFO   ] work time: " << work_time << " sec - " << testName << std::endl;
	EXPECT_EQ(A.size(), 1000);
	EXPECT_EQ(A, B);
}

TEST(selectionSortSuite, random5k)
{
	std::ifstream is("../../../../test/5k.txt");
	std::istream_iterator<int> start(is), end;
	std::vector<int> A(start, end);
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	selection_sort_rec(A, A.size() - 1);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::string testName = testing::UnitTest::GetInstance()->current_test_info()->name();
	std::cout << "[   INFO   ] work time: " << work_time << " sec - " << testName << std::endl;
	EXPECT_EQ(A.size(), 5000);
	EXPECT_EQ(A, B);
}

TEST(selectionSortSuite, random10k)
{
	std::ifstream is("../../../../test/10k.txt");
	std::istream_iterator<int> start(is), end;
	std::vector<int> A(start, end);
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	selection_sort_rec(A, A.size() - 1);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::string testName = testing::UnitTest::GetInstance()->current_test_info()->name();
	std::cout << "[   INFO   ] work time: " << work_time << " sec - " << testName << std::endl;
	EXPECT_EQ(A.size(), 10000);
	EXPECT_EQ(A, B);
}

TEST(selectionSortSuite, reversed10k)
{
	std::ifstream is("../../../../test/10k_reversed.txt");
	std::istream_iterator<int> start(is), end;
	std::vector<int> A(start, end);
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	selection_sort_rec(A, A.size() - 1);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::string testName = testing::UnitTest::GetInstance()->current_test_info()->name();
	std::cout << "[   INFO   ] work time: " << work_time << " sec - " << testName << std::endl;
	EXPECT_EQ(A.size(), 10000);
	EXPECT_EQ(A, B);
}

TEST(selectionSortSuite, reversed15k)
{
	std::ifstream is("../../../../test/15k_reversed.txt");
	std::istream_iterator<int> start(is), end;
	std::vector<int> A(start, end);
	std::vector<int> B = A;
	std::sort(B.begin(), B.end());

	clock_t t = clock();
	selection_sort_rec(A, A.size() - 1);
	const double work_time = (clock() - t) / double(CLOCKS_PER_SEC);
	std::string testName = testing::UnitTest::GetInstance()->current_test_info()->name();
	std::cout << "[   INFO   ] work time: " << work_time << " sec - " << testName << std::endl;
	EXPECT_EQ(A.size(), 15000);
	EXPECT_EQ(A, B);
}

/* high precision clock - need to work on formatting output...
 	auto t1 = std::chrono::high_resolution_clock::now();
	auto work_time = std::chrono::high_resolution_clock::now() - t1;
	auto sec = std::chrono::duration_cast<std::chrono::seconds>(work_time2).count();
	auto msec = std::chrono::duration_cast<std::chrono::milliseconds>(work_time2).count();
	auto usec = std::chrono::duration_cast<std::chrono::microseconds>(work_time2).count();
	std::cout << "[   INFO   ] work time: " << sec << "." << msec << " " << usec << " --- " << testName << std::endl;
*/