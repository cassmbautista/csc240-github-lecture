#include <iostream>

using namespace std;

void addScore(std::vector<int> scores) {
    scores.push_back(100);
}

void swapScores(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
    cout << temp << endl;  
}

int main() {
    int score = 10;
    int currentScore = score;

    cout << score << endl;
    cout << currentScore << endl;
    cout << &score << endl;
    cout << &currentScore << endl;    
}