.model small
.stack 100h
.code
MAIN    PROC
;****** display a prompt
    mov ah,2    ; display a character function
    mov dl,'?'  ; character ? is displayed
    int 21h ; call DOS to display

; ****** end program
    mov ah,4Ch  ; DOS exit function
    int 21h ; exit to DOS
MAIN    endp
    end MAIN
