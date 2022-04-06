.model small
.stack 100h
.data
    panda db "Giant Panda$"
.code

Main proc
    mov ax,@data
    mov ds,ax

    ; Display an ASCII character on screen using DOS interrupt 21h.
    mov dl, 235 ; weird ascii
    mov ah, 02h
    int 21h

    ; Display an ASCII character on screen using BIOS interrupt 10h.
    mov dl, 10 ; ascii new line
    mov ah, 02h
    int 10h

    mov dl, 13 ; ascii return carrier
    mov ah, 02h
    int 21h

    ; Display string on screen using DOS interrupt 21h
    mov ah,09h ; display a string function
    mov dx,offset panda
    int 21h

    mov dl, 10 ; ascii new line
    mov ah, 02h
    int 21h

    ; Read String from keyboard using DOS interrupt 21h
    mov ah,1 ; call DOS to read a key
    int 21h ; from keyboard, store in AL
    mov bl,al ; save character in BL

    mov dl, 10 ; ascii new line
    mov ah, 02h
    int 21h

    mov dl, bl
    mov ah, 02h
    int 21h
    
    mov ah,4ch
    int 21h

Main endp
End main