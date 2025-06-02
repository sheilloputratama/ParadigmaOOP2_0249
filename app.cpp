#include <iostream>
using namespace std;

class mahasiswa
{
    //syarat enkapulasi
private: 
    string nim;
protected:
    string nama;
    string prodi;
public:

    virtual void profilMhs() = 0; // pure function

    mahasiswa(string pNama, string pNim, string pProdi) :
    nim(pNim), nama(pNama), prodi(pProdi)   {

    }
    
    //setter dan getter
    void setNama(string pNama){
            nama = pNama
    }
    
    string setNim(string, pNim){
            nim = pNim
    }

};

//inheritance
class maba : public mahasiswa 
{
public:

    maba(string pNama, string pNim, string pProdi):
    mahasiswa(pNama, setNim(pNim), pProdi){

    }
        void profilMhs() override
        {
            cout << "Nama : " << nama << endl;
            cout << "Nim : " << getNim() << endl;
            cout << "Prodi : " << prodi << endl;
        }
};

class mhsTua : public mahasiswa 
{
public:

    mhsTua(string pNama, string pNim, string pProdi):
    mahasiswa(pNama, setNim(pNim), pProdi){

    }
        void profilMhs() override
        {
            cout << "Nama : " << nama << endl;
            cout << "Nim : " << getNim() << endl;
            cout << "Prodi : " << prodi << endl;
        }
};
int main()
{

    mahasiswa *mhs;
    maba lintang("Lintang", "20240000", "SI");
    mhsTua gibran("Gibran", "20170000", "TI");

    mhs = &lintang;
    mhs->profilMhs();
    mhs = &gibran;
    mhs->profilMhs();

return 0;
}