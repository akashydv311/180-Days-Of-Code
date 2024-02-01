#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> my_push_back(vector<int> v)
{
}

int main()
{
    // Prove that the average time Complexity of Push_back operation in Vector is O(1) time.

    // How to find the number of Occurance of an element in a vector. You need to use STL here.

    vector<int> q2;

    q2.push_back(45);
    q2.push_back(67);
    q2.push_back(89);
    q2.push_back(89);

    int c = count(q2.begin(), q2.end(), 45);
    cout << "Count: " << c << endl;

    // How to find maximum and minimum elements from the vector. USE STL here.

    cout << "Minimun is: " << min(34, 56) << endl;
    cout << "Minimun element is: " << *min_element(q2.begin(), q2.end()) << endl;
    cout << "Maximun is: " << max(34, 56) << endl;
    cout << "Maximun element is: " << *max_element(q2.begin(), q2.end()) << endl;

    return 0;
}