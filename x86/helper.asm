;VC-LTL x86��ಿ��

.model	flat

_TEXT	SEGMENT

;����˺�������Ϊ�°汾��terminate�淶�����C���˴������ڽ��terminate������ͻ����
extern ?terminate@@YAXXZ:dword
_terminate PROC
jmp ?terminate@@YAXXZ
_terminate ENDP

_TEXT	ENDS

END