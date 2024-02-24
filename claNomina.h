#pragma once

//Utilizando el form MyForm1.h para el dise�o de la interfaz


using namespace System;

public ref class claNomina
{
private:
    float sueldoBruto;
    float porcentajeAfp;
    float porcentajeArs;
    float porcentajeIsr;

public:
    // Constructor
    claNomina(float sueldo, float afp, float ars, float isr)
    {
        sueldoBruto = sueldo;
        porcentajeAfp = afp;
        porcentajeArs = ars;
        porcentajeIsr = isr;
    }

    // M�todo para calcular el descuento de AFP
    float calcularAfp()
    {
        return sueldoBruto * (porcentajeAfp / 100);
    }

    // M�todo para calcular el descuento de ARS
    float calcularArs()
    {
        return sueldoBruto * (porcentajeArs / 100);
    }

    // M�todo para calcular el descuento de ISR
    float calcularIsr()
    {
        // Asumiendo que el ISR se calcula sobre el sueldo bruto menos el descuento de AFP y ARS
        float sueldoNetoDescontado = sueldoBruto - calcularAfp() - calcularArs();
        return sueldoNetoDescontado * (porcentajeIsr / 100);
    }

    // M�todo para calcular el total de descuento (AFP + ARS + ISR)
    float calcularTotalDescuento()
    {
        return calcularAfp() + calcularArs() + calcularIsr();
    }

    // M�todo para calcular el sueldo neto (sueldo bruto - total descuento)
    float calcularSueldoNeto()
    {
        return sueldoBruto - calcularTotalDescuento();
    }
};
