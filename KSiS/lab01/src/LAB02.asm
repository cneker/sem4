        .MODEL Tiny
        .STACK 100h

        .DATA
Surname     DB  'Kotashevich',13,10,'$'

        .CODE
        mov    ax, @Data
        mov    ds, ax

        mov    ah, 40h
        mov    bx, 1
        mov    dx, OFFSET Surname
        mov    cx, 5
        int    21h

        mov    ah, 02h
        mov    dl, 10
        int    21h

        mov    ah, 9h
        mov    cx, 4

    mark:
        mov    dx, OFFSET Surname
        int    21h
        loop   mark

        mov    ax, 4C00h
        int    21h

        END