#include <iostream>
#include <cstring>
#include "sinhvien.h"
using namespace std;

void SinhVien ::setSinhVien(char msv[], char hoten[], char nganhhoc[])
{
    strcpy(MSV, msv);
    strcpy(HoTen, hoten);
    strcpy(NganhHoc, nganhhoc);
}

void SinhVien ::setMSV(char msv[])
{
    strcpy(MSV, msv);
}

void SinhVien ::setHoTen(char hoten[])
{
    strcpy(HoTen, hoten);
}

void SinhVien ::setNganhHoc(char nganhhoc[])
{
    strcpy(NganhHoc, nganhhoc);
}

string SinhVien ::getMSV()
{
    return MSV;
}

string SinhVien ::getHoTen()
{
    return HoTen;
}

string SinhVien ::getNganhHoc()
{
    return NganhHoc;
}
