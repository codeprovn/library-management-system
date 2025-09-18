#ifndef MUONTRA_H
#define MUONTRA_H

#include "sach.h"
#include "sinhvien.h"

class MuonTra : public Sach, public SinhVien {
    public:
        void setMuon(char [], char []);
        void setTra(char [], char []);
};

#endif
