/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática básica
 *
 * @author Daniel Rodríguez Duarte
 * @date 15/07/2023
 * @brief este programa se encarga calcular la hipotesuna de un triangulo rectángulo
 *
 */
#include "hypotenuse.h"

int main() {
  double cateto1 {0.f}, cateto2 {0.f};
  EnterCateto(cateto1, cateto2);
  ReadHypotenuse(cateto1, cateto2);
  return 0;
}
