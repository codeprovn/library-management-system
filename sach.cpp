#include <iostream>
#include <cstring>
#include "sach.h"
using namespace std;

void Sach :: setSach(char Ma[], char Ten[], char Loai[], char TG[], int NXB) {
    strcpy(MaSach, Ma);
    strcpy(TenSach, Ten);
    strcpy(TheLoai, Loai);
    strcpy(TacGia, TG);
    NamXuatBan = NXB;
}

void Sach :: setMaSach(char Ma[]) {
    strcpy(MaSach, Ma);
}

void Sach :: setTenSach(char Ten[]) {
    strcpy(TenSach, Ten);
}

void Sach :: setTheLoai(char Loai[]) {
    strcpy(TheLoai, Loai);
}

void Sach :: setTacGia(char TG[]) {
    strcpy(TacGia, TG);
}

void Sach :: setNamXuatBan(int NXB) {
    this -> NamXuatBan = NXB;
}

string Sach :: getMaSach() {
    return MaSach;
}

string Sach :: getTenSach() {
    return TenSach;
}

string Sach :: getTheLoai() {
    return TheLoai;
}

string Sach :: getTacGia() {
    return TacGia;
}

int Sach :: getNamXuatBan() {
    return NamXuatBan;
}
