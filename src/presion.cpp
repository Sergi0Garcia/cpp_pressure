// implementation of presion.h

#include "presion.h"
#include <cmath>
#include <iostream>

Presion::Presion(double profundidad, double presion_superficial, double densidad_fluido, double gravedad)
{
	profundidad_ = profundidad;
	presion_superficial_ = presion_superficial;
	densidad_fluido_ = densidad_fluido;
	gravedad_ = gravedad;
}

double Presion::getProfundidad(void) const
{
	return profundidad_;
}
double Presion::getPresionSuperficial(void) const
{
	return presion_superficial_;
}
double Presion::getDensidadFluido(void) const
{	
	return densidad_fluido_;
}
double Presion::getGravedad(void) const
{
	return gravedad_;
}
double Presion::setProfundidad(float profundidad)
{
	profundidad_ = profundidad;
}
double Presion::setPresionSuperficial(float presion_superficial)
{
	presion_superficial_ = presion_superficial;
}
double Presion::setDensidadFluido(float densidad_fluido)
{
 	densidad_fluido_ = densidad_fluido;
}
double Presion::setGravedad(float gravedad)
{
	gravedad_ = gravedad;
}
double Presion::getPresionAbsoluta(void) const
{
	return (presion_superficial_ + (densidad_fluido_*gravedad_*profundidad_));
}
double Presion::getPresionManometrica(void) const
{
	return (-densidad_fluido_*gravedad_*profundidad_);
}
void Presion::print(void) const
{
	std::cout << "Profundidad: " << profundidad_ << "\n" << "Presion superficial: "<< presion_superficial_ << "\n" << "Densidad fluido: " << densidad_fluido_ << "\n" << "Gravedad: " << gravedad_ << "\n";
}
