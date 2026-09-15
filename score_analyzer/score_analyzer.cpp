#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    int score, total = 0;
    int passed = 0;
    int highest = -1;
    
    cout << "Banyak nilai: ";
    cin >> n;
    vector<int> scores;

    for (int i = 0; i < n; i++) {
        cin >> score;
        scores.push_back(score);
        total += score;
        if (score >= 60) passed++;
        if (score > highest) highest = score;
    }
 
    double average = (double) total / scores.size();
    cout << "Total : " << total << endl;
    cout << "Rata-rata : " << average << endl;
    cout << "Tertinggi : " << highest << endl;
    cout << "Lulus : " << passed << endl;

    return 0;
}