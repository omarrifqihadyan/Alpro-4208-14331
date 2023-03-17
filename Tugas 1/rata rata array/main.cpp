#include <iostream>

using namespace std;

int main()
{
     int arr[3];
    float total = 0, rata2;

    cout << "Masukkan 3 angka: " << endl;

    for(int i = 0; i < 3; i++)
    {
        cin >> arr[i];
        total += arr[i];
    }

    rata2 = total / 3;

    cout << "Rata-rata nilai: " << rata2 << endl;
    return 0;
}
