# mem-class
Un repositorio para el ejemplo de manejo y verificación de memoria dinámica


## Cosas que hemos aprendido (27/2)

1. Crear repo, y clonarlo
2. Creamos la estructura de los directorios y archivos con los que vamos a trabajar
    mkdir, touch
3. Editamos devcontainer.json Dockerfile
4. Encendimos el contenedor
5. Conectar el contenedor con GitHub via SSH
6. VSC, abrir el command palette -- Cmd + Shft + P
7. Copiamos codigo de person.cpp/.h y main.cpp
8. Compilamos usando make:
   1. `make` y corrimos `./app`
   2. `make valgrind` y corrimos nada, make corrió el programa
   3. `make run-asan` y corrimos nada, make corrió el programa
9. Detectar los memory leaks debidos a un mal `SetName` y a no liberar la memoria.

## Y Ahora (6/3)
1. Repaso de contenedores
2. Makefile
3. Valgrind y ASan
4. Regla de tres en el programa de Person
   1. Destructor --> ASan
   2. Constructor de Copia --> ASan
   3. Sobrecarga de operador de asignación --> ASan --> Valgrind
5. Regla de Cinco
   1. Move Constructor
   2. Move Copy Assignment operator
   3. `std::move`




