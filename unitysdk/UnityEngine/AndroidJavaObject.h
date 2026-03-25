#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class AndroidJavaClass; }
namespace UnityEngine { class GlobalJavaObjectRef; }

#define UNITYENGINE_ANDROIDJAVAOBJECT_ANDROIDJAVACLASSDELETELOCALREF_OFFSET UNITYSDK_OFFSET(0x189CD3B0)
#define UNITYENGINE_ANDROIDJAVAOBJECT_ANDROIDJAVAOBJECTDELETELOCALREF_OFFSET UNITYSDK_OFFSET(0x189CD2F0)
#define UNITYENGINE_ANDROIDJAVAOBJECT_CALL_OFFSET UNITYSDK_OFFSET(0x189CCE90)
#define UNITYENGINE_ANDROIDJAVAOBJECT_DEBUGPRINT_OFFSET UNITYSDK_OFFSET(0x189CC8C0)
#define UNITYENGINE_ANDROIDJAVAOBJECT_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x189CD260)
#define UNITYENGINE_ANDROIDJAVAOBJECT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x189CCE40)
#define UNITYENGINE_ANDROIDJAVAOBJECT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x189CD1F0)
#define UNITYENGINE_ANDROIDJAVAOBJECT_GETRAWCLASS_OFFSET UNITYSDK_OFFSET(0x189CD030)
#define UNITYENGINE_ANDROIDJAVAOBJECT_GETRAWOBJECT_OFFSET UNITYSDK_OFFSET(0x189CCFF0)
#define UNITYENGINE_ANDROIDJAVAOBJECT__ANDROIDJAVAOBJECT_OFFSET UNITYSDK_OFFSET(0x189CCAE0)
#define UNITYENGINE_ANDROIDJAVAOBJECT__CALL_OFFSET UNITYSDK_OFFSET(0x189CCEA0)
#define UNITYENGINE_ANDROIDJAVAOBJECT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x189CD090)
#define UNITYENGINE_ANDROIDJAVAOBJECT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x189CC6C0)
#define UNITYENGINE_ANDROIDJAVAOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x189CCAD0)
#define UNITYENGINE_ANDROIDJAVAOBJECT__GETRAWCLASS_OFFSET UNITYSDK_OFFSET(0x189CD050)
#define UNITYENGINE_ANDROIDJAVAOBJECT__GETRAWOBJECT_OFFSET UNITYSDK_OFFSET(0x189CD010)

namespace UnityEngine
{
	inline static constexpr unsigned int AndroidJavaObject_TypeDefinitionIndex = 5391;

	class AndroidJavaObject : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_enableDebugPrints()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AndroidJavaObject_TypeDefinitionIndex)->GetStaticField(0x2C0);
		}
		::UnityEngine::GlobalJavaObjectRef* m_jobject; // 0x10
		::UnityEngine::GlobalJavaObjectRef* m_jclass; // 0x18

		::System::Void _ctor(::System::String* className, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT__CTOR_OFFSET))(this, className, args);
		}

		::System::Void _ctor_1(::System::IntPtr jobject)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT__CTOR_1_OFFSET))(this, jobject);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT__CTOR_2_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT_DISPOSE_OFFSET))(this);
		}

		::System::Void Call(::System::String* methodName, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT_CALL_OFFSET))(this, methodName, args);
		}

		::System::IntPtr GetRawObject()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT_GETRAWOBJECT_OFFSET))(this);
		}

		::System::IntPtr GetRawClass()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT_GETRAWCLASS_OFFSET))(this);
		}

		::System::Void DebugPrint(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT_DEBUGPRINT_OFFSET))(this, msg);
		}

		::System::Void _AndroidJavaObject(::System::String* className, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT__ANDROIDJAVAOBJECT_OFFSET))(this, className, args);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void _Call(::System::String* methodName, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT__CALL_OFFSET))(this, methodName, args);
		}

		static ::UnityEngine::AndroidJavaObject* AndroidJavaObjectDeleteLocalRef(::System::IntPtr jobject)
		{
			return ((::UnityEngine::AndroidJavaObject*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT_ANDROIDJAVAOBJECTDELETELOCALREF_OFFSET))(jobject);
		}

		static ::UnityEngine::AndroidJavaClass* AndroidJavaClassDeleteLocalRef(::System::IntPtr jclass)
		{
			return ((::UnityEngine::AndroidJavaClass*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT_ANDROIDJAVACLASSDELETELOCALREF_OFFSET))(jclass);
		}

		::System::IntPtr _GetRawObject()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT__GETRAWOBJECT_OFFSET))(this);
		}

		::System::IntPtr _GetRawClass()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT__GETRAWCLASS_OFFSET))(this);
		}
	};
}
