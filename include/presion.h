// The point class header
#ifndef PRESION_H
#define PRESION_H

class Presion 
{
private: 
	double profundidad_;
	double presion_superficial_ ;
	double densidad_fluido_;
	double gravedad_;

public: 
	Presion(double profundidad, double presion_superficial, double densidad_fluido, double gravedad);
	double getProfundidad(void) const;
	double getPresionSuperficial(void) const;
	double getDensidadFluido(void) const;
	double getGravedad(void) const;
	double setProfundidad(float profundidad);
	double setPresionSuperficial(float presion_superficial);
	double setDensidadFluido(float densidad_fluido);
	double setGravedad(float gravedad);
	double getPresionAbsoluta(void) const;
	double getPresionManometrica(void) const;
	void print(void) const;
};
#endif 
