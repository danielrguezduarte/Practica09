/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * 
 *
 * @file  P50279
 * @author Daniel Rodríguez Duarte
 * @date Nov 16 2023
 * Este programa escribe la secuencia complementaria del ADN o ARN
*/
#include <iostream>

char complement(char c) {
  if (c == 'A') return 'T';
  else if (c == 'T') return 'A';
  else if (c == 'C') return 'G';
  else return 'C';
}

int main() {
  char c1, c2, c3;
  std::cin >> c1 >> c2;
  bool trobat = false;
    while (!trobat && std::cin >> c3) {
    trobat = (c1 == 'T' && c2 == 'A' && c3 == 'G');
    c1 = c2;
    c2 = c3;
    }
    if (trobat) {
      while (std::cin >> c3) {
        std::cout << complement(c3);
        }
       }
    std::cout << std::endl;
}

