#include <iostream>
#include <cstring>
#include "../include/muontra.h"

using namespace std;

void MuonTra ::setMuon(char msv[], char Ma[])
{
    strcpy(MSV, msv);
    strcpy(MaSach, Ma);
}

void MuonTra ::setTra(char msv[], char Ma[])
{
    strcpy(MSV, msv);
    strcpy(MaSach, Ma);
}
