#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/jvalue.h"

namespace System { class String; }

#define UNITYENGINE_ANDROIDJNI_CALLBOOLEANMETHOD_OFFSET UNITYSDK_OFFSET(0x1A402460)
#define UNITYENGINE_ANDROIDJNI_CALLCHARMETHOD_OFFSET UNITYSDK_OFFSET(0x1A402490)
#define UNITYENGINE_ANDROIDJNI_CALLDOUBLEMETHOD_OFFSET UNITYSDK_OFFSET(0x1A4024B0)
#define UNITYENGINE_ANDROIDJNI_CALLFLOATMETHOD_OFFSET UNITYSDK_OFFSET(0x1A4024A0)
#define UNITYENGINE_ANDROIDJNI_CALLINTMETHOD_OFFSET UNITYSDK_OFFSET(0x1A402450)
#define UNITYENGINE_ANDROIDJNI_CALLLONGMETHOD_OFFSET UNITYSDK_OFFSET(0x1A4024C0)
#define UNITYENGINE_ANDROIDJNI_CALLOBJECTMETHOD_OFFSET UNITYSDK_OFFSET(0x1A402440)
#define UNITYENGINE_ANDROIDJNI_CALLSBYTEMETHOD_OFFSET UNITYSDK_OFFSET(0x1A402480)
#define UNITYENGINE_ANDROIDJNI_CALLSHORTMETHOD_OFFSET UNITYSDK_OFFSET(0x1A402470)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICBOOLEANMETHOD_OFFSET UNITYSDK_OFFSET(0x1A402510)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICCHARMETHOD_OFFSET UNITYSDK_OFFSET(0x1A402540)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICDOUBLEMETHOD_OFFSET UNITYSDK_OFFSET(0x1A402560)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICFLOATMETHOD_OFFSET UNITYSDK_OFFSET(0x1A402550)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICINTMETHOD_OFFSET UNITYSDK_OFFSET(0x1A402500)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICLONGMETHOD_OFFSET UNITYSDK_OFFSET(0x1A402570)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICOBJECTMETHOD_OFFSET UNITYSDK_OFFSET(0x1A4024F0)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICSBYTEMETHOD_OFFSET UNITYSDK_OFFSET(0x1A402530)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICSHORTMETHOD_OFFSET UNITYSDK_OFFSET(0x1A402520)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICSTRINGMETHOD_OFFSET UNITYSDK_OFFSET(0x1A4024E0)
#define UNITYENGINE_ANDROIDJNI_CALLSTATICVOIDMETHOD_OFFSET UNITYSDK_OFFSET(0x1A402580)
#define UNITYENGINE_ANDROIDJNI_CALLSTRINGMETHOD_OFFSET UNITYSDK_OFFSET(0x1A402430)
#define UNITYENGINE_ANDROIDJNI_CALLVOIDMETHOD_OFFSET UNITYSDK_OFFSET(0x1A4024D0)
#define UNITYENGINE_ANDROIDJNI_DELETEGLOBALREF_OFFSET UNITYSDK_OFFSET(0x1A402350)
#define UNITYENGINE_ANDROIDJNI_DELETELOCALREF_OFFSET UNITYSDK_OFFSET(0x1A402390)
#define UNITYENGINE_ANDROIDJNI_DELETEWEAKGLOBALREF_OFFSET UNITYSDK_OFFSET(0x1A402370)
#define UNITYENGINE_ANDROIDJNI_EXCEPTIONCLEAR_OFFSET UNITYSDK_OFFSET(0x1A402310)
#define UNITYENGINE_ANDROIDJNI_EXCEPTIONOCCURRED_OFFSET UNITYSDK_OFFSET(0x1A402300)
#define UNITYENGINE_ANDROIDJNI_FINDCLASS_OFFSET UNITYSDK_OFFSET(0x1A4022E0)
#define UNITYENGINE_ANDROIDJNI_FROMBOOLEANARRAY_OFFSET UNITYSDK_OFFSET(0x1A4026D0)
#define UNITYENGINE_ANDROIDJNI_FROMBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1A4026E0)
#define UNITYENGINE_ANDROIDJNI_FROMCHARARRAY_OFFSET UNITYSDK_OFFSET(0x1A402700)
#define UNITYENGINE_ANDROIDJNI_FROMDOUBLEARRAY_OFFSET UNITYSDK_OFFSET(0x1A402750)
#define UNITYENGINE_ANDROIDJNI_FROMFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x1A402740)
#define UNITYENGINE_ANDROIDJNI_FROMINTARRAY_OFFSET UNITYSDK_OFFSET(0x1A402720)
#define UNITYENGINE_ANDROIDJNI_FROMLONGARRAY_OFFSET UNITYSDK_OFFSET(0x1A402730)
#define UNITYENGINE_ANDROIDJNI_FROMREFLECTEDMETHOD_OFFSET UNITYSDK_OFFSET(0x1A4022F0)
#define UNITYENGINE_ANDROIDJNI_FROMSBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1A4026F0)
#define UNITYENGINE_ANDROIDJNI_FROMSHORTARRAY_OFFSET UNITYSDK_OFFSET(0x1A402710)
#define UNITYENGINE_ANDROIDJNI_GETARRAYLENGTH_OFFSET UNITYSDK_OFFSET(0x1A402760)
#define UNITYENGINE_ANDROIDJNI_GETFIELDID_OFFSET UNITYSDK_OFFSET(0x1A4023D0)
#define UNITYENGINE_ANDROIDJNI_GETMETHODID_OFFSET UNITYSDK_OFFSET(0x1A4023C0)
#define UNITYENGINE_ANDROIDJNI_GETOBJECTARRAYELEMENT_OFFSET UNITYSDK_OFFSET(0x1A4027A0)
#define UNITYENGINE_ANDROIDJNI_GETOBJECTCLASS_OFFSET UNITYSDK_OFFSET(0x1A4023B0)
#define UNITYENGINE_ANDROIDJNI_GETSTATICBOOLEANFIELD_OFFSET UNITYSDK_OFFSET(0x1A4025B0)
#define UNITYENGINE_ANDROIDJNI_GETSTATICCHARFIELD_OFFSET UNITYSDK_OFFSET(0x1A4025D0)
#define UNITYENGINE_ANDROIDJNI_GETSTATICDOUBLEFIELD_OFFSET UNITYSDK_OFFSET(0x1A402620)
#define UNITYENGINE_ANDROIDJNI_GETSTATICFIELDID_OFFSET UNITYSDK_OFFSET(0x1A4023F0)
#define UNITYENGINE_ANDROIDJNI_GETSTATICFLOATFIELD_OFFSET UNITYSDK_OFFSET(0x1A402610)
#define UNITYENGINE_ANDROIDJNI_GETSTATICINTFIELD_OFFSET UNITYSDK_OFFSET(0x1A4025F0)
#define UNITYENGINE_ANDROIDJNI_GETSTATICLONGFIELD_OFFSET UNITYSDK_OFFSET(0x1A402600)
#define UNITYENGINE_ANDROIDJNI_GETSTATICMETHODID_OFFSET UNITYSDK_OFFSET(0x1A4023E0)
#define UNITYENGINE_ANDROIDJNI_GETSTATICOBJECTFIELD_OFFSET UNITYSDK_OFFSET(0x1A4025A0)
#define UNITYENGINE_ANDROIDJNI_GETSTATICSBYTEFIELD_OFFSET UNITYSDK_OFFSET(0x1A4025C0)
#define UNITYENGINE_ANDROIDJNI_GETSTATICSHORTFIELD_OFFSET UNITYSDK_OFFSET(0x1A4025E0)
#define UNITYENGINE_ANDROIDJNI_GETSTATICSTRINGFIELD_OFFSET UNITYSDK_OFFSET(0x1A402590)
#define UNITYENGINE_ANDROIDJNI_GETSTRINGCHARS_OFFSET UNITYSDK_OFFSET(0x1A402420)
#define UNITYENGINE_ANDROIDJNI_NEWBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1A402770)
#define UNITYENGINE_ANDROIDJNI_NEWGLOBALREF_OFFSET UNITYSDK_OFFSET(0x1A402340)
#define UNITYENGINE_ANDROIDJNI_NEWLOCALREF_OFFSET UNITYSDK_OFFSET(0x1A402380)
#define UNITYENGINE_ANDROIDJNI_NEWOBJECTARRAY_OFFSET UNITYSDK_OFFSET(0x1A402790)
#define UNITYENGINE_ANDROIDJNI_NEWOBJECT_OFFSET UNITYSDK_OFFSET(0x1A4023A0)
#define UNITYENGINE_ANDROIDJNI_NEWSBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1A402780)
#define UNITYENGINE_ANDROIDJNI_NEWSTRINGFROMSTR_OFFSET UNITYSDK_OFFSET(0x1A402410)
#define UNITYENGINE_ANDROIDJNI_NEWSTRING_OFFSET UNITYSDK_OFFSET(0x1A402400)
#define UNITYENGINE_ANDROIDJNI_NEWWEAKGLOBALREF_OFFSET UNITYSDK_OFFSET(0x1A402360)
#define UNITYENGINE_ANDROIDJNI_POPLOCALFRAME_OFFSET UNITYSDK_OFFSET(0x1A402330)
#define UNITYENGINE_ANDROIDJNI_PUSHLOCALFRAME_OFFSET UNITYSDK_OFFSET(0x1A402320)
#define UNITYENGINE_ANDROIDJNI_SETOBJECTARRAYELEMENT_OFFSET UNITYSDK_OFFSET(0x1A4027B0)
#define UNITYENGINE_ANDROIDJNI_TOBOOLEANARRAY_OFFSET UNITYSDK_OFFSET(0x1A402630)
#define UNITYENGINE_ANDROIDJNI_TOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1A402640)
#define UNITYENGINE_ANDROIDJNI_TOCHARARRAY_OFFSET UNITYSDK_OFFSET(0x1A402660)
#define UNITYENGINE_ANDROIDJNI_TODOUBLEARRAY_OFFSET UNITYSDK_OFFSET(0x1A4026B0)
#define UNITYENGINE_ANDROIDJNI_TOFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x1A4026A0)
#define UNITYENGINE_ANDROIDJNI_TOINTARRAY_OFFSET UNITYSDK_OFFSET(0x1A402680)
#define UNITYENGINE_ANDROIDJNI_TOLONGARRAY_OFFSET UNITYSDK_OFFSET(0x1A402690)
#define UNITYENGINE_ANDROIDJNI_TOOBJECTARRAY_OFFSET UNITYSDK_OFFSET(0x1A4026C0)
#define UNITYENGINE_ANDROIDJNI_TOSBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1A402650)
#define UNITYENGINE_ANDROIDJNI_TOSHORTARRAY_OFFSET UNITYSDK_OFFSET(0x1A402670)

namespace UnityEngine
{
	inline static constexpr unsigned int AndroidJNI_TypeDefinitionIndex = 5408;

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
