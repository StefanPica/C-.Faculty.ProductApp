//
// Created by Stefan on 30/05/2023.
//

#include "CodeValidator.h"
#include "CodeValidator.h"
#include "FileRepo.h"
#include <cctype>
FileRepo repo("file.txt");

bool CodeValidator::apartine(int cod) {
    for(auto enti:repo.getAll()){
        if(enti.getId() == cod) {
            return false;
        }

    }
    return true;
}

bool CodeValidator::isInteger(const std::string& value) {
    for (char c : value) {
        if (!std::isdigit(c)) {
            return false;
        }
    }
    return true;
}



bool CodeValidator::isInteger(int value)  {
    std::string strValue = std::to_string(value);
    return isInteger(strValue);
}


bool CodeValidator::validate(int cod) {
    if(cod>=0 && apartine(cod) && isInteger(cod)){
        return true;
    }
    return false;
}
