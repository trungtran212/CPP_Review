#include "vector.cpp"

int main()
{
    vector<int> v;
    int n, x;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap x: ";
    cin >> x;
    createVector(v, n);
    printVector(v);
    cout << "\nSum: " << findSum(v);
    cout << "\nMax: " << findMax(v);
    cout << "\nFreq of " << x << ": " << countX(v, x) << endl;
    reverseVector(v);
    printVector(v);
    cout << "\n";
    eraseDuplicate(v);
    printVector(v);
    return 0;
}