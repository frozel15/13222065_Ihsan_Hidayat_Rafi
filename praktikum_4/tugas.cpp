#include <iostream>
#include <fstream>
#include <vector>

int main (int argc, char *argv[]) {
  std::vector<double> sensor;
  sensor.push_back(100.5);
  sensor.push_back(200.0);
  sensor.push_back(150.5);

  for (int i = 0; i < sensor.size(); i++) {
    sensor[i] = sensor[i]*1.1;
  }

  std::ofstream fileTulis("hasil_kalibrasi.txt");

  if (fileTulis.is_open())
  {
    for (int i = 0; i < sensor.size(); i++)
    {
      fileTulis << sensor[i] << std::endl;
    }
    std::cout << "Berhasil menulis file!\n";
  } else
  {
    std::cout << "Gagal menulis file!\n";
  }
  
  fileTulis.close();

  return 0;
}
