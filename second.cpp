#include <iostream>
#include <vector>
#include <algorithm> // swap ke liye

using namespace std;

int main() {
    vector<int> vec = {0, 2, 0, 4, 0};
    int largest = INT_MIN;
    int secondlarge=INT_MIN;
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i]>largest ) {
            secondlarge=largest;
            largest=vec[i];
        }

            else if(vec[i]>secondlarge && vec[i]!=largest){
            secondlarge=vec[i];
        }
        

        
    }
     
    cout<<secondlarge<<endl;
    cout<<largest;
}