#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/jvalue.h"

namespace System { class String; }

#define UNITYENGINE_ANDROIDJNI_CALLBOOLEANMETHOD_OFFSET UNITYSDK_OFFSET(0x1B2572A0)
#define UNITYENGINE_ANDROIDJNI_CALLCHARMETHOD_OFFSET UNITYSDK_OFFSET(0x1B2572D0)
#define UNITYENGINE_ANDROIDJNI_CALLDOUBLEMETHOD_OFFSET UNITYSDK_OFFSET(0x1B2572F0)
#define UNITYENGINE_ANDROIDJNI_CALLFLOATMETHOD_OFFSET UNITYSDK_OFFSET(0x1B2572E0)
#define UNITYENGINE_ANDROIDJNI_CALLINTMETHOD_OFFSET UNITYSDK_OFFSET(0x1B257290)
#define UNITYENGINE_ANDROIDJNI_CALLLONGMETHOD_OFFSET UNITYSDK_OFFSET(0x1B257300)
#define UNITYENGINE_ANDROIDJNI_CALLOBJECTMETHOD_OFFSET UNITYSDK_OFFSET(0x1B257280)
#define UNITYENGINE_ANDROIDJNI_CALLSBYTEMETHOD_OFFSET UNITYSDK_OFFSET(0x1B2572C0)
#define UNITYENGINE_ANDROIDJNI_CALLSHORTMETHOD_OFFSET UNITYSDK_OFFSET(0x1B2572B0)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICBOOLEANMETHOD_OFFSET UNITYSDK_OFFSET(0x1B257350)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICCHARMETHOD_OFFSET UNITYSDK_OFFSET(0x1B257380)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICDOUBLEMETHOD_OFFSET UNITYSDK_OFFSET(0x1B2573A0)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICFLOATMETHOD_OFFSET UNITYSDK_OFFSET(0x1B257390)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICINTMETHOD_OFFSET UNITYSDK_OFFSET(0x1B257340)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICLONGMETHOD_OFFSET UNITYSDK_OFFSET(0x1B2573B0)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICOBJECTMETHOD_OFFSET UNITYSDK_OFFSET(0x1B257330)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICSBYTEMETHOD_OFFSET UNITYSDK_OFFSET(0x1B257370)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICSHORTMETHOD_OFFSET UNITYSDK_OFFSET(0x1B257360)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICSTRINGMETHOD_OFFSET UNITYSDK_OFFSET(0x1B257320)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICVOIDMETHOD_OFFSET UNITYSDK_OFFSET(0x1B2573C0)
#define UNITYENGINE_ANDROIDJNI_CALLSTRINGMETHOD_OFFSET UNITYSDK_OFFSET(0x1B257270)
#define UNITYENGINE_ANDROIDJNI_CALLVOIDMETHOD_OFFSET UNITYSDK_OFFSET(0x1B257310)
#define UNITYENGINE_ANDROIDJNI_DELETEGLOBALREF_OFFSET UNITYSDK_OFFSET(0x1B257190)
#define UNITYENGINE_ANDROIDJNI_DELETELOCALREF_OFFSET UNITYSDK_OFFSET(0x1B2571D0)
#define UNITYENGINE_ANDROIDJNI_DELETEWEAKGLOBALREF_OFFSET UNITYSDK_OFFSET(0x1B2571B0)
#define UNITYENGINE_ANDROIDJNI_EXCEPTIONCLEAR_OFFSET UNITYSDK_OFFSET(0x1B257150)
#define UNITYENGINE_ANDROIDJNI_EXCEPTIONOCCURRED_OFFSET UNITYSDK_OFFSET(0x1B257140)
#define UNITYENGINE_ANDROIDJNI_FINDCLASS_OFFSET UNITYSDK_OFFSET(0x1B257120)
#define UNITYENGINE_ANDROIDJNI_FROMBOOLEANARRAY_OFFSET UNITYSDK_OFFSET(0x1B257510)
#define UNITYENGINE_ANDROIDJNI_FROMBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1B257520)
#define UNITYENGINE_ANDROIDJNI_FROMCHARARRAY_OFFSET UNITYSDK_OFFSET(0x1B257540)
#define UNITYENGINE_ANDROIDJNI_FROMDOUBLEARRAY_OFFSET UNITYSDK_OFFSET(0x1B257590)
#define UNITYENGINE_ANDROIDJNI_FROMFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x1B257580)
#define UNITYENGINE_ANDROIDJNI_FROMINTARRAY_OFFSET UNITYSDK_OFFSET(0x1B257560)
#define UNITYENGINE_ANDROIDJNI_FROMLONGARRAY_OFFSET UNITYSDK_OFFSET(0x1B257570)
#define UNITYENGINE_ANDROIDJNI_FROMREFLECTEDMETHOD_OFFSET UNITYSDK_OFFSET(0x1B257130)
#define UNITYENGINE_ANDROIDJNI_FROMSBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1B257530)
#define UNITYENGINE_ANDROIDJNI_FROMSHORTARRAY_OFFSET UNITYSDK_OFFSET(0x1B257550)
#define UNITYENGINE_ANDROIDJNI_GETARRAYLENGTH_OFFSET UNITYSDK_OFFSET(0x1B2575A0)
#define UNITYENGINE_ANDROIDJNI_GETFIELDID_OFFSET UNITYSDK_OFFSET(0x1B257210)
#define UNITYENGINE_ANDROIDJNI_GETMETHODID_OFFSET UNITYSDK_OFFSET(0x1B257200)
#define UNITYENGINE_ANDROIDJNI_GETOBJECTARRAYELEMENT_OFFSET UNITYSDK_OFFSET(0x1B2575E0)
#define UNITYENGINE_ANDROIDJNI_GETOBJECTCLASS_OFFSET UNITYSDK_OFFSET(0x1B2571F0)
#define UNITYENGINE_ANDROIDJNI_GETSTATICBOOLEANFIELD_OFFSET UNITYSDK_OFFSET(0x1B2573F0)
#define UNITYENGINE_ANDROIDJNI_GETSTATICCHARFIELD_OFFSET UNITYSDK_OFFSET(0x1B257410)
#define UNITYENGINE_ANDROIDJNI_GETSTATICDOUBLEFIELD_OFFSET UNITYSDK_OFFSET(0x1B257460)
#define UNITYENGINE_ANDROIDJNI_GETSTATICFIELDID_OFFSET UNITYSDK_OFFSET(0x1B257230)
#define UNITYENGINE_ANDROIDJNI_GETSTATICFLOATFIELD_OFFSET UNITYSDK_OFFSET(0x1B257450)
#define UNITYENGINE_ANDROIDJNI_GETSTATICINTFIELD_OFFSET UNITYSDK_OFFSET(0x1B257430)
#define UNITYENGINE_ANDROIDJNI_GETSTATICLONGFIELD_OFFSET UNITYSDK_OFFSET(0x1B257440)
#define UNITYENGINE_ANDROIDJNI_GETSTATICMETHODID_OFFSET UNITYSDK_OFFSET(0x1B257220)
#define UNITYENGINE_ANDROIDJNI_GETSTATICOBJECTFIELD_OFFSET UNITYSDK_OFFSET(0x1B2573E0)
#define UNITYENGINE_ANDROIDJNI_GETSTATICSBYTEFIELD_OFFSET UNITYSDK_OFFSET(0x1B257400)
#define UNITYENGINE_ANDROIDJNI_GETSTATICSHORTFIELD_OFFSET UNITYSDK_OFFSET(0x1B257420)
#define UNITYENGINE_ANDROIDJNI_GETSTATICSTRINGFIELD_OFFSET UNITYSDK_OFFSET(0x1B2573D0)
#define UNITYENGINE_ANDROIDJNI_GETSTRINGCHARS_OFFSET UNITYSDK_OFFSET(0x1B257260)
#define UNITYENGINE_ANDROIDJNI_NEWBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1B2575B0)
#define UNITYENGINE_ANDROIDJNI_NEWGLOBALREF_OFFSET UNITYSDK_OFFSET(0x1B257180)
#define UNITYENGINE_ANDROIDJNI_NEWLOCALREF_OFFSET UNITYSDK_OFFSET(0x1B2571C0)
#define UNITYENGINE_ANDROIDJNI_NEWOBJECTARRAY_OFFSET UNITYSDK_OFFSET(0x1B2575D0)
#define UNITYENGINE_ANDROIDJNI_NEWOBJECT_OFFSET UNITYSDK_OFFSET(0x1B2571E0)
#define UNITYENGINE_ANDROIDJNI_NEWSBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1B2575C0)
#define UNITYENGINE_ANDROIDJNI_NEWSTRINGFROMSTR_OFFSET UNITYSDK_OFFSET(0x1B257250)
#define UNITYENGINE_ANDROIDJNI_NEWSTRING_OFFSET UNITYSDK_OFFSET(0x1B257240)
#define UNITYENGINE_ANDROIDJNI_NEWWEAKGLOBALREF_OFFSET UNITYSDK_OFFSET(0x1B2571A0)
#define UNITYENGINE_ANDROIDJNI_POPLOCALFRAME_OFFSET UNITYSDK_OFFSET(0x1B257170)
#define UNITYENGINE_ANDROIDJNI_PUSHLOCALFRAME_OFFSET UNITYSDK_OFFSET(0x1B257160)
#define UNITYENGINE_ANDROIDJNI_SETOBJECTARRAYELEMENT_OFFSET UNITYSDK_OFFSET(0x1B2575F0)
#define UNITYENGINE_ANDROIDJNI_TOBOOLEANARRAY_OFFSET UNITYSDK_OFFSET(0x1B257470)
#define UNITYENGINE_ANDROIDJNI_TOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1B257480)
#define UNITYENGINE_ANDROIDJNI_TOCHARARRAY_OFFSET UNITYSDK_OFFSET(0x1B2574A0)
#define UNITYENGINE_ANDROIDJNI_TODOUBLEARRAY_OFFSET UNITYSDK_OFFSET(0x1B2574F0)
#define UNITYENGINE_ANDROIDJNI_TOFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x1B2574E0)
#define UNITYENGINE_ANDROIDJNI_TOINTARRAY_OFFSET UNITYSDK_OFFSET(0x1B2574C0)
#define UNITYENGINE_ANDROIDJNI_TOLONGARRAY_OFFSET UNITYSDK_OFFSET(0x1B2574D0)
#define UNITYENGINE_ANDROIDJNI_TOOBJECTARRAY_OFFSET UNITYSDK_OFFSET(0x1B257500)
#define UNITYENGINE_ANDROIDJNI_TOSBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1B257490)
#define UNITYENGINE_ANDROIDJNI_TOSHORTARRAY_OFFSET UNITYSDK_OFFSET(0x1B2574B0)

