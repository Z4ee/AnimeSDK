#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/jvalue.h"

namespace System { class String; }

#define UNITYENGINE_ANDROIDJNISAFE_CALLBOOLEANMETHOD_OFFSET UNITYSDK_OFFSET(0x189CBB30)
#define UNITYENGINE_ANDROIDJNISAFE_CALLCHARMETHOD_OFFSET UNITYSDK_OFFSET(0x189CB830)
#define UNITYENGINE_ANDROIDJNISAFE_CALLDOUBLEMETHOD_OFFSET UNITYSDK_OFFSET(0x189CB8B0)
#define UNITYENGINE_ANDROIDJNISAFE_CALLFLOATMETHOD_OFFSET UNITYSDK_OFFSET(0x189CB930)
#define UNITYENGINE_ANDROIDJNISAFE_CALLINTMETHOD_OFFSET UNITYSDK_OFFSET(0x189CBBB0)
#define UNITYENGINE_ANDROIDJNISAFE_CALLLONGMETHOD_OFFSET UNITYSDK_OFFSET(0x189CB9B0)
#define UNITYENGINE_ANDROIDJNISAFE_CALLOBJECTMETHOD_OFFSET UNITYSDK_OFFSET(0x189CB730)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSBYTEMETHOD_OFFSET UNITYSDK_OFFSET(0x189CBAB0)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSHORTMETHOD_OFFSET UNITYSDK_OFFSET(0x189CBA30)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSTATICBOOLEANMETHOD_OFFSET UNITYSDK_OFFSET(0x189CB5B0)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSTATICCHARMETHOD_OFFSET UNITYSDK_OFFSET(0x189CB2B0)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSTATICDOUBLEMETHOD_OFFSET UNITYSDK_OFFSET(0x189CB330)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSTATICFLOATMETHOD_OFFSET UNITYSDK_OFFSET(0x189CB3B0)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSTATICINTMETHOD_OFFSET UNITYSDK_OFFSET(0x189CB630)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSTATICLONGMETHOD_OFFSET UNITYSDK_OFFSET(0x189CB430)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSTATICOBJECTMETHOD_OFFSET UNITYSDK_OFFSET(0x189CB1B0)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSTATICSBYTEMETHOD_OFFSET UNITYSDK_OFFSET(0x189CB530)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSTATICSHORTMETHOD_OFFSET UNITYSDK_OFFSET(0x189CB4B0)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSTATICSTRINGMETHOD_OFFSET UNITYSDK_OFFSET(0x189CB230)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSTATICVOIDMETHOD_OFFSET UNITYSDK_OFFSET(0x189CB130)
#define UNITYENGINE_ANDROIDJNISAFE_CALLSTRINGMETHOD_OFFSET UNITYSDK_OFFSET(0x189CB7B0)
#define UNITYENGINE_ANDROIDJNISAFE_CALLVOIDMETHOD_OFFSET UNITYSDK_OFFSET(0x189CB6B0)
#define UNITYENGINE_ANDROIDJNISAFE_CHECKEXCEPTION_OFFSET UNITYSDK_OFFSET(0x189CA4D0)
#define UNITYENGINE_ANDROIDJNISAFE_DELETEGLOBALREF_OFFSET UNITYSDK_OFFSET(0x189CA710)
#define UNITYENGINE_ANDROIDJNISAFE_DELETELOCALREF_OFFSET UNITYSDK_OFFSET(0x189CA700)
#define UNITYENGINE_ANDROIDJNISAFE_DELETEWEAKGLOBALREF_OFFSET UNITYSDK_OFFSET(0x189CA720)
#define UNITYENGINE_ANDROIDJNISAFE_FINDCLASS_OFFSET UNITYSDK_OFFSET(0x189CAB30)
#define UNITYENGINE_ANDROIDJNISAFE_FROMBOOLEANARRAY_OFFSET UNITYSDK_OFFSET(0x189CBFB0)
#define UNITYENGINE_ANDROIDJNISAFE_FROMBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x189CBEB0)
#define UNITYENGINE_ANDROIDJNISAFE_FROMCHARARRAY_OFFSET UNITYSDK_OFFSET(0x189CBC30)
#define UNITYENGINE_ANDROIDJNISAFE_FROMDOUBLEARRAY_OFFSET UNITYSDK_OFFSET(0x189CBCB0)
#define UNITYENGINE_ANDROIDJNISAFE_FROMFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x189CBD30)
#define UNITYENGINE_ANDROIDJNISAFE_FROMINTARRAY_OFFSET UNITYSDK_OFFSET(0x189CC030)
#define UNITYENGINE_ANDROIDJNISAFE_FROMLONGARRAY_OFFSET UNITYSDK_OFFSET(0x189CBDB0)
#define UNITYENGINE_ANDROIDJNISAFE_FROMREFLECTEDMETHOD_OFFSET UNITYSDK_OFFSET(0x189CAAB0)
#define UNITYENGINE_ANDROIDJNISAFE_FROMSBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x189CBF30)
#define UNITYENGINE_ANDROIDJNISAFE_FROMSHORTARRAY_OFFSET UNITYSDK_OFFSET(0x189CBE30)
#define UNITYENGINE_ANDROIDJNISAFE_GETARRAYLENGTH_OFFSET UNITYSDK_OFFSET(0x189CC630)
#define UNITYENGINE_ANDROIDJNISAFE_GETFIELDID_OFFSET UNITYSDK_OFFSET(0x189CA9B0)
#define UNITYENGINE_ANDROIDJNISAFE_GETMETHODID_OFFSET UNITYSDK_OFFSET(0x189CA930)
#define UNITYENGINE_ANDROIDJNISAFE_GETOBJECTARRAYELEMENT_OFFSET UNITYSDK_OFFSET(0x189CC5B0)
#define UNITYENGINE_ANDROIDJNISAFE_GETOBJECTCLASS_OFFSET UNITYSDK_OFFSET(0x189CA830)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTATICBOOLEANFIELD_OFFSET UNITYSDK_OFFSET(0x189CB030)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTATICCHARFIELD_OFFSET UNITYSDK_OFFSET(0x189CAD30)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTATICDOUBLEFIELD_OFFSET UNITYSDK_OFFSET(0x189CADB0)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTATICFIELDID_OFFSET UNITYSDK_OFFSET(0x189CAA30)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTATICFLOATFIELD_OFFSET UNITYSDK_OFFSET(0x189CAE30)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTATICINTFIELD_OFFSET UNITYSDK_OFFSET(0x189CB0B0)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTATICLONGFIELD_OFFSET UNITYSDK_OFFSET(0x189CAEB0)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTATICMETHODID_OFFSET UNITYSDK_OFFSET(0x189CA8B0)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTATICOBJECTFIELD_OFFSET UNITYSDK_OFFSET(0x189CAC30)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTATICSBYTEFIELD_OFFSET UNITYSDK_OFFSET(0x189CAFB0)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTATICSHORTFIELD_OFFSET UNITYSDK_OFFSET(0x189CAF30)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTATICSTRINGFIELD_OFFSET UNITYSDK_OFFSET(0x189CACB0)
#define UNITYENGINE_ANDROIDJNISAFE_GETSTRINGCHARS_OFFSET UNITYSDK_OFFSET(0x189CA7B0)
#define UNITYENGINE_ANDROIDJNISAFE_NEWOBJECT_OFFSET UNITYSDK_OFFSET(0x189CABB0)
#define UNITYENGINE_ANDROIDJNISAFE_NEWSTRING_OFFSET UNITYSDK_OFFSET(0x189CA730)
#define UNITYENGINE_ANDROIDJNISAFE_TOBOOLEANARRAY_OFFSET UNITYSDK_OFFSET(0x189CC4B0)
#define UNITYENGINE_ANDROIDJNISAFE_TOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x189CC3B0)
#define UNITYENGINE_ANDROIDJNISAFE_TOCHARARRAY_OFFSET UNITYSDK_OFFSET(0x189CC130)
#define UNITYENGINE_ANDROIDJNISAFE_TODOUBLEARRAY_OFFSET UNITYSDK_OFFSET(0x189CC1B0)
#define UNITYENGINE_ANDROIDJNISAFE_TOFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x189CC230)
#define UNITYENGINE_ANDROIDJNISAFE_TOINTARRAY_OFFSET UNITYSDK_OFFSET(0x189CC530)
#define UNITYENGINE_ANDROIDJNISAFE_TOLONGARRAY_OFFSET UNITYSDK_OFFSET(0x189CC2B0)
#define UNITYENGINE_ANDROIDJNISAFE_TOOBJECTARRAY_OFFSET UNITYSDK_OFFSET(0x189CC0B0)
#define UNITYENGINE_ANDROIDJNISAFE_TOSBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x189CC430)
#define UNITYENGINE_ANDROIDJNISAFE_TOSHORTARRAY_OFFSET UNITYSDK_OFFSET(0x189CC330)

