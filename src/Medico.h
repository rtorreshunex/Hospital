//
// Created by ruben on 12/02/23.
//

#include <iostream>
#include <string>

using namespace std;

#ifndef MEDICO_H
#define MEDICO_H


class Medico {
private:
    // Attributes
    string name;
    string lastname;
    string specialty;
public:
    // Constructors
    Medico();
    Medico(string name, string lastname, string specialty);
    Medico(const Medico &medico);

    // Methods
    void mostrar();

    // Getters
    string getName();
    string getLastname();
    string getSpecialty();

    // Setters
    void setName(string name);
    void setLastname(string lastname);
    void setSpecialty(string specialty);

    // Destructors
    ~Medico();
};


#endif //MEDICO_H