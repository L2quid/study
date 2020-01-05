TITLE 구구단 프로그램           (gugu.asm)

; Program Description: 구구단(20단 까지)
; Author:1624044 이재웅
; Creation Date:2019.10.14

INCLUDE Irvine32.inc                    

.DATA
str1 BYTE " X ", 0		
str2 BYTE " = ", 0
value1 DWORD 1
value2 DWORD 1
  
.CODE  

MAIN PROC

INERLOOP = 20
OUTERLOOP = 20

mov ecx,OUTERLOOP            
 
OUTER_LOOP:
	push ecx                                   
	mov ecx,INERLOOP      
	mov ebx,0
	
	INER_LOOP:
		mov eax, value1
		call WriteDec  
		mov edx, OFFSET str1                                 
		call WriteString					
		mov eax, value2
		call WriteDec
		mov edx, OFFSET str2                                 
		call WriteString  
		add ebx,value1
		mov eax,ebx
		call WriteDec
		call crlf
		inc value2
		LOOP INER_LOOP      		                 
	mov value2,1
	inc value1
	call crlf
	pop ecx                               	
	LOOP OUTER_LOOP                             	

exit                                        

MAIN ENDP
END MAIN
