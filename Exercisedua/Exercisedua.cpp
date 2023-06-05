#include <iostream>
#include <vector>
#include <string>

class Penerbit {
private:
    std::string namaPenerbit;

public:
    Penerbit(const std::string& nama) : namaPenerbit(nama) {}

    std::string getNamaPenerbit() const {
        return namaPenerbit;
    }
};

class Pengarang {
private:
    std::string namaPengarang;
    Penerbit* penerbit;

public:
    Pengarang(const std::string& nama, Penerbit* pub) : namaPengarang(nama), penerbit(pub) {}

    std::string getNamaPengarang() const {
        return namaPengarang;
    }

    Penerbit* getPenerbit() const {
        return penerbit;
    }
};

class Buku {
private:
    std::string judulBuku;
    Pengarang* pengarang;

public:
    Buku(const std::string& judul, Pengarang* author) : judulBuku(judul), pengarang(author) {}

    std::string getJudulBuku() const {
        return judulBuku;
    }

    Pengarang* getPengarang() const {
        ret


int main()
{
    std::cout << "Hello World!\n";
}
