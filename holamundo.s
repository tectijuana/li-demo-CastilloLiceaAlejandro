 .data                    # datos
 
 hola:
   .string    "Hola, mundo!\n"
   hola_len = . - hola
 
 .text                    # aqui vive el codigo
   .global _start
 
 _start:
     li      0, 4              # llamada al sistema 4 (sys_write)
     li      3, 1              # arg. 1: descriptor de archivo (stdout)
     lis     4, hola@ha        # arg. 2: puntero a la cadena (parte alta)
     addi    4, 4,hola@l      # sumamos la parte baja del mismo
     li      5, hola_len       # arg. 3: longitud de la cadena
     sc                         # llamamos al sistema
     nop
     li      3, 0            # el valor que vamos a devolver
     li      0, 1            # llamada al sistema sys_exit
     sc
     nop
