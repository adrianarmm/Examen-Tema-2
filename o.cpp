#include <iostream>
#include <string>
#include <stdexcept>

class FormatoFechaInvalido : public std::exception {
public:
    const char* what() const noexcept override {
            return "Error: Formato de fecha inválido.";
    }
};

void verificarFormatoFecha(const std::string& fecha) {

    if (fecha.size() != 10 || fecha[2] != '/' || fecha[5] != '/') {
        throw FormatoFechaInvalido();
    }


}
