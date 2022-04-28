.model small
.stack 100h
.data
    maintitle db "MAIN MENU$"
    option1 db "* Student Information$"
    option2 db "* Subject Information$"
    option3 db "* Marks Information$"
    option4 db "* Quit Program$"
    choice db "Enter Choice :$"
.code

Main proc
    mov ax,@data
    mov ds,ax

    mov ah,09h ; display a string function
    mov dx,offset maintitle
    int 21h

    mov dl, 10 ; ascii new line
    mov ah, 02h
    int 21h

    mov ah,09h
    mov dx,offset option1
    int 21h

    mov dl, 10 ; ascii new line
    mov ah, 02h
    int 21h

    mov ah,09h
    mov dx,offset option2
    int 21h

    mov dl, 10 ; ascii new line
    mov ah, 02h
    int 21h

    mov ah,09h
    mov dx,offset option3
    int 21h

    mov dl, 10 ; ascii new line
    mov ah, 02h
    int 21h

    mov ah,09h
    mov dx,offset option4
    int 21h

    mov dl, 10 ; ascii new line
    mov ah, 02h
    int 21h

    mov ah,09h
    mov dx,offset choice
    int 21h

    mov dl, 10 ; ascii new line
    mov ah, 02h
    int 21h
    
    mov ah,1 ; call DOS to read a key
    int 21h ; from keyboard, store in AL
    
    mov ah, 4ch         ; DOS: terminate program
    mov al, 0           ; return code 0
    int 21h             ; syscall

Main endp
End main