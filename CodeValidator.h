//
// Created by Stefan on 30/05/2023.
//

#ifndef C___FINALLAB_CODEVALIDATOR_H
#define C___FINALLAB_CODEVALIDATOR_H

#include <iostream>
using namespace  std;
class CodeValidator {
public:
    static bool validate(int cod);
    static bool apartine(int cod);
    static bool isInteger(int value);
    static bool isInteger(const std::string& value);

};

#endif //C___FINALLAB_CODEVALIDATOR_H
