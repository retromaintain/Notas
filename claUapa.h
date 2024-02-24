#pragma once

//Utilizando el form MyForm.h para el diseño de la interfaz

using namespace System;

//Clase para calcular la nota final de un participante
public ref class claUapa
{
private:
    float Examen;
    float Plataforma;
    float ActitudesYValores;
    float TrabajoFinal;

public:
    // Constructor
    claUapa(float examen, float plataforma, float actitudesYValores, float trabajoFinal)
    {
        Examen = examen;
        Plataforma = plataforma;
        ActitudesYValores = actitudesYValores;
        TrabajoFinal = trabajoFinal;
    }

    // Método para calcular la nota final
    float calcularNota()
    {
        return (Examen + Plataforma + ActitudesYValores + TrabajoFinal);
    }

    // Método para determinar si el participante aprobó o reprobó
    String^ calcularResultado()
    {
        float notaFinal = calcularNota();
        if (notaFinal >= 70)
            return "Aprobado";
        else
            return "Reprobado";
    }

    // Método para determinar el literal correspondiente a la nota obtenida
    String^ calcularLiteral()
    {
        float notaFinal = calcularNota();
        if (notaFinal >= 90)
            return "A";
        else if (notaFinal >= 80)
            return "B";
        else if (notaFinal >= 70)
            return "C";
        else if (notaFinal >= 60)
            return "D";
        else
            return "F";
    }
};
