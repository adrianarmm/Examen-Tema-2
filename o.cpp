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

int main() {
    try {
        std::string fecha = "20/08/2005";
        verificarFormatoFecha(fecha);
        std::cout << "Fecha válida: " << fecha << std::endl;

        fecha = "20082005"; // Formato inválido
        verificarFormatoFecha(fecha);
        std::cout << "Fecha válida: " << fecha << std::endl;
    } catch (const FormatoFechaInvalido& e) {
        std::cout << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Error inesperado: " << e.what() << std::endl;
    }
    return 0;
}