
#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <string>
using namespace std;

// plan:
// create 2 vector for LeftList and RightList
// use sort() to sort
// retrieve "number pairing" from vector and calculate distance and therfore total distance
// implement reading input file

int main() {

    vector<int> LeftList = {};
    vector<int> RightList = {};

/////////////////////////////////////////
// File handling steps:
// Create a stream object. 
// Connect it to a file on disk. 
// Read the file’s contents into our stream object. 
// Close the file.
    std::ifstream myfile; myfile.open("inputPart1.txt");

    int left;
    int right;
    while (myfile >> left >> right){ 
        LeftList.push_back(left); 
        RightList.push_back(right);
    }

    myfile.close();

/////////////////////////////////////////

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


    int totaldiff = 0;
    for (int i = 0; i < LeftList.size(); i++){ // For loop iterates over each element (startrange, stoprange, action)
        int difference = max(LeftList[i], RightList[i]) - min (LeftList[i], RightList[i]);
        totaldiff += difference;

    };

     std::cout << "Total Difference: " << totaldiff;

/////////////////////////////////////////

    return 0;
}
    
