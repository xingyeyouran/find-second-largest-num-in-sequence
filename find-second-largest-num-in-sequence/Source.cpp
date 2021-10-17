#include<iostream>
using namespace std;
#include<vector>
/***
1) Initialize the first as 0(i.e, index of arr[0] element
2) Start traversing the array from array[1],
    a) If the current element in array say arr[i] is greaterthan first.Then update first and second as:
    second = first
    first = arr[i]
    b) If the current element is in between firstand second, then update second to store the value of current variable as:
    second = arr[i]
3) Return the value stored in second.
    ***/
int second_largest(vector<int> arr) {
    int max = arr[0], second = 0;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > max) {
            second = max;
            max = arr[i];
        }
        else if (arr[i] > second) {
            second = arr[i];
        }
    }
    return second;
}
int main() {
    auto arr = {2, 3, 87, 2, 5, 23, 8, 4, 125, 11};
    cout << second_largest(arr) << endl;
	return 0;
}