# Library Management System

## Giới thiệu

**Library Management System** là một bài toán kinh điển dành cho sinh viên và lập trình viên mới bắt đầu, giúp quản lý sách, sinh viên và hoạt động mượn trả trong thư viện. Dự án được phát triển hoàn toàn bằng C++ từ năm 2020 bởi **Lê Anh Đức** (sinh viên Đại học Thăng Long), với mục đích chia sẻ kiến thức, kinh nghiệm lập trình và thúc đẩy cộng đồng học tập.

> **Lý do chia sẻ mã nguồn công khai:**  
> Ban đầu, nguồn đã được chia sẻ miễn phí qua email nhằm hạn chế kẻ xấu sử dụng với mục đích thương mại. Hiện tại, dự án được công khai trên GitHub để cộng đồng dễ dàng tiếp cận, đóng góp, bảo trì và phát triển mã nguồn lâu dài.

Dự án thường xuyên được cải tiến và tái cấu trúc để dễ dàng quản lý, mở rộng và tiếp nhận ý kiến từ cộng đồng.

---

## Yêu cầu hệ thống

-   Windows (khuyến nghị)
-   Trình biên dịch C++ (MinGW, GCC, Visual Studio, ...)
-   Đã thiết lập biến môi trường cho trình biên dịch (`g++`)

---

## Cài đặt & Sử dụng

### 1. Clone mã nguồn

```bash
git clone https://github.com/codeprovn/library-management-system.git
cd library-management-system
```

### 2. Cài đặt trình biên dịch C++

-   Nếu chưa có, hãy cài đặt MinGW hoặc Visual Studio.
-   Đảm bảo lệnh sau chạy thành công:

```bash
g++ --version
```

### 3. Biên dịch chương trình

```bash
g++ src/main.cpp src/menu.cpp src/muontra.cpp src/sach.cpp src/sinhvien.cpp -Iinclude -o library.exe
```

> **Lưu ý:**  
> Các file mã nguồn đã được sửa để include header theo đường dẫn tương đối (ví dụ: `#include "../include/sach.h"`).  
> Vì vậy, bạn **có thể bỏ qua** tham số `-Iinclude` khi biên dịch. Chương trình vẫn chạy bình thường nếu các file header nằm đúng vị trí như cấu trúc dự án.

-   Sau khi biên dịch thành công, bạn sẽ có file thực thi `library.exe` ở thư mục gốc dự án.

### 4. Chuẩn bị dữ liệu

-   Thư mục `data` chứa các file dữ liệu nhị phân như `sach.bin`, `sinhvien.bin`, ...
-   Nếu chưa có dữ liệu, hãy chạy chương trình và nhập mới. Chương trình sẽ tự động tạo file dữ liệu.

### 5. Chạy chương trình

```bash
./library.exe
```

-   Làm theo hướng dẫn trên màn hình để sử dụng các chức năng quản lý thư viện.

---

## Lưu ý

-   Nếu gặp lỗi đọc dữ liệu, hãy kiểm tra lại vị trí thư mục `data` (phải cùng cấp với file thực thi).
-   Nếu muốn lưu dữ liệu lên Git, hãy chỉnh sửa `.gitignore` để không bỏ qua thư mục `data`.

---

## Đóng góp & Liên hệ

Để biết hướng dẫn chi tiết về cách đóng góp cho dự án, xem [CONTRIBUTING.md](CONTRIBUTING.md).

---

**Tác giả:**  
Anh Duc Le  
Copyright © 2020-2025
