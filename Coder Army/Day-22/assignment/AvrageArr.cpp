#include <iostream>
using namespace std;
// 2: Calculate the average of elements in an array of size 18.
int main()
{
    int arr[18] = {0};

    {
        // if (freopen("/../input.txt", "r", stdin) == NULL)
        // {
        //     perror("freopen");
        //     cout << "File Not Foud" << endl;
        //     // Handle error, e.g., print an error message and exit
        //     exit(EXIT_FAILURE);
        // }
        freopen("input.txt", "r", stdin);
        freopen("D:/out.txt", "w", stdout);
        // taking input

        cout << "Enter a number in an array: " << endl;
        int sizeOfArray = sizeof(arr) / sizeof(arr[0]);

        int sum = 0;
        for (int i = 0; i < sizeOfArray; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        cout << "Avrage of an arrays is: " << sum / sizeOfArray << endl;
    }

    return true;
}