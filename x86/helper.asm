;VC-LTL��ಿ��

.model	flat

_TEXT	SEGMENT
extern ?terminate@@YAXXZ:near
;����˺�������Ϊ�°汾��terminate�淶�����C���˴������ڽ��terminate������ͻ����

_terminate PROC
call ?terminate@@YAXXZ
ret
_terminate ENDP

_TEXT	ENDS

END