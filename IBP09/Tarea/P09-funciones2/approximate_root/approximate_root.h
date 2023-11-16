/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática básica
 *
 * @author Daniel Rodríguez Duarte
 * @date 15/7/2023
 * @brief este programa resuelve diferentes calculos
 *
 */

#pragma once 
#include <iostream>
#include <cmath>
#include <stdexcept>

const int kEPSILON = 1e-9;

void EnterNumber(double& number);
void MayorThatZero(const double& number);
void RootDelta(double& root, double& delta);
double Operation(double& root, double& delta, const double& number);
