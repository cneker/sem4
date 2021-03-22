    .MODEL Tiny
    .STACK 100h

    .DATA
Msq  DB  'Hello.',13,10,'$'

    .CODE
    mov    ax, @Data
    mov    ds, ax

    mov    ah, 9
    mov    dx, OFFSET Msq
    int    21h

    mov    ax, 4C00h
    int    21h

    END