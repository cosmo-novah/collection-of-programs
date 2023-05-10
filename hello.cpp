#include <iostream>

using namespace std;

int main()
{
    int arr[100];
    
    for (int i = 0; i < 100; i++) {
        arr[i] = i;
    }

    cout << arr[52] << endl;

    return 0;
}
