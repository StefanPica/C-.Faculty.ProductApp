//
// Created by Stefan on 30/05/2023.
//

#ifndef C___FINALLAB_CODEEXCEPTION_H
#define C___FINALLAB_CODEEXCEPTION_H

#include <iostream>

using namespace std;
class CodException : public std::exception {
private:
    std::string message;

public:
    explicit CodException(const std::string& errorMessage) : message(errorMessage) {}

    const char* what() const noexcept override {
        return message.c_str();
    }
};

#endif //C___FINALLAB_CODEEXCEPTION_H
