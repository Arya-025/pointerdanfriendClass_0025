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