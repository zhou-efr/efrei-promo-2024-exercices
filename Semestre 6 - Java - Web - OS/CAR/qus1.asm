.model small
.stack 100h
.data
    msg db "I Love Assembly Language$"
.code

Main proc
    mov ax,@data
    mov ds,ax

    mov ah,09h
    mov dx,offset msg
;   lea dx,msg
    int 21h

    mov ah,4ch
    int 21h

Main endp
End main