/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática básica
 *
 * @author Daniel Rodríguez Duarte
 * @date 15/7/2023
 * @brief este programa se encarga la mayusculas y minusculas de una cadena
 *
 */

#include "capitalize_vowels.h"

int main () {
  std::string cadena {""};
  EnterAndReadString(cadena);
  std::string new_cadena {CapitalizeVowels(cadena)};
  std::cout << "La cadena con las vocales y consonates cambiados es: " << new_cadena << std::endl;
  return 0;
}
