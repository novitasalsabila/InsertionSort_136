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

    int temp;                               // Membuat variabel data temporer atau penyimpanan sementara
    int j;                              // Membuat variabel j sebagai penanda

    for (int i = 1;i < n; i++)              // 1. Looping dengan i dimulai dari 1 hingga n-1
    {
        temp = arr[i];                      // 2. Simpan nilai arr[i] ke variabel sementara temp
        j = i - 1;                          // 3. Setting nilai j sama dengan i-1
        while (j >= 0 && arr[j] > temp)      // 4. Looping while dimana nilai j lebih besar sama dengan 0 dan
            // array [j] lebih besar dari pada temp
        {
            arr[j + 1] = arr[j];         // a. Simpan array[j] kedalam variabel arr[j+1]
            j--;                         // b. Decrement nilai j by 1

        }
        arr[j + 1] = temp;          // 5. Simpan nilai temp ke dalam arr[j+1]

        cout << endl;
        cout << "\nPass" << i << " :"; // Output kelayar
        for (int k = 0; k < n; k++)
        {
            cout << arr[k] << " "; // Looping nilai k dimulai dari 0 hingga output kelayar
        }


    }
}

void display() {

    cout << endl;       //  Output baris kosong
    cout << "Total Element Movement = " << endl;  //cout movemant element
    cout << "\n========================" << endl; // Output kelayar
    cout << "Element Array yang telah tersusun " << endl;  // Output kelayar
    cout << "\n========================" << endl;

    for (int j = 0;j < n; j++)
    {                           // Looping dengan j mulai dari 0 hingga n-1
        cout << arr[j] << endl; // Output kelayar
    }
    cout << endl;   // Output baris kosong
}

int main()
{
    input();    //  memanggil input
    insertionsort();    //  memanggil innsertionsort
    display();  // memanggil display
}
