#include <iostream>
using namespace std;
int main() {
    
    double numerator, denominator, arr[4];
    int index;
    
    cout << "Enter array index: ";
    cin >> index;
    
    try {
        
        // throw exception if array out of bounds
        if (index >= 4)
            throw 0;
            
        // not executed if array is out of bounds


        // not executed if denominator is 0
        for(int i=0;i<index;i++)
        {
                    cout << "Enter numerator: ";
        cin >> numerator;
    
        cout << "Enter denominator: ";
        cin >> denominator;

        // throw exception if denominator is 0
        try
        {
        if (denominator == 0)
            throw "ERROR";
        }
         catch (int x) {
        cout << "can't divide with zero!" << endl;
    }
        arr[i] = numerator / denominator;
        cout << arr[i] << endl;
        }
    }

    
    
  
    // catch any other exception
    catch (int x) {
        cout << "Unexpected exception!3" << endl;
    }
    
    return 0;    
}
