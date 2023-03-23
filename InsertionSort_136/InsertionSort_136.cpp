#include <iostream>
using namespace std;

int arr[20]; // Membuat array dengan panjang data 20
int n;  // Membuat variabel inputan n


void input() {
    while (true)
    {
        cout << "Masukan jumlah data pada array : "; //Membuat inputan jumlah element array
        cin >> n;                                    //Memanggil variabel inputan

        if (n <= 20)
        {
            // Membuat kondisi n tidak lebih dari 20
            break;
        }

        else

            cout << "\narray yang anda masukan maksimal 20 elemen. \n"; // Menampilkan pesan jika data lebih dari 20

    }

    cout << endl;
    cout << "====================" << endl;
    cout << "Masukan Element Array" << endl;
    cout << "====================" << endl;

    // Menggunakan perulangan for untuk menyimpan data pada array
    for (int i = 0; i < n; i++)
    {
        cout << " Data ke-" << (i + 1) << ": ";      // Memasukan atau menginputkan nilai data n
        cin >> arr[i];                             // Memasukan nilai data n kedalam array
    }

}

void insertionsort() {

}

int main()
{

}
