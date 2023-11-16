/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática básica
 *
 * @author Daniel Rodríguez Duarte
 * @date 15/07/2023
 *
 */

#include "polynomial.h"

void EnterPolynomial(std::vector<int>& polynomial) {
  int coefficients {0};
  std::cout << "Introduce coeficientes al polinomios, si quiere parar introduzca un 0: " << std::endl;
  while(std::cin >> coefficients && coefficients != 0) {
    polynomial.push_back(coefficients);
  }
}

void ReadPolynomial(const std::vector<int>& polynomial) {
  std::cout << "El polinomio contiene { ";
  for(int i {0}; i < polynomial.size(); ++i) {
    std::cout << polynomial.at(i) << " ";
  }
  std::cout << "}" << std::endl;
}

int PolynomialValue(const std::vector<int>& polynomial, int value) {
  int result {0};
  for (int i {0}; i < polynomial.size(); ++i) {
    result = result * value + polynomial.at(i);
  }
  return result;
}
