#pragma once

#if NDEBUG&&_DLL

//�رճ��õ�pintfϵ�к�����������������Ϊ�ϰ汾û��__stdio_common_vswscanfϵ�к���
#define _NO_CRT_STDIO_INLINE

#include <corecrt.h>
#pragma comment(linker, "/nodefaultlib:msvcrt.lib")
#pragma comment(linker, "/nodefaultlib:msvcprt.lib")



#ifdef _ATL_XP_TARGETING
//XPģʽ����ģʽ�ܶ���������Բ����¼�ʵ�֣�����XP��֧�ֵ�һЩ������̬����
#if _MSC_VER == 1900
#pragma comment(lib,"vc140xp.lib")
#elif _MSC_VER == 1910
#pragma comment(lib,"vc141xp.lib")
#endif
#define _ACRTXPIMP extern
#else
//Ĭ��ģʽ����ģʽ�����������Խ�ʹ��Vista��APIʵ�֣����ܸ���
#if _MSC_VER == 1900
#pragma comment(lib,"vc140.lib")
#elif _MSC_VER == 1910
#pragma comment(lib,"vc141.lib")
#endif
#define _ACRTXPIMP _ACRTIMP
#endif


//����Windows Vista ��̬�� msvcrt.dll
#pragma comment(lib,"msvcrt_base.lib")

#endif