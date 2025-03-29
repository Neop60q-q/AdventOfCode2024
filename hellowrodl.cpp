
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// plan:
// create 2 vector for LeftList and RightList
// use sort() to sort
// retrieve "number pairing" from vector and calculate distance and therfore total distance

// implement reading input file

int main() {
    std::cout << "Hello World!";

    vector<int> LeftList = {3, 4, 2, 1, 3, 3};
    vector<int> RightList = {4, 3, 5, 3, 9, 3};

    sort(LeftList.begin(), LeftList.end());
    sort(RightList.begin(), RightList.end());



    cout << "LeftList: ";
    for (int num : LeftList) {
        cout << num << " ";  
    }
    cout << endl; 

    cout << "RightList: ";
    for (int num : RightList) {
        cout << num << " ";
    }
    cout << endl; 

    return 0;
}
    
