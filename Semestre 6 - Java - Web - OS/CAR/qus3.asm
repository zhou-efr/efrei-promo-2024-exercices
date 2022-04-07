.model small
.stack 100h
.data
    panda db "Giant Panda$"
.code

Main proc
    mov ax,@data
    mov ds,ax
    

    ; Display an ASCII character on screen using DOS interrupt 21h.
    mov dl, 112 ; p character
    mov ah, 02h ; character display
    int 21h ; DOS interrupt 21h
    
    ; Display an ASCII character on screen using DOS interrupt 10h.
    mov ah,0Eh  ; bios function 0eh to teletype character
    mov al,235 ; al will contain the value of the memory location pointed by si
    int 10h     ; bios interrupt 10h

    mov dl, 10
    mov ah, 02h
    int 21h

    ; Display string on screen using DOS interrupt 21h
    mov ah,09h ; display a string function
    mov dx,offset panda
    int 21h

    mov dl, 10
    mov ah, 02h
    int 21h

    ; Read String from keyboard using DOS interrupt 21h
    mov ah,0Ah ; Interrupt 21h/Function 0Ah (DOS)
    int 21h
    
    mov ah,4ch
    int 21h

Main endp
End main