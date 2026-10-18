#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/jvalue.h"

namespace System { class String; }

#define UNITYENGINE_ANDROIDJNISAFE_CALLBOOLEANMETHOD_OFFSET UNITYSDK_OFFSET(0x1F3AE3F0)
#define UNITYENGINE_ANDROIDJNISAFE_CALLCHARMETHOD_OFFSET UNITYSDK_OFFSET(0x1F3AE0F0)
#define UNITYENGINE_ANDROIDJNISAFE_CALLDOUBLEMETHOD_OFFSET UNITYSDK_OFFSET(0x1F3AE170)
#define UNITYENGINE_ANDROIDJNISAFE_CALLFLOATMETHOD_OFFSET UNITYSDK_OFFSET(0x1F3AE1F0)
#define UNITYENGINE_ANDROIDJNISAFE_CALLINTMETHOD_OFFSET UNITYSDK_OFFSET(0x1F3AE470)
#define UNITYENGINE_ANDROIDJNISAFE_CALLLONGMETHOD_OFFSET UNITYSDK_OFFSET(0x1F3AE270)
#define UNITYENGINE_ANDROIDJNISAFE_CALLOBJECTMETHOD_OFFSET UNITYSDK_OFFSET(0x1F3ADFF0)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSBYTEMETHOD_OFFSET UNITYSDK_OFFSET(0x1F3AE370)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSHORTMETHOD_OFFSET UNITYSDK_OFFSET(0x1F3AE2F0)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSTATICBOOLEANMETHOD_OFFSET UNITYSDK_OFFSET(0x1F3ADE70)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSTATICCHARMETHOD_OFFSET UNITYSDK_OFFSET(0x1F3ADB70)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSTATICDOUBLEMETHOD_OFFSET UNITYSDK_OFFSET(0x1F3ADBF0)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSTATICFLOATMETHOD_OFFSET UNITYSDK_OFFSET(0x1F3ADC70)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSTATICINTMETHOD_OFFSET UNITYSDK_OFFSET(0x1F3ADEF0)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSTATICLONGMETHOD_OFFSET UNITYSDK_OFFSET(0x1F3ADCF0)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSTATICOBJECTMETHOD_OFFSET UNITYSDK_OFFSET(0x1F3ADA70)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSTATICSBYTEMETHOD_OFFSET UNITYSDK_OFFSET(0x1F3ADDF0)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSTATICSHORTMETHOD_OFFSET UNITYSDK_OFFSET(0x1F3ADD70)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSTATICSTRINGMETHOD_OFFSET UNITYSDK_OFFSET(0x1F3ADAF0)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSTATICVOIDMETHOD_OFFSET UNITYSDK_OFFSET(0x1F3AD9F0)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSTRINGMETHOD_OFFSET UNITYSDK_OFFSET(0x1F3AE070)
#define UNITYENGINE_ANDROIDJNISAFE_CALLVOIDMETHOD_OFFSET UNITYSDK_OFFSET(0x1F3ADF70)
#define UNITYENGINE_ANDROIDJNISAFE_CHECKEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1F3ACD90)
#define UNITYENGINE_ANDROIDJNISAFE_DELETEGLOBALREF_OFFSET UNITYSDK_OFFSET(0x1F3ACFD0)
#define UNITYENGINE_ANDROIDJNISAFE_DELETELOCALREF_OFFSET UNITYSDK_OFFSET(0x1F3ACFC0)
#define UNITYENGINE_ANDROIDJNISAFE_DELETEWEAKGLOBALREF_OFFSET UNITYSDK_OFFSET(0x1F3ACFE0)
#define UNITYENGINE_ANDROIDJNISAFE_FINDCLASS_OFFSET UNITYSDK_OFFSET(0x1F3AD3F0)
#define UNITYENGINE_ANDROIDJNISAFE_FROMBOOLEANARRAY_OFFSET UNITYSDK_OFFSET(0x1F3AE870)
#define UNITYENGINE_ANDROIDJNISAFE_FROMBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1F3AE770)
#define UNITYENGINE_ANDROIDJNISAFE_FROMCHARARRAY_OFFSET UNITYSDK_OFFSET(0x1F3AE4F0)
#define UNITYENGINE_ANDROIDJNISAFE_FROMDOUBLEARRAY_OFFSET UNITYSDK_OFFSET(0x1F3AE570)
#define UNITYENGINE_ANDROIDJNISAFE_FROMFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x1F3AE5F0)
#define UNITYENGINE_ANDROIDJNISAFE_FROMINTARRAY_OFFSET UNITYSDK_OFFSET(0x1F3AE8F0)
#define UNITYENGINE_ANDROIDJNISAFE_FROMLONGARRAY_OFFSET UNITYSDK_OFFSET(0x1F3AE670)
#define UNITYENGINE_ANDROIDJNISAFE_FROMREFLECTEDMETHOD_OFFSET UNITYSDK_OFFSET(0x1F3AD370)
#define UNITYENGINE_ANDROIDJNISAFE_FROMSBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1F3AE7F0)
#define UNITYENGINE_ANDROIDJNISAFE_FROMSHORTARRAY_OFFSET UNITYSDK_OFFSET(0x1F3AE6F0)
#define UNITYENGINE_ANDROIDJNISAFE_GETARRAYLENGTH_OFFSET UNITYSDK_OFFSET(0x1F3AEEF0)
#define UNITYENGINE_ANDROIDJNISAFE_GETFIELDID_OFFSET UNITYSDK_OFFSET(0x1F3AD270)
#define UNITYENGINE_ANDROIDJNISAFE_GETMETHODID_OFFSET UNITYSDK_OFFSET(0x1F3AD1F0)
#define UNITYENGINE_ANDROIDJNISAFE_GETOBJECTARRAYELEMENT_OFFSET UNITYSDK_OFFSET(0x1F3AEE70)
#define UNITYENGINE_ANDROIDJNISAFE_GETOBJECTCLASS_OFFSET UNITYSDK_OFFSET(0x1F3AD0F0)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTATICBOOLEANFIELD_OFFSET UNITYSDK_OFFSET(0x1F3AD8F0)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTATICCHARFIELD_OFFSET UNITYSDK_OFFSET(0x1F3AD5F0)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTATICDOUBLEFIELD_OFFSET UNITYSDK_OFFSET(0x1F3AD670)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTATICFIELDID_OFFSET UNITYSDK_OFFSET(0x1F3AD2F0)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTATICFLOATFIELD_OFFSET UNITYSDK_OFFSET(0x1F3AD6F0)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTATICINTFIELD_OFFSET UNITYSDK_OFFSET(0x1F3AD970)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTATICLONGFIELD_OFFSET UNITYSDK_OFFSET(0x1F3AD770)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTATICMETHODID_OFFSET UNITYSDK_OFFSET(0x1F3AD170)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTATICOBJECTFIELD_OFFSET UNITYSDK_OFFSET(0x1F3AD4F0)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTATICSBYTEFIELD_OFFSET UNITYSDK_OFFSET(0x1F3AD870)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTATICSHORTFIELD_OFFSET UNITYSDK_OFFSET(0x1F3AD7F0)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTATICSTRINGFIELD_OFFSET UNITYSDK_OFFSET(0x1F3AD570)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTRINGCHARS_OFFSET UNITYSDK_OFFSET(0x1F3AD070)
#define UNITYENGINE_ANDROIDJNISAFE_NEWOBJECT_OFFSET UNITYSDK_OFFSET(0x1F3AD470)
#define UNITYENGINE_ANDROIDJNISAFE_NEWSTRING_OFFSET UNITYSDK_OFFSET(0x1F3ACFF0)
#define UNITYENGINE_ANDROIDJNISAFE_TOBOOLEANARRAY_OFFSET UNITYSDK_OFFSET(0x1F3AED70)
#define UNITYENGINE_ANDROIDJNISAFE_TOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1F3AEC70)
#define UNITYENGINE_ANDROIDJNISAFE_TOCHARARRAY_OFFSET UNITYSDK_OFFSET(0x1F3AE9F0)
#define UNITYENGINE_ANDROIDJNISAFE_TODOUBLEARRAY_OFFSET UNITYSDK_OFFSET(0x1F3AEA70)
#define UNITYENGINE_ANDROIDJNISAFE_TOFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x1F3AEAF0)
#define UNITYENGINE_ANDROIDJNISAFE_TOINTARRAY_OFFSET UNITYSDK_OFFSET(0x1F3AEDF0)
#define UNITYENGINE_ANDROIDJNISAFE_TOLONGARRAY_OFFSET UNITYSDK_OFFSET(0x1F3AEB70)
#define UNITYENGINE_ANDROIDJNISAFE_TOOBJECTARRAY_OFFSET UNITYSDK_OFFSET(0x1F3AE970)
#define UNITYENGINE_ANDROIDJNISAFE_TOSBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1F3AECF0)
#define UNITYENGINE_ANDROIDJNISAFE_TOSHORTARRAY_OFFSET UNITYSDK_OFFSET(0x1F3AEBF0)

namespace UnityEngine
{
	inline static constexpr unsigned int AndroidJNISafe_TypeDefinitionIndex = 5688;

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
