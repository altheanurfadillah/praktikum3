#include <iostream>
using namespace std;

int PromptAndRead();
int Sum(int a, int b);

int main() {
    int FirstNumber = PromptAndRead();
    int SecondNumber = PromptAndRead();
    int RangeSum = Sum(FirstNumber , SecondNumber);
    cout << "The sum from " << FirstNumber
        << " to " << SecondNumber
        << " is " << RangeSum << endl;
    return 0;
}

int PromptAndRead() {
    cout << "Enter number (integer): ";
    int Response;
    cin >> Response;
}

int Sum(int a, int b) {
    int Total = 0;
    for (int i = a; i <= b; ++i){
            Total += i;
    }
    return Total;
}
