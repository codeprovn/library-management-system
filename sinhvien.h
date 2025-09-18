#ifndef SINHVIEN_H
#define SINHVIEN_H

using namespace std;

class SinhVien {
    protected:
        char MSV[10];
        char HoTen[100];
        char NganhHoc[100];
    public:
        void setSinhVien(char [], char [], char []);
        void setMSV(char[]);
        void setHoTen(char[]);
        void setNganhHoc(char[]);
        string getMSV();
        string getHoTen();
        string getNganhHoc();
};

#endif
