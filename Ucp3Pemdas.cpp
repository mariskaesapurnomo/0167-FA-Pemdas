// Ucp3Pemdas.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

class MasukUniversitas {
private:
    int uangPendaftaran;
    int uangSemesterPertama;
    int uangBangunan;
    int totalBiaya;

public:
    class MasukUniversitas() {
        uangPendaftaran = 100000;
        uangSemesterPertama = 30000000;
        uangBangunan = 15000000;
        totalBiaya = 451000000;
    }

    virtual void namaJlaurMasuk() { return; }

    void setUangPendaftaran(int nilai) {
        this->uangPendaftaran = nilai;
    }
    float getUangPendaftaran() {
        return uangPendaftaran;
    }
    // isi setter dan getter variable yang dibutuhkan di bawah ini
};

class SNBT : public MasukUniversitas 
{
public: 
    SNBT(char pMasukUniversitas) :
        MasukUniversitas(pMasukUniversitas)
    {
    }
};

class SNBP : public MasukUniversitas {
    SNBP(char pMasukUniversitas) :
        MasukUniversitas(pMasukUniversitas)
    {

    }
};




int main()
{
    
}
