#pragma once

#if defined(NDEBUG)&&defined(_DLL)

#include <crtversion.h>

#ifndef _VCRUNTIME_H
#define __NO_LTL_LIB
#endif

//�رճ��õ�pintfϵ�к�����������������Ϊ�ϰ汾û��__stdio_common_vswscanfϵ�к���
#define _NO_CRT_STDIO_INLINE


#pragma comment(linker, "/nodefaultlib:msvcrt.lib")
#pragma comment(linker, "/nodefaultlib:msvcprt.lib")


#if _VC_CRT_MAJOR_VERSION ==14 && _VC_CRT_MINOR_VERSION==0
#define __ltlversion "140"
#elif _VC_CRT_MAJOR_VERSION ==14 && _VC_CRT_MINOR_VERSION== 10
#define __ltlversion "141"
#endif

#ifdef _ATL_XP_TARGETING
//XPģʽ����ģʽ�ܶ���������Բ����¼�ʵ�֣�����XP��֧�ֵ�һЩ������̬����
#define __ltlversionxp "xp"
#define _ACRTXPIMP extern
#else //_ATL_XP_TARGETING else
//Ĭ��ģʽ����ģʽ�����������Խ�ʹ��Vista��APIʵ�֣����ܸ���
#define __ltlversionxp
#define _ACRTXPIMP __declspec(dllimport)
#endif //_ATL_XP_TARGETING

#ifdef __ltlversion

#pragma comment(lib,"vc" __ltlversion __ltlversionxp ".lib")

#ifndef __NO_LTL_LIB
/*
__NO_LTL_LIB �꣬����ȡ����ltlXXX.lib�����ã�ȡ�����ú����������Ա�ø�С�����Ǳ����ֶ���cpp include _msvcrt.cpp�����򽫱���ʧ��
ltlXXX.lib��_msvcrt.cpp�ľ�̬�� �����ϣ���ֶ�����_msvcrt.cpp����ô���ڶ���.h���ʼ include <_msvcrt.h> ���� ֱ���ڹ��̶��� __NO_LTL_LIB ��
*/
#pragma comment(lib,"ltl" __ltlversion __ltlversionxp ".lib")
#endif //__NO_LTL_LIB

#endif //__ltlversion

//����Windows Vista ��̬�� msvcrt.dll
#pragma comment(lib,"msvcrt_base.lib")

#endif //NDEBUG&&_DLL