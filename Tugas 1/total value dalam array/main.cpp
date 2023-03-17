#include <iostream>

using namespace std;

int main()
{
     int arr[5], total = 0;

    cout << "Masukkan 5 angka: " << endl;

    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
        total += arr[i];
    }

    cout << "Total nilai: " << total << endl;
    return 0;
}
