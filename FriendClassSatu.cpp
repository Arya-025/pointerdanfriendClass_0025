#include <iostream>
#include <string>
using namespace std;

class siswa;
class orang
{
private:
    string nama;

public:
    void SetNama(string pNama);
    friend class siswa;
};

class siswa
{
private:
    int id;

public:
    void SetId(int pid);
    void displayAll(orang &a);
};

void siswa::displayAll(orang &a)
{
    cout << id << endl << a.nama;
}
void orang::SetNama(string pNama)
{
    nama = pNama;
}
void siswa::SetId(int pId)
{
    id = pId;
}
int main()
{
    orang joko;
    joko.SetNama("Joko Susilo");
    siswa joko_siswa;
    joko_siswa.SetId(1);
    joko_siswa.displayAll(joko);
    return 0;
}