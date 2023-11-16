/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * 
 *
 * @file  P65437
 * @author Daniel Rodríguez Duarte
 * @date Nov 16 2023
 * Este program dice si son ciertas o no las funciones de 3
*/
#include <iostream>
bool es_potencia_de_3(int n) {
  if (n == 0) {
    return false;
  }
  while (n % 3 == 0) {
    n = n / 3;
    }
  return n == 1;
}

