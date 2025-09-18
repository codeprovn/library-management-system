#ifndef SACH_H
#define SACH_H

using namespace std;

class Sach
{
protected:
    char MaSach[10];
    char TenSach[100];
    char TheLoai[100];
    char TacGia[100];
    int NamXuatBan;

public:
    void setSach(char[], char[], char[], char[], int);
    void setMaSach(char[]);
    void setTenSach(char[]);
    void setTheLoai(char[]);
    void setTacGia(char[]);
    void setNamXuatBan(int);
    string getMaSach();
    string getTenSach();
    string getTheLoai();
    string getTacGia();
    int getNamXuatBan();
};

#endif