namespace UnityEngine
{
	inline static constexpr unsigned int AndroidJNISafe_TypeDefinitionIndex = 5398;

	class AndroidJNISafe : public ::System::Object
	{
	public:
		static ::System::Void CheckException()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CHECKEXCEPTION_OFFSET))();
		}

		static ::System::Void DeleteGlobalRef(::System::IntPtr globalref)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_DELETEGLOBALREF_OFFSET))(globalref);
		}

		static ::System::Void DeleteWeakGlobalRef(::System::IntPtr globalref)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_DELETEWEAKGLOBALREF_OFFSET))(globalref);
		}

		static ::System::Void DeleteLocalRef(::System::IntPtr localref)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_DELETELOCALREF_OFFSET))(localref);
		}

		static ::System::IntPtr NewString(::System::String* chars)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_NEWSTRING_OFFSET))(chars);
		}

		static ::System::String* GetStringChars(::System::IntPtr str)
		{
			return ((::System::String*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_GETSTRINGCHARS_OFFSET))(str);
		}

		static ::System::IntPtr GetObjectClass(::System::IntPtr ptr)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_GETOBJECTCLASS_OFFSET))(ptr);
		}

		static ::System::IntPtr GetStaticMethodID(::System::IntPtr clazz, ::System::String* name, ::System::String* sig)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_GETSTATICMETHODID_OFFSET))(clazz, name, sig);
		}

		static ::System::IntPtr GetMethodID(::System::IntPtr obj, ::System::String* name, ::System::String* sig)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_GETMETHODID_OFFSET))(obj, name, sig);
		}

		static ::System::IntPtr GetFieldID(::System::IntPtr clazz, ::System::String* name, ::System::String* sig)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_GETFIELDID_OFFSET))(clazz, name, sig);
		}

		static ::System::IntPtr GetStaticFieldID(::System::IntPtr clazz, ::System::String* name, ::System::String* sig)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_GETSTATICFIELDID_OFFSET))(clazz, name, sig);
		}

		static ::System::IntPtr FromReflectedMethod(::System::IntPtr refMethod)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_FROMREFLECTEDMETHOD_OFFSET))(refMethod);
		}

		static ::System::IntPtr FindClass(::System::String* name)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_FINDCLASS_OFFSET))(name);
		}

		static ::System::IntPtr NewObject(::System::IntPtr clazz, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_NEWOBJECT_OFFSET))(clazz, methodID, args);
		}

		static ::System::IntPtr GetStaticObjectField(::System::IntPtr clazz, ::System::IntPtr fieldID)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_GETSTATICOBJECTFIELD_OFFSET))(clazz, fieldID);
		}

		static ::System::String* GetStaticStringField(::System::IntPtr clazz, ::System::IntPtr fieldID)
		{
			return ((::System::String*(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_GETSTATICSTRINGFIELD_OFFSET))(clazz, fieldID);
		}

		static ::System::Char GetStaticCharField(::System::IntPtr clazz, ::System::IntPtr fieldID)
		{
			return ((::System::Char(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_GETSTATICCHARFIELD_OFFSET))(clazz, fieldID);
		}

		static ::System::Double GetStaticDoubleField(::System::IntPtr clazz, ::System::IntPtr fieldID)
		{
			return ((::System::Double(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_GETSTATICDOUBLEFIELD_OFFSET))(clazz, fieldID);
		}

		static ::System::Single GetStaticFloatField(::System::IntPtr clazz, ::System::IntPtr fieldID)
		{
			return ((::System::Single(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_GETSTATICFLOATFIELD_OFFSET))(clazz, fieldID);
		}

		static ::System::Int64 GetStaticLongField(::System::IntPtr clazz, ::System::IntPtr fieldID)
		{
			return ((::System::Int64(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_GETSTATICLONGFIELD_OFFSET))(clazz, fieldID);
		}

		static ::System::Int16 GetStaticShortField(::System::IntPtr clazz, ::System::IntPtr fieldID)
		{
			return ((::System::Int16(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_GETSTATICSHORTFIELD_OFFSET))(clazz, fieldID);
		}

		static ::System::SByte GetStaticSByteField(::System::IntPtr clazz, ::System::IntPtr fieldID)
		{
			return ((::System::SByte(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_GETSTATICSBYTEFIELD_OFFSET))(clazz, fieldID);
		}

		static ::System::Boolean GetStaticBooleanField(::System::IntPtr clazz, ::System::IntPtr fieldID)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_GETSTATICBOOLEANFIELD_OFFSET))(clazz, fieldID);
		}

		static ::System::Int32 GetStaticIntField(::System::IntPtr clazz, ::System::IntPtr fieldID)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_GETSTATICINTFIELD_OFFSET))(clazz, fieldID);
		}

		static ::System::Void CallStaticVoidMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLSTATICVOIDMETHOD_OFFSET))(clazz, methodID, args);
		}

		static ::System::IntPtr CallStaticObjectMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLSTATICOBJECTMETHOD_OFFSET))(clazz, methodID, args);
		}

		static ::System::String* CallStaticStringMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::String*(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLSTATICSTRINGMETHOD_OFFSET))(clazz, methodID, args);
		}

		static ::System::Char CallStaticCharMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::Char(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLSTATICCHARMETHOD_OFFSET))(clazz, methodID, args);
		}

		static ::System::Double CallStaticDoubleMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::Double(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLSTATICDOUBLEMETHOD_OFFSET))(clazz, methodID, args);
		}

		static ::System::Single CallStaticFloatMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::Single(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLSTATICFLOATMETHOD_OFFSET))(clazz, methodID, args);
		}

		static ::System::Int64 CallStaticLongMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::Int64(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLSTATICLONGMETHOD_OFFSET))(clazz, methodID, args);
		}

		static ::System::Int16 CallStaticShortMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::Int16(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLSTATICSHORTMETHOD_OFFSET))(clazz, methodID, args);
		}

		static ::System::SByte CallStaticSByteMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::SByte(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLSTATICSBYTEMETHOD_OFFSET))(clazz, methodID, args);
		}

		static ::System::Boolean CallStaticBooleanMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLSTATICBOOLEANMETHOD_OFFSET))(clazz, methodID, args);
		}

		static ::System::Int32 CallStaticIntMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLSTATICINTMETHOD_OFFSET))(clazz, methodID, args);
		}

		static ::System::Void CallVoidMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLVOIDMETHOD_OFFSET))(obj, methodID, args);
		}

		static ::System::IntPtr CallObjectMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLOBJECTMETHOD_OFFSET))(obj, methodID, args);
		}

		static ::System::String* CallStringMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::String*(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLSTRINGMETHOD_OFFSET))(obj, methodID, args);
		}

		static ::System::Char CallCharMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::Char(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLCHARMETHOD_OFFSET))(obj, methodID, args);
		}

		static ::System::Double CallDoubleMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::Double(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLDOUBLEMETHOD_OFFSET))(obj, methodID, args);
		}

		static ::System::Single CallFloatMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::Single(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLFLOATMETHOD_OFFSET))(obj, methodID, args);
		}

		static ::System::Int64 CallLongMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::Int64(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLLONGMETHOD_OFFSET))(obj, methodID, args);
		}

		static ::System::Int16 CallShortMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::Int16(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLSHORTMETHOD_OFFSET))(obj, methodID, args);
		}

		static ::System::SByte CallSByteMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::SByte(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLSBYTEMETHOD_OFFSET))(obj, methodID, args);
		}

		static ::System::Boolean CallBooleanMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLBOOLEANMETHOD_OFFSET))(obj, methodID, args);
		}

		static ::System::Int32 CallIntMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_CALLINTMETHOD_OFFSET))(obj, methodID, args);
		}

		static ::Il2CppArray<::System::Char>* FromCharArray(::System::IntPtr array)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_FROMCHARARRAY_OFFSET))(array);
		}

		static ::Il2CppArray<::System::Double>* FromDoubleArray(::System::IntPtr array)
		{
			return ((::Il2CppArray<::System::Double>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_FROMDOUBLEARRAY_OFFSET))(array);
		}

		static ::Il2CppArray<::System::Single>* FromFloatArray(::System::IntPtr array)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_FROMFLOATARRAY_OFFSET))(array);
		}

		static ::Il2CppArray<::System::Int64>* FromLongArray(::System::IntPtr array)
		{
			return ((::Il2CppArray<::System::Int64>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_FROMLONGARRAY_OFFSET))(array);
		}

		static ::Il2CppArray<::System::Int16>* FromShortArray(::System::IntPtr array)
		{
			return ((::Il2CppArray<::System::Int16>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_FROMSHORTARRAY_OFFSET))(array);
		}

		static ::Il2CppArray<::System::Byte>* FromByteArray(::System::IntPtr array)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_FROMBYTEARRAY_OFFSET))(array);
		}

		static ::Il2CppArray<::System::SByte>* FromSByteArray(::System::IntPtr array)
		{
			return ((::Il2CppArray<::System::SByte>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_FROMSBYTEARRAY_OFFSET))(array);
		}

		static ::Il2CppArray<::System::Boolean>* FromBooleanArray(::System::IntPtr array)
		{
			return ((::Il2CppArray<::System::Boolean>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_FROMBOOLEANARRAY_OFFSET))(array);
		}

		static ::Il2CppArray<::System::Int32>* FromIntArray(::System::IntPtr array)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_FROMINTARRAY_OFFSET))(array);
		}

		static ::System::IntPtr ToObjectArray(::Il2CppArray<::System::IntPtr>* array, ::System::IntPtr type)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::IntPtr>*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_TOOBJECTARRAY_OFFSET))(array, type);
		}

		static ::System::IntPtr ToCharArray(::Il2CppArray<::System::Char>* array)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_TOCHARARRAY_OFFSET))(array);
		}

		static ::System::IntPtr ToDoubleArray(::Il2CppArray<::System::Double>* array)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::Double>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_TODOUBLEARRAY_OFFSET))(array);
		}

		static ::System::IntPtr ToFloatArray(::Il2CppArray<::System::Single>* array)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_TOFLOATARRAY_OFFSET))(array);
		}

		static ::System::IntPtr ToLongArray(::Il2CppArray<::System::Int64>* array)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::Int64>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_TOLONGARRAY_OFFSET))(array);
		}

		static ::System::IntPtr ToShortArray(::Il2CppArray<::System::Int16>* array)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::Int16>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_TOSHORTARRAY_OFFSET))(array);
		}

		static ::System::IntPtr ToByteArray(::Il2CppArray<::System::Byte>* array)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_TOBYTEARRAY_OFFSET))(array);
		}

		static ::System::IntPtr ToSByteArray(::Il2CppArray<::System::SByte>* array)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::SByte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_TOSBYTEARRAY_OFFSET))(array);
		}

		static ::System::IntPtr ToBooleanArray(::Il2CppArray<::System::Boolean>* array)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_TOBOOLEANARRAY_OFFSET))(array);
		}

		static ::System::IntPtr ToIntArray(::Il2CppArray<::System::Int32>* array)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_TOINTARRAY_OFFSET))(array);
		}

		static ::System::IntPtr GetObjectArrayElement(::System::IntPtr array, ::System::Int32 index)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_GETOBJECTARRAYELEMENT_OFFSET))(array, index);
		}

		static ::System::Int32 GetArrayLength(::System::IntPtr array)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNISAFE_GETARRAYLENGTH_OFFSET))(array);
		}
	};
}
