#pragma once

#if defined(NDEBUG)&&defined(_DLL)


#ifndef _VCRUNTIME_H
/*
__NO_LTL_LIB �꣬����ȡ����ltlXXX.lib�����ã�ȡ�����ú����������Ա�ø�С�����Ǳ����ֶ���cpp����_msvcrt.cpp�����򽫱���ʧ��
ltlXXX.lib��_msvcrt.cpp�ľ�̬��

���ϣ���ֶ�����_msvcrt.cpp����ô���ڶ���.h���ʼ include <_msvcrt.h> ���� ֱ���ڹ��̶��� __NO_LTL_LIB ��
*/
#define __NO_LTL_LIB
#endif

//�رճ��õ�pintfϵ�к�����������������Ϊ�ϰ汾û��__stdio_common_vswscanfϵ�к���
#define _NO_CRT_STDIO_INLINE


#pragma comment(linker, "/nodefaultlib:msvcrt.lib")
#pragma comment(linker, "/nodefaultlib:msvcprt.lib")




#ifdef _ATL_XP_TARGETING
//XPģʽ����ģʽ�ܶ���������Բ����¼�ʵ�֣�����XP��֧�ֵ�һЩ������̬����
#if _MSC_VER == 1900
#pragma comment(lib,"vc140xp.lib")

#ifndef __NO_LTL_LIB
#pragma comment(lib,"ltl140xp.lib")
#endif //__NO_LTL_LIB

#elif _MSC_VER == 1910
#pragma comment(lib,"vc141xp.lib")

#ifndef __NO_LTL_LIB
#pragma comment(lib,"ltl141xp.lib")
#endif //__NO_LTL_LIB

#endif
#define _ACRTXPIMP extern
#else
//Ĭ��ģʽ����ģʽ�����������Խ�ʹ��Vista��APIʵ�֣����ܸ���
#if _MSC_VER == 1900
#pragma comment(lib,"vc140.lib")

#ifndef __NO_LTL_LIB
#pragma comment(lib,"ltl140.lib")
#endif //__NO_LTL_LIB

#elif _MSC_VER == 1910

#pragma comment(lib,"vc141.lib")

#ifndef __NO_LTL_LIB
#pragma comment(lib,"ltl141.lib")
#endif
#endif //__NO_LTL_LIB

#define _ACRTXPIMP __declspec(dllimport)
#endif


//����Windows Vista ��̬�� msvcrt.dll
#pragma comment(lib,"msvcrt_base.lib")

#endif //NDEBUG&&_DLL