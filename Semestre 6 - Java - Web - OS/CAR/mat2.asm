;(7 - 2) + (8 * 3) + 5
.model small
.stack 100h

.data
    msg db '(7 - 2) + (8 * 3) + 5 = $'

.code
start:
    ; -- Print operation --
    mov ax, @data
    mov ds, ax          ; set ds to point to data segment
    mov dx, offset msg  ; point to the message
    mov ah, 9           ; DOS: print string
    int 21h             ; syscall

    ; -- 12 * 60 --
    mov ax, 7          ; set ax to 12
    sub ax, 2          ; subtract 2 from ax
    mov cx, ax

    ; -- 720 / 8 --
    mov ax, 8           ; set bx to 8
    mov bx, 3
    mul bx              ; divide ax by bx in ax = 90

    ; -- 90 + 5  --
    add ax, cx           ; add 5 to ax = 95

    add ax, 5           ; add 5 to ax = 95

    ; -- Print number --
    mov bx, 10          ; set bx to 10
    div bx              ; divide ax by bx in ax and put the rest in dx

    mov bx, dx          ; put dx int bx = 5
    mov dx, ax          ; put ax in dx = 9
    add dx, 48          ; add 48 to dx (ascii offset)
    mov ah, 2           ; DOS: print char
    int 21h             ; syscall

    mov dx, bx          ; put bx in dx = 5
    add dx, 48          ; add 48 to dx (ascii offset)
    mov ah, 2           ; DOS: print char
    int 21h             ; syscall

    ; -- Terminate the program --
    mov ah, 4ch         ; DOS: terminate program
    mov al, 0           ; return code 0
    int 21h             ; syscall

END start