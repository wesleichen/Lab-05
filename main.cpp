#include "StringData.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

// Binary Search for the String
int binarySearch(vector<string> dataset, string element) {
    int lowerBound = 0;
    int higherBound = dataset.size();
    while (lowerBound <= higherBound) {
        int middle = (lowerBound + higherBound) / 2;

        if (dataset.at(middle) == element) {
            return middle;
        }
        if (dataset.at(middle) < element)
        {
            lowerBound = middle + 1;
        }
            else {
                higherBound = middle - 1;
            }

    }
    return -1;

}

// Linear Search for the String
int linearSearch(vector<string> dataset, string element) {
    int i = 0;
    while (i < dataset.size()) {
        if (dataset.at(i) == element) {
            return i;
        }
        i = i + 1;

    }
    return -1;
}

int main() {
    vector<string> dataset = getStringData();

    /* Finds the element using the respective searches
    and posts the runtime. */
    cout << "Linear search for 'not_here': " << endl;
    long long timeStart = systemTimeNanoseconds();
    cout << "Index: " << linearSearch(dataset, "not_here") << endl;
    long long timeFinish = systemTimeNanoseconds();
    cout << "Runtime: " << (timeFinish - timeStart) << endl;
    cout << "Binary search runtime for 'not_here': " << endl;
    timeStart = systemTimeNanoseconds();
    cout << "Index: " << binarySearch(dataset, "not_here") << endl;
    timeFinish = systemTimeNanoseconds();
    cout << "Runtime: " << (timeFinish - timeStart) << endl;

    cout << "Linear search for 'mzzzz': " << endl;
    timeStart = systemTimeNanoseconds();
    cout << "Index: " << linearSearch(dataset, "mzzzz") << endl;
    timeFinish = systemTimeNanoseconds();
    cout << "Runtime: " << (timeFinish - timeStart) << endl;
    cout << "Binary search for 'mzzzz': " << endl;
    timeStart = systemTimeNanoseconds();
    cout << "Index: " << binarySearch(dataset, "mzzzz") << endl;
    timeFinish = systemTimeNanoseconds();
    cout << "Runtime: " << (timeFinish - timeStart) << endl;

    cout << "Linear search for 'aaaaa': " << endl;
    timeStart = systemTimeNanoseconds();
    cout << "Index: " << linearSearch(dataset, "aaaaa") << endl;
    timeFinish = systemTimeNanoseconds();
    cout << "Runtime: " << (timeFinish - timeStart) << endl;
    cout << "Binary search for 'aaaaa': " << endl;
    timeStart = systemTimeNanoseconds();
    cout << "Index: " << binarySearch(dataset, "aaaaa") << endl;
    timeFinish = systemTimeNanoseconds();
    cout << "Runtime: " << (timeFinish - timeStart) << endl;

    return 0;
}
