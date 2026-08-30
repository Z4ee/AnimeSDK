#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/jvalue.h"

namespace System { class String; }

#define UNITYENGINE_ANDROIDJNISAFE_CALLBOOLEANMETHOD_OFFSET UNITYSDK_OFFSET(0x1ECE6650)
#define UNITYENGINE_ANDROIDJNISAFE_CALLCHARMETHOD_OFFSET UNITYSDK_OFFSET(0x1ECE6350)
#define UNITYENGINE_ANDROIDJNISAFE_CALLDOUBLEMETHOD_OFFSET UNITYSDK_OFFSET(0x1ECE63D0)
#define UNITYENGINE_ANDROIDJNISAFE_CALLFLOATMETHOD_OFFSET UNITYSDK_OFFSET(0x1ECE6450)
#define UNITYENGINE_ANDROIDJNISAFE_CALLINTMETHOD_OFFSET UNITYSDK_OFFSET(0x1ECE66D0)
#define UNITYENGINE_ANDROIDJNISAFE_CALLLONGMETHOD_OFFSET UNITYSDK_OFFSET(0x1ECE64D0)
#define UNITYENGINE_ANDROIDJNISAFE_CALLOBJECTMETHOD_OFFSET UNITYSDK_OFFSET(0x1ECE6250)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSBYTEMETHOD_OFFSET UNITYSDK_OFFSET(0x1ECE65D0)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSHORTMETHOD_OFFSET UNITYSDK_OFFSET(0x1ECE6550)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSTATICBOOLEANMETHOD_OFFSET UNITYSDK_OFFSET(0x1ECE60D0)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSTATICCHARMETHOD_OFFSET UNITYSDK_OFFSET(0x1ECE5DD0)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSTATICDOUBLEMETHOD_OFFSET UNITYSDK_OFFSET(0x1ECE5E50)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSTATICFLOATMETHOD_OFFSET UNITYSDK_OFFSET(0x1ECE5ED0)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSTATICINTMETHOD_OFFSET UNITYSDK_OFFSET(0x1ECE6150)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSTATICLONGMETHOD_OFFSET UNITYSDK_OFFSET(0x1ECE5F50)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSTATICOBJECTMETHOD_OFFSET UNITYSDK_OFFSET(0x1ECE5CD0)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSTATICSBYTEMETHOD_OFFSET UNITYSDK_OFFSET(0x1ECE6050)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSTATICSHORTMETHOD_OFFSET UNITYSDK_OFFSET(0x1ECE5FD0)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSTATICSTRINGMETHOD_OFFSET UNITYSDK_OFFSET(0x1ECE5D50)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSTATICVOIDMETHOD_OFFSET UNITYSDK_OFFSET(0x1ECE5C50)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSTRINGMETHOD_OFFSET UNITYSDK_OFFSET(0x1ECE62D0)
#define UNITYENGINE_ANDROIDJNISAFE_CALLVOIDMETHOD_OFFSET UNITYSDK_OFFSET(0x1ECE61D0)
#define UNITYENGINE_ANDROIDJNISAFE_CHECKEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1ECE4FF0)
#define UNITYENGINE_ANDROIDJNISAFE_DELETEGLOBALREF_OFFSET UNITYSDK_OFFSET(0x1ECE5230)
#define UNITYENGINE_ANDROIDJNISAFE_DELETELOCALREF_OFFSET UNITYSDK_OFFSET(0x1ECE5220)
#define UNITYENGINE_ANDROIDJNISAFE_DELETEWEAKGLOBALREF_OFFSET UNITYSDK_OFFSET(0x1ECE5240)
#define UNITYENGINE_ANDROIDJNISAFE_FINDCLASS_OFFSET UNITYSDK_OFFSET(0x1ECE5650)
#define UNITYENGINE_ANDROIDJNISAFE_FROMBOOLEANARRAY_OFFSET UNITYSDK_OFFSET(0x1ECE6AD0)
#define UNITYENGINE_ANDROIDJNISAFE_FROMBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1ECE69D0)
#define UNITYENGINE_ANDROIDJNISAFE_FROMCHARARRAY_OFFSET UNITYSDK_OFFSET(0x1ECE6750)
#define UNITYENGINE_ANDROIDJNISAFE_FROMDOUBLEARRAY_OFFSET UNITYSDK_OFFSET(0x1ECE67D0)
#define UNITYENGINE_ANDROIDJNISAFE_FROMFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x1ECE6850)
#define UNITYENGINE_ANDROIDJNISAFE_FROMINTARRAY_OFFSET UNITYSDK_OFFSET(0x1ECE6B50)
#define UNITYENGINE_ANDROIDJNISAFE_FROMLONGARRAY_OFFSET UNITYSDK_OFFSET(0x1ECE68D0)
#define UNITYENGINE_ANDROIDJNISAFE_FROMREFLECTEDMETHOD_OFFSET UNITYSDK_OFFSET(0x1ECE55D0)
#define UNITYENGINE_ANDROIDJNISAFE_FROMSBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1ECE6A50)
#define UNITYENGINE_ANDROIDJNISAFE_FROMSHORTARRAY_OFFSET UNITYSDK_OFFSET(0x1ECE6950)
#define UNITYENGINE_ANDROIDJNISAFE_GETARRAYLENGTH_OFFSET UNITYSDK_OFFSET(0x1ECE7150)
#define UNITYENGINE_ANDROIDJNISAFE_GETFIELDID_OFFSET UNITYSDK_OFFSET(0x1ECE54D0)
#define UNITYENGINE_ANDROIDJNISAFE_GETMETHODID_OFFSET UNITYSDK_OFFSET(0x1ECE5450)
#define UNITYENGINE_ANDROIDJNISAFE_GETOBJECTARRAYELEMENT_OFFSET UNITYSDK_OFFSET(0x1ECE70D0)
#define UNITYENGINE_ANDROIDJNISAFE_GETOBJECTCLASS_OFFSET UNITYSDK_OFFSET(0x1ECE5350)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTATICBOOLEANFIELD_OFFSET UNITYSDK_OFFSET(0x1ECE5B50)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTATICCHARFIELD_OFFSET UNITYSDK_OFFSET(0x1ECE5850)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTATICDOUBLEFIELD_OFFSET UNITYSDK_OFFSET(0x1ECE58D0)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTATICFIELDID_OFFSET UNITYSDK_OFFSET(0x1ECE5550)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTATICFLOATFIELD_OFFSET UNITYSDK_OFFSET(0x1ECE5950)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTATICINTFIELD_OFFSET UNITYSDK_OFFSET(0x1ECE5BD0)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTATICLONGFIELD_OFFSET UNITYSDK_OFFSET(0x1ECE59D0)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTATICMETHODID_OFFSET UNITYSDK_OFFSET(0x1ECE53D0)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTATICOBJECTFIELD_OFFSET UNITYSDK_OFFSET(0x1ECE5750)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTATICSBYTEFIELD_OFFSET UNITYSDK_OFFSET(0x1ECE5AD0)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTATICSHORTFIELD_OFFSET UNITYSDK_OFFSET(0x1ECE5A50)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTATICSTRINGFIELD_OFFSET UNITYSDK_OFFSET(0x1ECE57D0)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTRINGCHARS_OFFSET UNITYSDK_OFFSET(0x1ECE52D0)
#define UNITYENGINE_ANDROIDJNISAFE_NEWOBJECT_OFFSET UNITYSDK_OFFSET(0x1ECE56D0)
#define UNITYENGINE_ANDROIDJNISAFE_NEWSTRING_OFFSET UNITYSDK_OFFSET(0x1ECE5250)
#define UNITYENGINE_ANDROIDJNISAFE_TOBOOLEANARRAY_OFFSET UNITYSDK_OFFSET(0x1ECE6FD0)
#define UNITYENGINE_ANDROIDJNISAFE_TOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1ECE6ED0)
#define UNITYENGINE_ANDROIDJNISAFE_TOCHARARRAY_OFFSET UNITYSDK_OFFSET(0x1ECE6C50)
#define UNITYENGINE_ANDROIDJNISAFE_TODOUBLEARRAY_OFFSET UNITYSDK_OFFSET(0x1ECE6CD0)
#define UNITYENGINE_ANDROIDJNISAFE_TOFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x1ECE6D50)
#define UNITYENGINE_ANDROIDJNISAFE_TOINTARRAY_OFFSET UNITYSDK_OFFSET(0x1ECE7050)
#define UNITYENGINE_ANDROIDJNISAFE_TOLONGARRAY_OFFSET UNITYSDK_OFFSET(0x1ECE6DD0)
#define UNITYENGINE_ANDROIDJNISAFE_TOOBJECTARRAY_OFFSET UNITYSDK_OFFSET(0x1ECE6BD0)
#define UNITYENGINE_ANDROIDJNISAFE_TOSBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1ECE6F50)
#define UNITYENGINE_ANDROIDJNISAFE_TOSHORTARRAY_OFFSET UNITYSDK_OFFSET(0x1ECE6E50)

