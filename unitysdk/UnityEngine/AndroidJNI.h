#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/jvalue.h"

namespace System { class String; }

#define UNITYENGINE_ANDROIDJNI_CALLBOOLEANMETHOD_OFFSET UNITYSDK_OFFSET(0x189C89D0)
#define UNITYENGINE_ANDROIDJNI_CALLCHARMETHOD_OFFSET UNITYSDK_OFFSET(0x189C8A00)
#define UNITYENGINE_ANDROIDJNI_CALLDOUBLEMETHOD_OFFSET UNITYSDK_OFFSET(0x189C8A20)
#define UNITYENGINE_ANDROIDJNI_CALLFLOATMETHOD_OFFSET UNITYSDK_OFFSET(0x189C8A10)
#define UNITYENGINE_ANDROIDJNI_CALLINTMETHOD_OFFSET UNITYSDK_OFFSET(0x189C89C0)
#define UNITYENGINE_ANDROIDJNI_CALLLONGMETHOD_OFFSET UNITYSDK_OFFSET(0x189C8A30)
#define UNITYENGINE_ANDROIDJNI_CALLOBJECTMETHOD_OFFSET UNITYSDK_OFFSET(0x189C89B0)
#define UNITYENGINE_ANDROIDJNI_CALLSBYTEMETHOD_OFFSET UNITYSDK_OFFSET(0x189C89F0)
#define UNITYENGINE_ANDROIDJNI_CALLSHORTMETHOD_OFFSET UNITYSDK_OFFSET(0x189C89E0)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICBOOLEANMETHOD_OFFSET UNITYSDK_OFFSET(0x189C8A80)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICCHARMETHOD_OFFSET UNITYSDK_OFFSET(0x189C8AB0)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICDOUBLEMETHOD_OFFSET UNITYSDK_OFFSET(0x189C8AD0)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICFLOATMETHOD_OFFSET UNITYSDK_OFFSET(0x189C8AC0)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICINTMETHOD_OFFSET UNITYSDK_OFFSET(0x189C8A70)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICLONGMETHOD_OFFSET UNITYSDK_OFFSET(0x189C8AE0)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICOBJECTMETHOD_OFFSET UNITYSDK_OFFSET(0x189C8A60)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICSBYTEMETHOD_OFFSET UNITYSDK_OFFSET(0x189C8AA0)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICSHORTMETHOD_OFFSET UNITYSDK_OFFSET(0x189C8A90)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICSTRINGMETHOD_OFFSET UNITYSDK_OFFSET(0x189C8A50)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICVOIDMETHOD_OFFSET UNITYSDK_OFFSET(0x189C8AF0)
#define UNITYENGINE_ANDROIDJNI_CALLSTRINGMETHOD_OFFSET UNITYSDK_OFFSET(0x189C89A0)
#define UNITYENGINE_ANDROIDJNI_CALLVOIDMETHOD_OFFSET UNITYSDK_OFFSET(0x189C8A40)
#define UNITYENGINE_ANDROIDJNI_DELETEGLOBALREF_OFFSET UNITYSDK_OFFSET(0x189C88C0)
#define UNITYENGINE_ANDROIDJNI_DELETELOCALREF_OFFSET UNITYSDK_OFFSET(0x189C8900)
#define UNITYENGINE_ANDROIDJNI_DELETEWEAKGLOBALREF_OFFSET UNITYSDK_OFFSET(0x189C88E0)
#define UNITYENGINE_ANDROIDJNI_EXCEPTIONCLEAR_OFFSET UNITYSDK_OFFSET(0x189C8880)
#define UNITYENGINE_ANDROIDJNI_EXCEPTIONOCCURRED_OFFSET UNITYSDK_OFFSET(0x189C8870)
#define UNITYENGINE_ANDROIDJNI_FINDCLASS_OFFSET UNITYSDK_OFFSET(0x189C8850)
#define UNITYENGINE_ANDROIDJNI_FROMBOOLEANARRAY_OFFSET UNITYSDK_OFFSET(0x189C8C40)
#define UNITYENGINE_ANDROIDJNI_FROMBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x189C8C50)
#define UNITYENGINE_ANDROIDJNI_FROMCHARARRAY_OFFSET UNITYSDK_OFFSET(0x189C8C70)
#define UNITYENGINE_ANDROIDJNI_FROMDOUBLEARRAY_OFFSET UNITYSDK_OFFSET(0x189C8CC0)
#define UNITYENGINE_ANDROIDJNI_FROMFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x189C8CB0)
#define UNITYENGINE_ANDROIDJNI_FROMINTARRAY_OFFSET UNITYSDK_OFFSET(0x189C8C90)
#define UNITYENGINE_ANDROIDJNI_FROMLONGARRAY_OFFSET UNITYSDK_OFFSET(0x189C8CA0)
#define UNITYENGINE_ANDROIDJNI_FROMREFLECTEDMETHOD_OFFSET UNITYSDK_OFFSET(0x189C8860)
#define UNITYENGINE_ANDROIDJNI_FROMSBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x189C8C60)
#define UNITYENGINE_ANDROIDJNI_FROMSHORTARRAY_OFFSET UNITYSDK_OFFSET(0x189C8C80)
#define UNITYENGINE_ANDROIDJNI_GETARRAYLENGTH_OFFSET UNITYSDK_OFFSET(0x189C8CD0)
#define UNITYENGINE_ANDROIDJNI_GETFIELDID_OFFSET UNITYSDK_OFFSET(0x189C8940)
#define UNITYENGINE_ANDROIDJNI_GETMETHODID_OFFSET UNITYSDK_OFFSET(0x189C8930)
#define UNITYENGINE_ANDROIDJNI_GETOBJECTARRAYELEMENT_OFFSET UNITYSDK_OFFSET(0x189C8D10)
#define UNITYENGINE_ANDROIDJNI_GETOBJECTCLASS_OFFSET UNITYSDK_OFFSET(0x189C8920)
#define UNITYENGINE_ANDROIDJNI_GETSTATICBOOLEANFIELD_OFFSET UNITYSDK_OFFSET(0x189C8B20)
#define UNITYENGINE_ANDROIDJNI_GETSTATICCHARFIELD_OFFSET UNITYSDK_OFFSET(0x189C8B40)
#define UNITYENGINE_ANDROIDJNI_GETSTATICDOUBLEFIELD_OFFSET UNITYSDK_OFFSET(0x189C8B90)
#define UNITYENGINE_ANDROIDJNI_GETSTATICFIELDID_OFFSET UNITYSDK_OFFSET(0x189C8960)
#define UNITYENGINE_ANDROIDJNI_GETSTATICFLOATFIELD_OFFSET UNITYSDK_OFFSET(0x189C8B80)
#define UNITYENGINE_ANDROIDJNI_GETSTATICINTFIELD_OFFSET UNITYSDK_OFFSET(0x189C8B60)
#define UNITYENGINE_ANDROIDJNI_GETSTATICLONGFIELD_OFFSET UNITYSDK_OFFSET(0x189C8B70)
#define UNITYENGINE_ANDROIDJNI_GETSTATICMETHODID_OFFSET UNITYSDK_OFFSET(0x189C8950)
#define UNITYENGINE_ANDROIDJNI_GETSTATICOBJECTFIELD_OFFSET UNITYSDK_OFFSET(0x189C8B10)
#define UNITYENGINE_ANDROIDJNI_GETSTATICSBYTEFIELD_OFFSET UNITYSDK_OFFSET(0x189C8B30)
#define UNITYENGINE_ANDROIDJNI_GETSTATICSHORTFIELD_OFFSET UNITYSDK_OFFSET(0x189C8B50)
#define UNITYENGINE_ANDROIDJNI_GETSTATICSTRINGFIELD_OFFSET UNITYSDK_OFFSET(0x189C8B00)
#define UNITYENGINE_ANDROIDJNI_GETSTRINGCHARS_OFFSET UNITYSDK_OFFSET(0x189C8990)
#define UNITYENGINE_ANDROIDJNI_NEWBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x189C8CE0)
#define UNITYENGINE_ANDROIDJNI_NEWGLOBALREF_OFFSET UNITYSDK_OFFSET(0x189C88B0)
#define UNITYENGINE_ANDROIDJNI_NEWLOCALREF_OFFSET UNITYSDK_OFFSET(0x189C88F0)
#define UNITYENGINE_ANDROIDJNI_NEWOBJECTARRAY_OFFSET UNITYSDK_OFFSET(0x189C8D00)
#define UNITYENGINE_ANDROIDJNI_NEWOBJECT_OFFSET UNITYSDK_OFFSET(0x189C8910)
#define UNITYENGINE_ANDROIDJNI_NEWSBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x189C8CF0)
#define UNITYENGINE_ANDROIDJNI_NEWSTRINGFROMSTR_OFFSET UNITYSDK_OFFSET(0x189C8980)
#define UNITYENGINE_ANDROIDJNI_NEWSTRING_OFFSET UNITYSDK_OFFSET(0x189C8970)
#define UNITYENGINE_ANDROIDJNI_NEWWEAKGLOBALREF_OFFSET UNITYSDK_OFFSET(0x189C88D0)
#define UNITYENGINE_ANDROIDJNI_POPLOCALFRAME_OFFSET UNITYSDK_OFFSET(0x189C88A0)
#define UNITYENGINE_ANDROIDJNI_PUSHLOCALFRAME_OFFSET UNITYSDK_OFFSET(0x189C8890)
#define UNITYENGINE_ANDROIDJNI_SETOBJECTARRAYELEMENT_OFFSET UNITYSDK_OFFSET(0x189C8D20)
#define UNITYENGINE_ANDROIDJNI_TOBOOLEANARRAY_OFFSET UNITYSDK_OFFSET(0x189C8BA0)
#define UNITYENGINE_ANDROIDJNI_TOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x189C8BB0)
#define UNITYENGINE_ANDROIDJNI_TOCHARARRAY_OFFSET UNITYSDK_OFFSET(0x189C8BD0)
#define UNITYENGINE_ANDROIDJNI_TODOUBLEARRAY_OFFSET UNITYSDK_OFFSET(0x189C8C20)
#define UNITYENGINE_ANDROIDJNI_TOFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x189C8C10)
#define UNITYENGINE_ANDROIDJNI_TOINTARRAY_OFFSET UNITYSDK_OFFSET(0x189C8BF0)
#define UNITYENGINE_ANDROIDJNI_TOLONGARRAY_OFFSET UNITYSDK_OFFSET(0x189C8C00)
#define UNITYENGINE_ANDROIDJNI_TOOBJECTARRAY_OFFSET UNITYSDK_OFFSET(0x189C8C30)
#define UNITYENGINE_ANDROIDJNI_TOSBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x189C8BC0)
#define UNITYENGINE_ANDROIDJNI_TOSHORTARRAY_OFFSET UNITYSDK_OFFSET(0x189C8BE0)

