#include <iostream>
using namespace std;
 
class mahasiswa{
    public:
    int nim;
    void ShowNim(){
        cout << "No Induk = "<<nim<<endl;
    }
};

int main (){

    mahasiswa mhs{1};
    mhs.ShowNim();

    mahasiswa &refmhs = mhs;
    refmhs.nim = 2;
    mhs.ShowNim();

    mahasiswa *pmhs = &mhs;
    pmhs->ShowNim();
    return 0;
}