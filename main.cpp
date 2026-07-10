#include <iostream>

int main()
{
    int opcion;

    do
    {
        std::cout << "=========================" << std::endl;
        std::cout << "      TASK MANAGER       " << std::endl;
        std::cout << "=========================" << std::endl;
        std::cout << std::endl;
        std::cout << std::endl;
        std::cout << "1. Agregar tarea" << std::endl;
        std::cout << "2. Listar tareas" << std::endl;
        std::cout << "3. Salir " << std::endl;
        std::cout << std::endl;
        std::cout << "Selecciona una opcion: " << std::endl;
        std::cin >> opcion;
        
        switch (opcion)
        {
        case 1:
            std::cout << "Has elegido agregar tarea " << std::endl;
            std::cout << std::endl;
            break;
        case 2:
            std::cout << "Mostrando Tareas... " << std::endl;
            std::cout << std::endl;
            break;
        case 3:
            std::cout << "Hasta luego. " << std::endl;
            std::cout << std::endl;
            break;

        default:
            std::cout << "Opcion invalida" << std::endl;
            break;
        }
    } while (opcion != 3);

    return 0;
}