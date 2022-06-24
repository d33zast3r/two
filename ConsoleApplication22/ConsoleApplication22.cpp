#include <iostream>
#include <random>
#include <ctime>
#include <vector>
using namespace std;

int C = 0;
int M = 0;

class quicksort {
private:
    vector<int> data;
    
public:
    quicksort(int* d, int n) {
        for (int i = 0; i < n; i++) {
            data.push_back(d[i]);
        }
    }
    vector<int> sort() {
        vector<int> temp = Quicksort(data);
        return temp;
    }
    vector<int> Quicksort(vector<int> inputArray) {
        int selectedNumber = inputArray[0];
        vector<int> arrayBefore;
        vector<int> arrayAfter;
        for (int i = 1; i < inputArray.size(); i++) {
            if (inputArray[i] <= selectedNumber) {
                arrayBefore.push_back(inputArray[i]);
            }
            else {
                arrayAfter.push_back(inputArray[i]);
            }
        }
        if (arrayBefore.size() > 1) {
            arrayBefore = Quicksort(arrayBefore);
        }
        if (arrayAfter.size() > 1) {
            arrayAfter = Quicksort(arrayAfter);
        }
        std::vector<int> result;
        for (int i = 0; i < arrayBefore.size(); i++) {
            result.push_back(arrayBefore[i]);
        }
        result.push_back(selectedNumber);
        for (int i = 0; i < arrayAfter.size(); i++) {
            result.push_back(arrayAfter[i]);
        }
        return result;
    }
};


int main() {
    cout << "Hello World" << endl;
    
    return 0;
}
