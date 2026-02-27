# mem-class
Un repositorio para el ejemplo de manejo y verificación de memoria dinámica


## Cosas que hemos aprendido

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

