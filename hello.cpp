#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arr[100];
    
    for (int i = 0; i < 100; i++) {
        arr[i] = i;
    }

    cout << arr[25] << " " << arr[25] + arr [69] << endl;

    return 0;
}