namespace UnityEngine
{
	inline static constexpr unsigned int AndroidJNISafe_TypeDefinitionIndex = 5680;

	class AndroidJNISafe : public ::System::Object
	{
	public:
		static ::System::Void CheckException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CHECKEXCEPTION_OFFSET))();
		}

		static ::System::Void DeleteGlobalRef(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_DELETEGLOBALREF_OFFSET))(a1);
		}

		static ::System::Void DeleteWeakGlobalRef(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_DELETEWEAKGLOBALREF_OFFSET))(a1);
		}

		static ::System::Void DeleteLocalRef(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_DELETELOCALREF_OFFSET))(a1);
		}

		static ::System::IntPtr NewString(::System::String* a1)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_NEWSTRING_OFFSET))(a1);
		}

		static ::System::String* GetStringChars(::System::IntPtr a1)
		{
			return ((::System::String*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_GETSTRINGCHARS_OFFSET))(a1);
		}

		static ::System::IntPtr GetObjectClass(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_GETOBJECTCLASS_OFFSET))(a1);
		}

		static ::System::IntPtr GetStaticMethodID(::System::IntPtr a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_GETSTATICMETHODID_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr GetMethodID(::System::IntPtr a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_GETMETHODID_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr GetFieldID(::System::IntPtr a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_GETFIELDID_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr GetStaticFieldID(::System::IntPtr a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_GETSTATICFIELDID_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr FromReflectedMethod(::System::IntPtr a1)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_FROMREFLECTEDMETHOD_OFFSET))(a1);
		}

		static ::System::IntPtr FindClass(::System::String* a1)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_FINDCLASS_OFFSET))(a1);
		}

		static ::System::IntPtr NewObject(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_NEWOBJECT_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr GetStaticObjectField(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_GETSTATICOBJECTFIELD_OFFSET))(a1, a2);
		}

		static ::System::String* GetStaticStringField(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::String*(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_GETSTATICSTRINGFIELD_OFFSET))(a1, a2);
		}

		static ::System::Char GetStaticCharField(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Char(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_GETSTATICCHARFIELD_OFFSET))(a1, a2);
		}

		static ::System::Double GetStaticDoubleField(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Double(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_GETSTATICDOUBLEFIELD_OFFSET))(a1, a2);
		}

		static ::System::Single GetStaticFloatField(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Single(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_GETSTATICFLOATFIELD_OFFSET))(a1, a2);
		}

		static ::System::Int64 GetStaticLongField(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Int64(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_GETSTATICLONGFIELD_OFFSET))(a1, a2);
		}

		static ::System::Int16 GetStaticShortField(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Int16(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_GETSTATICSHORTFIELD_OFFSET))(a1, a2);
		}

		static ::System::SByte GetStaticSByteField(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::SByte(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_GETSTATICSBYTEFIELD_OFFSET))(a1, a2);
		}

		static ::System::Boolean GetStaticBooleanField(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_GETSTATICBOOLEANFIELD_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetStaticIntField(::System::IntPtr a1, ::System::IntPtr a2)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_GETSTATICINTFIELD_OFFSET))(a1, a2);
		}

		static ::System::Void CallStaticVoidMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLSTATICVOIDMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr CallStaticObjectMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLSTATICOBJECTMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::String* CallStaticStringMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::String*(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLSTATICSTRINGMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Char CallStaticCharMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::Char(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLSTATICCHARMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Double CallStaticDoubleMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::Double(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLSTATICDOUBLEMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Single CallStaticFloatMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::Single(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLSTATICFLOATMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Int64 CallStaticLongMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::Int64(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLSTATICLONGMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Int16 CallStaticShortMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::Int16(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLSTATICSHORTMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::SByte CallStaticSByteMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::SByte(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLSTATICSBYTEMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean CallStaticBooleanMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLSTATICBOOLEANMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 CallStaticIntMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLSTATICINTMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CallVoidMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLVOIDMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::IntPtr CallObjectMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLOBJECTMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::String* CallStringMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::String*(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLSTRINGMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Char CallCharMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::Char(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLCHARMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Double CallDoubleMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::Double(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLDOUBLEMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Single CallFloatMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::Single(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLFLOATMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Int64 CallLongMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::Int64(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLLONGMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Int16 CallShortMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::Int16(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLSHORTMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::SByte CallSByteMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::SByte(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLSBYTEMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean CallBooleanMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLBOOLEANMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 CallIntMethod(::System::IntPtr a1, ::System::IntPtr a2, ::Il2CppArray<::UnityEngine::jvalue>* a3)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLINTMETHOD_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Char>* FromCharArray(::System::IntPtr a1)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_FROMCHARARRAY_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Double>* FromDoubleArray(::System::IntPtr a1)
		{
			return ((::Il2CppArray<::System::Double>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_FROMDOUBLEARRAY_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Single>* FromFloatArray(::System::IntPtr a1)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_FROMFLOATARRAY_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Int64>* FromLongArray(::System::IntPtr a1)
		{
			return ((::Il2CppArray<::System::Int64>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_FROMLONGARRAY_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Int16>* FromShortArray(::System::IntPtr a1)
		{
			return ((::Il2CppArray<::System::Int16>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_FROMSHORTARRAY_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* FromByteArray(::System::IntPtr a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_FROMBYTEARRAY_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::SByte>* FromSByteArray(::System::IntPtr a1)
		{
			return ((::Il2CppArray<::System::SByte>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_FROMSBYTEARRAY_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Boolean>* FromBooleanArray(::System::IntPtr a1)
		{
			return ((::Il2CppArray<::System::Boolean>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_FROMBOOLEANARRAY_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Int32>* FromIntArray(::System::IntPtr a1)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_FROMINTARRAY_OFFSET))(a1);
		}

		static ::System::IntPtr ToObjectArray(::Il2CppArray<::System::IntPtr>* a1, ::System::IntPtr a2)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::IntPtr>*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_TOOBJECTARRAY_OFFSET))(a1, a2);
		}

		static ::System::IntPtr ToCharArray(::Il2CppArray<::System::Char>* a1)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_TOCHARARRAY_OFFSET))(a1);
		}

		static ::System::IntPtr ToDoubleArray(::Il2CppArray<::System::Double>* a1)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::Double>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_TODOUBLEARRAY_OFFSET))(a1);
		}

		static ::System::IntPtr ToFloatArray(::Il2CppArray<::System::Single>* a1)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_TOFLOATARRAY_OFFSET))(a1);
		}

		static ::System::IntPtr ToLongArray(::Il2CppArray<::System::Int64>* a1)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::Int64>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_TOLONGARRAY_OFFSET))(a1);
		}

		static ::System::IntPtr ToShortArray(::Il2CppArray<::System::Int16>* a1)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::Int16>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_TOSHORTARRAY_OFFSET))(a1);
		}

		static ::System::IntPtr ToByteArray(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_TOBYTEARRAY_OFFSET))(a1);
		}

		static ::System::IntPtr ToSByteArray(::Il2CppArray<::System::SByte>* a1)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::SByte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_TOSBYTEARRAY_OFFSET))(a1);
		}

		static ::System::IntPtr ToBooleanArray(::Il2CppArray<::System::Boolean>* a1)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_TOBOOLEANARRAY_OFFSET))(a1);
		}

		static ::System::IntPtr ToIntArray(::Il2CppArray<::System::Int32>* a1)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_TOINTARRAY_OFFSET))(a1);
		}

		static ::System::IntPtr GetObjectArrayElement(::System::IntPtr a1, ::System::Int32 a2)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_GETOBJECTARRAYELEMENT_OFFSET))(a1, a2);
		}

		static ::System::Int32 GetArrayLength(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_GETARRAYLENGTH_OFFSET))(a1);
		}
	};
}