namespace UnityEngine
{
	inline static constexpr unsigned int AndroidJNI_TypeDefinitionIndex = 5397;

	class AndroidJNI : public ::System::Object
	{
	public:
		static ::System::IntPtr FindClass(::System::String* name)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_FINDCLASS_OFFSET))(name);
		}

		static ::System::IntPtr FromReflectedMethod(::System::IntPtr refMethod)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_FROMREFLECTEDMETHOD_OFFSET))(refMethod);
		}

		static ::System::IntPtr ExceptionOccurred()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_EXCEPTIONOCCURRED_OFFSET))();
		}

		static ::System::Void ExceptionClear()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_EXCEPTIONCLEAR_OFFSET))();
		}

		static ::System::Int32 PushLocalFrame(::System::Int32 capacity)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_PUSHLOCALFRAME_OFFSET))(capacity);
		}

		static ::System::IntPtr PopLocalFrame(::System::IntPtr ptr)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_POPLOCALFRAME_OFFSET))(ptr);
		}

		static ::System::IntPtr NewGlobalRef(::System::IntPtr obj)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_NEWGLOBALREF_OFFSET))(obj);
		}

		static ::System::Void DeleteGlobalRef(::System::IntPtr obj)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_DELETEGLOBALREF_OFFSET))(obj);
		}

		static ::System::IntPtr NewWeakGlobalRef(::System::IntPtr obj)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_NEWWEAKGLOBALREF_OFFSET))(obj);
		}

		static ::System::Void DeleteWeakGlobalRef(::System::IntPtr obj)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_DELETEWEAKGLOBALREF_OFFSET))(obj);
		}

		static ::System::IntPtr NewLocalRef(::System::IntPtr obj)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_NEWLOCALREF_OFFSET))(obj);
		}

		static ::System::Void DeleteLocalRef(::System::IntPtr obj)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_DELETELOCALREF_OFFSET))(obj);
		}

		static ::System::IntPtr NewObject(::System::IntPtr clazz, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_NEWOBJECT_OFFSET))(clazz, methodID, args);
		}

		static ::System::IntPtr GetObjectClass(::System::IntPtr obj)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETOBJECTCLASS_OFFSET))(obj);
		}

		static ::System::IntPtr GetMethodID(::System::IntPtr clazz, ::System::String* name, ::System::String* sig)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETMETHODID_OFFSET))(clazz, name, sig);
		}

		static ::System::IntPtr GetFieldID(::System::IntPtr clazz, ::System::String* name, ::System::String* sig)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETFIELDID_OFFSET))(clazz, name, sig);
		}

		static ::System::IntPtr GetStaticMethodID(::System::IntPtr clazz, ::System::String* name, ::System::String* sig)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTATICMETHODID_OFFSET))(clazz, name, sig);
		}

		static ::System::IntPtr GetStaticFieldID(::System::IntPtr clazz, ::System::String* name, ::System::String* sig)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTATICFIELDID_OFFSET))(clazz, name, sig);
		}

		static ::System::IntPtr NewString(::System::String* chars)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_NEWSTRING_OFFSET))(chars);
		}

		static ::System::IntPtr NewStringFromStr(::System::String* chars)
		{
			return ((::System::IntPtr(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_NEWSTRINGFROMSTR_OFFSET))(chars);
		}

		static ::System::String* GetStringChars(::System::IntPtr str)
		{
			return ((::System::String*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTRINGCHARS_OFFSET))(str);
		}

		static ::System::String* CallStringMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::String*(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSTRINGMETHOD_OFFSET))(obj, methodID, args);
		}

		static ::System::IntPtr CallObjectMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLOBJECTMETHOD_OFFSET))(obj, methodID, args);
		}

		static ::System::Int32 CallIntMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLINTMETHOD_OFFSET))(obj, methodID, args);
		}

		static ::System::Boolean CallBooleanMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLBOOLEANMETHOD_OFFSET))(obj, methodID, args);
		}

		static ::System::Int16 CallShortMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::Int16(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSHORTMETHOD_OFFSET))(obj, methodID, args);
		}

		static ::System::SByte CallSByteMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::SByte(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSBYTEMETHOD_OFFSET))(obj, methodID, args);
		}

		static ::System::Char CallCharMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::Char(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLCHARMETHOD_OFFSET))(obj, methodID, args);
		}

		static ::System::Single CallFloatMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::Single(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLFLOATMETHOD_OFFSET))(obj, methodID, args);
		}

		static ::System::Double CallDoubleMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::Double(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLDOUBLEMETHOD_OFFSET))(obj, methodID, args);
		}

		static ::System::Int64 CallLongMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::Int64(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLLONGMETHOD_OFFSET))(obj, methodID, args);
		}

		static ::System::Void CallVoidMethod(::System::IntPtr obj, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLVOIDMETHOD_OFFSET))(obj, methodID, args);
		}

		static ::System::String* CallStaticStringMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::String*(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSTATICSTRINGMETHOD_OFFSET))(clazz, methodID, args);
		}

		static ::System::IntPtr CallStaticObjectMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSTATICOBJECTMETHOD_OFFSET))(clazz, methodID, args);
		}

		static ::System::Int32 CallStaticIntMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSTATICINTMETHOD_OFFSET))(clazz, methodID, args);
		}

		static ::System::Boolean CallStaticBooleanMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSTATICBOOLEANMETHOD_OFFSET))(clazz, methodID, args);
		}

		static ::System::Int16 CallStaticShortMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::Int16(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSTATICSHORTMETHOD_OFFSET))(clazz, methodID, args);
		}

		static ::System::SByte CallStaticSByteMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::SByte(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSTATICSBYTEMETHOD_OFFSET))(clazz, methodID, args);
		}

		static ::System::Char CallStaticCharMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::Char(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSTATICCHARMETHOD_OFFSET))(clazz, methodID, args);
		}

		static ::System::Single CallStaticFloatMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::Single(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSTATICFLOATMETHOD_OFFSET))(clazz, methodID, args);
		}

		static ::System::Double CallStaticDoubleMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::Double(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSTATICDOUBLEMETHOD_OFFSET))(clazz, methodID, args);
		}

		static ::System::Int64 CallStaticLongMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::Int64(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSTATICLONGMETHOD_OFFSET))(clazz, methodID, args);
		}

		static ::System::Void CallStaticVoidMethod(::System::IntPtr clazz, ::System::IntPtr methodID, ::Il2CppArray<::UnityEngine::jvalue>* args)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::IntPtr, ::Il2CppArray<::UnityEngine::jvalue>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_CALLSTATICVOIDMETHOD_OFFSET))(clazz, methodID, args);
		}

		static ::System::String* GetStaticStringField(::System::IntPtr clazz, ::System::IntPtr fieldID)
		{
			return ((::System::String*(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTATICSTRINGFIELD_OFFSET))(clazz, fieldID);
		}

		static ::System::IntPtr GetStaticObjectField(::System::IntPtr clazz, ::System::IntPtr fieldID)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTATICOBJECTFIELD_OFFSET))(clazz, fieldID);
		}

		static ::System::Boolean GetStaticBooleanField(::System::IntPtr clazz, ::System::IntPtr fieldID)
		{
			return ((::System::Boolean(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTATICBOOLEANFIELD_OFFSET))(clazz, fieldID);
		}

		static ::System::SByte GetStaticSByteField(::System::IntPtr clazz, ::System::IntPtr fieldID)
		{
			return ((::System::SByte(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTATICSBYTEFIELD_OFFSET))(clazz, fieldID);
		}

		static ::System::Char GetStaticCharField(::System::IntPtr clazz, ::System::IntPtr fieldID)
		{
			return ((::System::Char(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTATICCHARFIELD_OFFSET))(clazz, fieldID);
		}

		static ::System::Int16 GetStaticShortField(::System::IntPtr clazz, ::System::IntPtr fieldID)
		{
			return ((::System::Int16(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTATICSHORTFIELD_OFFSET))(clazz, fieldID);
		}

		static ::System::Int32 GetStaticIntField(::System::IntPtr clazz, ::System::IntPtr fieldID)
		{
			return ((::System::Int32(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTATICINTFIELD_OFFSET))(clazz, fieldID);
		}

		static ::System::Int64 GetStaticLongField(::System::IntPtr clazz, ::System::IntPtr fieldID)
		{
			return ((::System::Int64(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTATICLONGFIELD_OFFSET))(clazz, fieldID);
		}

		static ::System::Single GetStaticFloatField(::System::IntPtr clazz, ::System::IntPtr fieldID)
		{
			return ((::System::Single(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTATICFLOATFIELD_OFFSET))(clazz, fieldID);
		}

		static ::System::Double GetStaticDoubleField(::System::IntPtr clazz, ::System::IntPtr fieldID)
		{
			return ((::System::Double(*)(::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETSTATICDOUBLEFIELD_OFFSET))(clazz, fieldID);
		}

		static ::System::IntPtr ToBooleanArray(::Il2CppArray<::System::Boolean>* array)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_TOBOOLEANARRAY_OFFSET))(array);
		}

		static ::System::IntPtr ToByteArray(::Il2CppArray<::System::Byte>* array)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_TOBYTEARRAY_OFFSET))(array);
		}

		static ::System::IntPtr ToSByteArray(::Il2CppArray<::System::SByte>* array)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::SByte>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_TOSBYTEARRAY_OFFSET))(array);
		}

		static ::System::IntPtr ToCharArray(::Il2CppArray<::System::Char>* array)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::Char>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_TOCHARARRAY_OFFSET))(array);
		}

		static ::System::IntPtr ToShortArray(::Il2CppArray<::System::Int16>* array)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::Int16>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_TOSHORTARRAY_OFFSET))(array);
		}

		static ::System::IntPtr ToIntArray(::Il2CppArray<::System::Int32>* array)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_TOINTARRAY_OFFSET))(array);
		}

		static ::System::IntPtr ToLongArray(::Il2CppArray<::System::Int64>* array)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::Int64>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_TOLONGARRAY_OFFSET))(array);
		}

		static ::System::IntPtr ToFloatArray(::Il2CppArray<::System::Single>* array)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_TOFLOATARRAY_OFFSET))(array);
		}

		static ::System::IntPtr ToDoubleArray(::Il2CppArray<::System::Double>* array)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::Double>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_TODOUBLEARRAY_OFFSET))(array);
		}

		static ::System::IntPtr ToObjectArray(::Il2CppArray<::System::IntPtr>* array, ::System::IntPtr arrayClass)
		{
			return ((::System::IntPtr(*)(::Il2CppArray<::System::IntPtr>*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_TOOBJECTARRAY_OFFSET))(array, arrayClass);
		}

		static ::Il2CppArray<::System::Boolean>* FromBooleanArray(::System::IntPtr array)
		{
			return ((::Il2CppArray<::System::Boolean>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_FROMBOOLEANARRAY_OFFSET))(array);
		}

		static ::Il2CppArray<::System::Byte>* FromByteArray(::System::IntPtr array)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_FROMBYTEARRAY_OFFSET))(array);
		}

		static ::Il2CppArray<::System::SByte>* FromSByteArray(::System::IntPtr array)
		{
			return ((::Il2CppArray<::System::SByte>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_FROMSBYTEARRAY_OFFSET))(array);
		}

		static ::Il2CppArray<::System::Char>* FromCharArray(::System::IntPtr array)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_FROMCHARARRAY_OFFSET))(array);
		}

		static ::Il2CppArray<::System::Int16>* FromShortArray(::System::IntPtr array)
		{
			return ((::Il2CppArray<::System::Int16>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_FROMSHORTARRAY_OFFSET))(array);
		}

		static ::Il2CppArray<::System::Int32>* FromIntArray(::System::IntPtr array)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_FROMINTARRAY_OFFSET))(array);
		}

		static ::Il2CppArray<::System::Int64>* FromLongArray(::System::IntPtr array)
		{
			return ((::Il2CppArray<::System::Int64>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_FROMLONGARRAY_OFFSET))(array);
		}

		static ::Il2CppArray<::System::Single>* FromFloatArray(::System::IntPtr array)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_FROMFLOATARRAY_OFFSET))(array);
		}

		static ::Il2CppArray<::System::Double>* FromDoubleArray(::System::IntPtr array)
		{
			return ((::Il2CppArray<::System::Double>*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_FROMDOUBLEARRAY_OFFSET))(array);
		}

		static ::System::Int32 GetArrayLength(::System::IntPtr array)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETARRAYLENGTH_OFFSET))(array);
		}

		static ::System::IntPtr NewByteArray(::System::Int32 size)
		{
			return ((::System::IntPtr(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_NEWBYTEARRAY_OFFSET))(size);
		}

		static ::System::IntPtr NewSByteArray(::System::Int32 size)
		{
			return ((::System::IntPtr(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_NEWSBYTEARRAY_OFFSET))(size);
		}

		static ::System::IntPtr NewObjectArray(::System::Int32 size, ::System::IntPtr clazz, ::System::IntPtr obj)
		{
			return ((::System::IntPtr(*)(::System::Int32, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_NEWOBJECTARRAY_OFFSET))(size, clazz, obj);
		}

		static ::System::IntPtr GetObjectArrayElement(::System::IntPtr array, ::System::Int32 index)
		{
			return ((::System::IntPtr(*)(::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_GETOBJECTARRAYELEMENT_OFFSET))(array, index);
		}

		static ::System::Void SetObjectArrayElement(::System::IntPtr array, ::System::Int32 index, ::System::IntPtr obj)
		{
			return ((::System::Void(*)(::System::IntPtr, ::System::Int32, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJNI_SETOBJECTARRAYELEMENT_OFFSET))(array, index, obj);
		}
	};
}