namespace UnityEngine
{
	inline static constexpr unsigned int AndroidJNI_TypeDefinitionIndex = 5685;

	class AndroidJNI : public ::System::Object
	{
	public:
		static ::System::IntPtr FindClass(::System::String* a1)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_FINDCLASS_OFFSET))(a1);
		}

		static ::System::IntPtr FromReflectedMethod(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_FROMREFLECTEDMETHOD_OFFSET))(a1);
		}

		static ::System::IntPtr ExceptionOccurred()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_EXCEPTIONOCCURRED_OFFSET))();
		}

		static ::System::Void ExceptionClear()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_EXCEPTIONCLEAR_OFFSET))();
		}

		static ::System::Int32 PushLocalFrame(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_PUSHLOCALFRAME_OFFSET))(a1);
		}

		static ::System::IntPtr PopLocalFrame(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_POPLOCALFRAME_OFFSET))(a1);
		}

		static ::System::IntPtr NewGlobalRef(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_NEWGLOBALREF_OFFSET))(a1);
		}

		static ::System::Void DeleteGlobalRef(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_DELETEGLOBALREF_OFFSET))(a1);
		}

		static ::System::IntPtr NewWeakGlobalRef(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_NEWWEAKGLOBALREF_OFFSET))(a1);
		}

		static ::System::Void DeleteWeakGlobalRef(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_DELETEWEAKGLOBALREF_OFFSET))(a1);
		}

		static ::System::IntPtr NewLocalRef(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_NEWLOCALREF_OFFSET))(a1);
		}

		static ::System::Void DeleteLocalRef(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_DELETELOCALREF_OFFSET))(a1);
		}

		static ::System::IntPtr NewObject(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_NEWOBJECT_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr GetObjectClass(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETOBJECTCLASS_OFFSET))(a1);
		}

		static ::System::IntPtr GetMethodID(::System::IntPtr a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETMETHODID_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr GetFieldID(::System::IntPtr a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETFIELDID_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr GetStaticMethodID(::System::IntPtr a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTATICMETHODID_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr GetStaticFieldID(::System::IntPtr a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTATICFIELDID_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr NewString(::System::String* a1)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_NEWSTRING_OFFSET))(a1);
		}

		static ::System::IntPtr NewStringFromStr(::System::String* a1)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_NEWSTRINGFROMSTR_OFFSET))(a1);
		}

		static ::System::String* GetStringChars(::System::IntPtr a1)
		{
			return ((::System::String*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTRINGCHARS_OFFSET))(a1);
		}

		static ::System::String* CallStringMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::String*(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSTRINGMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr CallObjectMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLOBJECTMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 CallIntMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLINTMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean CallBooleanMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLBOOLEANMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Int16 CallShortMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::Int16(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSHORTMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::SByte CallSByteMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::SByte(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSBYTEMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Char CallCharMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::Char(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLCHARMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Single CallFloatMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::Single(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLFLOATMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Double CallDoubleMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::Double(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLDOUBLEMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Int64 CallLongMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::Int64(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLLONGMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CallVoidMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLVOIDMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::String* CallStaticStringMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::String*(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSTATICSTRINGMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr CallStaticObjectMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSTATICOBJECTMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 CallStaticIntMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSTATICINTMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean CallStaticBooleanMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSTATICBOOLEANMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Int16 CallStaticShortMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::Int16(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSTATICSHORTMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::SByte CallStaticSByteMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::SByte(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSTATICSBYTEMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Char CallStaticCharMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::Char(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSTATICCHARMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Single CallStaticFloatMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::Single(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSTATICFLOATMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Double CallStaticDoubleMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::Double(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSTATICDOUBLEMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Int64 CallStaticLongMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::Int64(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSTATICLONGMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CallStaticVoidMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSTATICVOIDMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::String* GetStaticStringField(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::String*(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTATICSTRINGFIELD_OFFSET))(a1, a2);
		}

		static ::System::IntPtr GetStaticObjectField(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTATICOBJECTFIELD_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetStaticBooleanField(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTATICBOOLEANFIELD_OFFSET))(a1, a2);
		}

		static ::System::SByte GetStaticSByteField(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::SByte(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTATICSBYTEFIELD_OFFSET))(a1, a2);
		}

		static ::System::Char GetStaticCharField(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Char(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTATICCHARFIELD_OFFSET))(a1, a2);
		}

		static ::System::Int16 GetStaticShortField(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Int16(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTATICSHORTFIELD_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetStaticIntField(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTATICINTFIELD_OFFSET))(a1, a2);
		}

		static ::System::Int64 GetStaticLongField(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Int64(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTATICLONGFIELD_OFFSET))(a1, a2);
		}

		static ::System::Single GetStaticFloatField(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Single(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTATICFLOATFIELD_OFFSET))(a1, a2);
		}

		static ::System::Double GetStaticDoubleField(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Double(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTATICDOUBLEFIELD_OFFSET))(a1, a2);
		}

		static ::System::IntPtr ToBooleanArray(::Il2CppArray<::System::Boolean>* a1)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_TOBOOLEANARRAY_OFFSET))(a1);
		}

		static ::System::IntPtr ToByteArray(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_TOBYTEARRAY_OFFSET))(a1);
		}

		static ::System::IntPtr ToSByteArray(::Il2CppArray<::System::SByte>* a1)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::SByte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_TOSBYTEARRAY_OFFSET))(a1);
		}

		static ::System::IntPtr ToCharArray(::Il2CppArray<::System::Char>* a1)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_TOCHARARRAY_OFFSET))(a1);
		}

		static ::System::IntPtr ToShortArray(::Il2CppArray<::System::Int16>* a1)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::Int16>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_TOSHORTARRAY_OFFSET))(a1);
		}

		static ::System::IntPtr ToIntArray(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_TOINTARRAY_OFFSET))(a1);
		}

		static ::System::IntPtr ToLongArray(::Il2CppArray<::System::Int64>* a1)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::Int64>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_TOLONGARRAY_OFFSET))(a1);
		}

		static ::System::IntPtr ToFloatArray(::Il2CppArray<::System::Single>* a1)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_TOFLOATARRAY_OFFSET))(a1);
		}

		static ::System::IntPtr ToDoubleArray(::Il2CppArray<::System::Double>* a1)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::Double>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_TODOUBLEARRAY_OFFSET))(a1);
		}

		static ::System::IntPtr ToObjectArray(::Il2CppArray<::System::IntPtr>* a1, ::System::IntPtr a2)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::IntPtr>*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_TOOBJECTARRAY_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::System::Boolean>* FromBooleanArray(::System::IntPtr a1)
		{
			return ((::Il2CppArray<::System::Boolean>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_FROMBOOLEANARRAY_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* FromByteArray(::System::IntPtr a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_FROMBYTEARRAY_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::SByte>* FromSByteArray(::System::IntPtr a1)
		{
			return ((::Il2CppArray<::System::SByte>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_FROMSBYTEARRAY_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Char>* FromCharArray(::System::IntPtr a1)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_FROMCHARARRAY_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Int16>* FromShortArray(::System::IntPtr a1)
		{
			return ((::Il2CppArray<::System::Int16>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_FROMSHORTARRAY_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Int32>* FromIntArray(::System::IntPtr a1)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_FROMINTARRAY_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Int64>* FromLongArray(::System::IntPtr a1)
		{
			return ((::Il2CppArray<::System::Int64>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_FROMLONGARRAY_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Single>* FromFloatArray(::System::IntPtr a1)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_FROMFLOATARRAY_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Double>* FromDoubleArray(::System::IntPtr a1)
		{
			return ((::Il2CppArray<::System::Double>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_FROMDOUBLEARRAY_OFFSET))(a1);
		}

		static ::System::Int32 GetArrayLength(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETARRAYLENGTH_OFFSET))(a1);
		}

		static ::System::IntPtr NewByteArray(::System::Int32 a1)
		{
			return ((::System::IntPtr(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_NEWBYTEARRAY_OFFSET))(a1);
		}

		static ::System::IntPtr NewSByteArray(::System::Int32 a1)
		{
			return ((::System::IntPtr(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_NEWSBYTEARRAY_OFFSET))(a1);
		}

		static ::System::IntPtr NewObjectArray(::System::Int32 a1, ::System::IntPtr a2, ::System::IntPtr a3)
		{
			return ((::System::IntPtr(*)(::System::Int32, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_NEWOBJECTARRAY_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr GetObjectArrayElement(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETOBJECTARRAYELEMENT_OFFSET))(a1, a2);
		}

		static ::System::Void SetObjectArrayElement(::System::IntPtr a1, ::System::Int32 a2, ::System::IntPtr a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_SETOBJECTARRAYELEMENT_OFFSET))(a1, a2, a3);
		}
	};
}
