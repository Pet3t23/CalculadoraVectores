#include "App.h"
#include <iostream>
#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"



App::App() 
{
    
}

App::~App() 
{
    
}

void App::Run() {
    
    int choice;
    bool isRunning = true;

    while (isRunning) 
    {
        
        std::cout << "Menú:" << std::endl;
        std::cout << "1. Realizar operaciones con Vector2" << std::endl;
        std::cout << "2. Realizar operaciones con Vector3" << std::endl;
        std::cout << "3. Realizar operaciones con Vector4" << std::endl;
        std::cout << "4. Salir" << std::endl;
        std::cout << "Ingrese su elección: ";

        
        std::cin >> choice;

        
        switch (choice) {
        case 1:
        {
            float x1, y1, x2, y2;
            std::cout << "Ingrese las componentes x e y del primer Vector2:" << std::endl;
            std::cout << "x: ";
            std::cin >> x1;
            std::cout << "y: ";
            std::cin >> y1;

            std::cout << "Ingrese las componentes x e y del segundo Vector2:" << std::endl;
            std::cout << "x: ";
            std::cin >> x2;
            std::cout << "y: ";
            std::cin >> y2;

            
            Vector2 vectorA(x1, y1);
            Vector2 vectorB(x2, y2);

            
            Vector2 suma = vectorA + vectorB;
            Vector2 resta = vectorA - vectorB;
            Vector2 multiplicacion = vectorA * 2.0f; 
            Vector2 division = vectorA / 2.0f; 
            float dotProduct = vectorA.Dot(vectorB);
            float magnitude = vectorA.Magnitude();
            Vector2 normalized = vectorA.Normalize();

            
            std::cout << "Suma: (" << suma.x << ", " << suma.y << ")" << std::endl;
            std::cout << "Resta: (" << resta.x << ", " << resta.y << ")" << std::endl;
            std::cout << "Multiplicación: (" << multiplicacion.x << ", " << multiplicacion.y << ")" << std::endl;
            std::cout << "División: (" << division.x << ", " << division.y << ")" << std::endl;
            std::cout << "Producto Punto: " << dotProduct << std::endl;
            std::cout << "Magnitud: " << magnitude << std::endl;
            std::cout << "Normalizado: (" << normalized.x << ", " << normalized.y << ")" << std::endl;
        }

        case 2:
        {
            float x, y, z;
            std::cout << "Ingrese las componentes x, y y z del Vector3:" << std::endl;
            std::cout << "x: ";
            std::cin >> x;
            std::cout << "y: ";
            std::cin >> y;
            std::cout << "z: ";
            std::cin >> z;

            
            Vector3 vectorA(x, y, z);
            Vector3 vectorB(1.0f, 2.0f, 3.0f); 

            
            Vector3 suma = vectorA + vectorB;
            Vector3 resta = vectorA - vectorB;
            Vector3 multiplicacion = vectorA * 2.0f; 
            Vector3 division = vectorA / 2.0f; 
            Vector3 crossProduct = vectorA.Cross(vectorB);
            float dotProduct = vectorA.Dot(vectorB);
            float magnitude = vectorA.Magnitude();
            Vector3 normalized = vectorA.Normalize();

            
            std::cout << "Suma: (" << suma.x << ", " << suma.y << ", " << suma.z << ")" << std::endl;
            std::cout << "Resta: (" << resta.x << ", " << resta.y << ", " << resta.z << ")" << std::endl;
            std::cout << "Multiplicación: (" << multiplicacion.x << ", " << multiplicacion.y << ", " << multiplicacion.z << ")" << std::endl;
            std::cout << "División: (" << division.x << ", " << division.y << ", " << division.z << ")" << std::endl;
            std::cout << "Producto Cruz: (" << crossProduct.x << ", " << crossProduct.y << ", " << crossProduct.z << ")" << std::endl;
            std::cout << "Producto Punto: " << dotProduct << std::endl;
            std::cout << "Magnitud: " << magnitude << std::endl;
            std::cout << "Normalizado: (" << normalized.x << ", " << normalized.y << ", " << normalized.z << ")" << std::endl;
        }
            break;
        
        case 3:
            
        {
            float x, y, z, w;
            std::cout << "Ingrese las componentes x, y, z y w del Vector4:" << std::endl;
            std::cout << "x: ";
            std::cin >> x;
            std::cout << "y: ";
            std::cin >> y;
            std::cout << "z: ";
            std::cin >> z;
            std::cout << "w: ";
            std::cin >> w;

            
            Vector4 vectorA(x, y, z, w);
            Vector4 vectorB(1.0f, 2.0f, 3.0f, 4.0f); 

          
            Vector4 suma = vectorA + vectorB;
            Vector4 resta = vectorA - vectorB;
            Vector4 multiplicacion = vectorA * 2.0f; 
            Vector4 division = vectorA / 2.0f; 
            float dotProduct = vectorA.Dot(vectorB);
            float magnitude = vectorA.Magnitude();
            Vector4 normalized = vectorA.Normalize();

            
            std::cout << "Suma: (" << suma.x << ", " << suma.y << ", " << suma.z << ", " << suma.w << ")" << std::endl;
            std::cout << "Resta: (" << resta.x << ", " << resta.y << ", " << resta.z << ", " << resta.w << ")" << std::endl;
            std::cout << "Multiplicación: (" << multiplicacion.x << ", " << multiplicacion.y << ", " << multiplicacion.z << ", " << multiplicacion.w << ")" << std::endl;
            std::cout << "División: (" << division.x << ", " << division.y << ", " << division.z << ", " << division.w << ")" << std::endl;
            std::cout << "Producto Punto: " << dotProduct << std::endl;
            std::cout << "Magnitud: " << magnitude << std::endl;
            std::cout << "Normalizado: (" << normalized.x << ", " << normalized.y << ", " << normalized.z << ", " << normalized.w << ")" << std::endl;
        }
            break;
        case 4:
            isRunning = false; 
            break;
        default:
            std::cout << "Opción no válida. Intente de nuevo." << std::endl;
        }
    }

    
}
