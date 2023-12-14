#include <iostream>
#include <string>
#include <stdexcept>

class FormatoFechaInvalido : public std::exception {
public:
    const char* what() const noexcept override {
            return "Error: Formato de fecha inválido.";
    }
};
