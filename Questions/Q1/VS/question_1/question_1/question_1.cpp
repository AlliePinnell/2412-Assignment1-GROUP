#include <iostream>
#include <utility>
#include <random>

std::pair<int, int> findSum(int sum, int* arr, int size, int newRightIndex) {
	std::cout << "Finding pair that sums to " << sum << "..." << std::endl;
    if (arr == nullptr || size == 0) {
        std::cout << "Invalid input: array is null or empty." << std::endl;
        return { -1, -1 };
    }

    int leftIndex = 0;
	std::cout << "Initial left index: " << leftIndex << ", right index: " << newRightIndex << std::endl;
    if (leftIndex >= size || newRightIndex < 0) {
        return { -1, -1 };
    }

    while (leftIndex < newRightIndex) {
		std::cout << "Checking pair: (" << arr[leftIndex] << ", " << arr[newRightIndex] << ") at indices (" << leftIndex << ", " << newRightIndex << ")" << std::endl;
        if (arr[leftIndex] + arr[newRightIndex] == sum) {
            return { leftIndex, newRightIndex };
        }
        else if (arr[leftIndex] + arr[newRightIndex] < sum) {
			std::cout << "Current sum is less than target. Moving left index up." << std::endl;
            leftIndex++;
        }
        else {
			std::cout << "Current sum is greater than target. Moving right index down." << std::endl;
            newRightIndex--;
        }
    }
    std::cout << "No pair found that sums to " << sum << "." << std::endl;
    return { -1, -1 };
}


int binarySearch(int* arr, int size, int target) {
	std::cout << "Performing binary search for sum target " << target << " with size " << size << " of the array" << std::endl;
    int leftIndex = 0;
    int middleIndex;
    int rightIndex = size - 1;

    // check if the array is null, then return -1 to indicate an error
    if (arr == nullptr) {
        std::cout << "Invalid input: array is null." << std::endl;
        return -1;
    }

	std::cout << "Initial left index: " << leftIndex << ", right index: " << rightIndex << std::endl;

    while (leftIndex <= rightIndex) {
        // find middle index
        middleIndex = leftIndex + (rightIndex - leftIndex) / 2;
		std::cout << "Checking middle index: " << middleIndex << " with value: " << arr[middleIndex] << std::endl;

        // if middle index found, check the value at that index 
        if (arr[middleIndex] == target) {
            return middleIndex;
        }

        // if the value is bigger then the target, you have to check the left half of the array
        if (arr[middleIndex] > target) {
            rightIndex = middleIndex - 1;
        }

        // if the value is smaller then the target, you have to check the right half of the array
        if (arr[middleIndex] < target) {
            leftIndex = middleIndex + 1;
        }
    }

    return rightIndex;
}

int main()
{
	srand(time(0));

	int sum;
    int arr[100];
    std::cout << "Generated array: [";
    for (int i = 0; i < std::size(arr); i++) {
        arr[i] = rand() % std::size(arr);
		if (i < (std::size(arr) - 1)) {
		    std::cout << arr[i] << ", ";
		}
        else {
            std::cout << arr[i];
        }
    }
    std::cout << "]\n" << std::endl;

	// sort the array to ensure the two-pointer technique works correctly
	std::sort(arr, arr + std::size(arr));

    // print sorted array
	std::cout << "Sorted array: [";
    for (int i = 0; i < std::size(arr); i++) {
        std::cout << arr[i];
        if (i < (std::size(arr) - 1)) {
            std::cout << ", ";
        }
    }
	std::cout << "]" << std::endl;

	std::cout << "Enter target sum: ";
	std::cin >> sum;


    int size = sizeof(arr) / sizeof(arr[0]);
	std::cout << "Array size: " << size << std::endl;

    int rightIndex = binarySearch(arr, size, sum);
	std::cout << "Binary search result - right index: " << rightIndex << " (array value is " << arr[rightIndex] << ")\n" << std::endl;

    auto result = findSum(sum, arr, size, rightIndex);

    if (result.first == -1) {
        std::cout << "No pair found." << std::endl;
    }
    else {
        std::cout << "Pair found at indices: " << result.first << " and " << result.second << std::endl;
    }
}