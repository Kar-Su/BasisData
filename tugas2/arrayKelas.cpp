#include<iostream>

using std::cout;
using std::string;


string kelas[30];
int pos = 0;

void input_data(string nama);
void output_data();


int main()
{
    input_data("");
    output_data();
    input_data("Mie Ayam sedap");
    output_data();
    input_data("Minum air putih");
    output_data();

    return 0;
}


void input_data(string nama)
{
    kelas [pos] = nama;
    pos++;
}

void output_data()
{
    for(int i = 0; i < pos; i++){
        cout << kelas[i];
        (i < pos - 1) ? cout << ", " : cout << "." << std::endl;
    }

}