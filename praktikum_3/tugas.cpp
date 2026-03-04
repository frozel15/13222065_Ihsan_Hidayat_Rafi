#include <iostream>

class RekeningBank {
public:
  RekeningBank (double saldo_awal) {
    saldo = saldo_awal;
  }

  void cek() {
    std::cout << "Sisa saldo: " << saldo << std::endl;
  }

  void setor(double jumlah) {
    saldo += jumlah;
    std::cout << "Sisa saldo: " << saldo << std::endl;
  }

  void tarik(double jumlah) {
    if (jumlah > saldo) {
      std::cout << "Penarikan Gagal" << std::endl;
    } else {
      saldo -= jumlah;
      std::cout << "Sisa saldo: " << saldo << std::endl;
    }
  }

private:
  double saldo;
};

int main (int argc, char *argv[]) {
  RekeningBank rekening1(1000.00);
  rekening1.cek();
  rekening1.setor(1000.00);
  rekening1.tarik(1500.00);
  rekening1.tarik(501.00);
  return 0;
}
