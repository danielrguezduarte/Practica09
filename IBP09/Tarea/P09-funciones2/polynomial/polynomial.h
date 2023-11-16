/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática básica
 *
 * @author Daniel Rodríguez Duarte
 * @date 15/07/2023
 */

#pragma once
#include <iostream>
#include <vector>
#include <cmath>

void EnterPolynomial(std::vector<int>& polynomial);
void ReadPolynomial(const std::vector<int>& polynomial);
int PolynomialValue(const std::vector<int>& polynomial, int value);
