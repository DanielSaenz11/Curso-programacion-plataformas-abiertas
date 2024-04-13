#!/bin/bash

directorioObjetivo="/home/dsaenz/Documentos/ProyectosVSCode/Laboratorio2/objetivo"

if [ -d $directorioObjetivo ]; then

    while true; do
        cambios=$(inotifywait -q -e create,modify,delete $directorioObjetivo)

        echo "$(date '+%D %T') $cambios" >> "../cambiosDirectorio.txt"
    done
else
    echo "Directorio no existe"
    exit 1
fi
