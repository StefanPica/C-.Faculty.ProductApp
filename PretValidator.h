//
// Created by Stefan on 30/05/2023.
//

#ifndef C___FINALLAB_PRETVALIDATOR_H
#define C___FINALLAB_PRETVALIDATOR_H

using namespace std;
#include <iostream>
class PretValidator {
public:
    static bool validate(int pret);
    static bool isInteger(int value);
    static bool isInteger(const std::string& value);
};


#endif //C___FINALLAB_PRETVALIDATOR_H
