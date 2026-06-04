#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class AndroidJavaClass; }
namespace UnityEngine { class GlobalJavaObjectRef; }

#define UNITYENGINE_ANDROIDJAVAOBJECT_ANDROIDJAVACLASSDELETELOCALREF_OFFSET UNITYSDK_OFFSET(0x1B25BAC0)
#define UNITYENGINE_ANDROIDJAVAOBJECT_ANDROIDJAVAOBJECTDELETELOCALREF_OFFSET UNITYSDK_OFFSET(0x1B25BA00)
#define UNITYENGINE_ANDROIDJAVAOBJECT_CALL_OFFSET UNITYSDK_OFFSET(0x1B25B5A0)
#define UNITYENGINE_ANDROIDJAVAOBJECT_DEBUGPRINT_OFFSET UNITYSDK_OFFSET(0x1B25AFF0)
#define UNITYENGINE_ANDROIDJAVAOBJECT_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1B25B970)
#define UNITYENGINE_ANDROIDJAVAOBJECT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B25B520)
#define UNITYENGINE_ANDROIDJAVAOBJECT_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B25B900)
#define UNITYENGINE_ANDROIDJAVAOBJECT_GETRAWCLASS_OFFSET UNITYSDK_OFFSET(0x1B25B740)
#define UNITYENGINE_ANDROIDJAVAOBJECT_GETRAWOBJECT_OFFSET UNITYSDK_OFFSET(0x1B25B700)
#define UNITYENGINE_ANDROIDJAVAOBJECT__ANDROIDJAVAOBJECT_OFFSET UNITYSDK_OFFSET(0x1B25B1F0)
#define UNITYENGINE_ANDROIDJAVAOBJECT__CALL_OFFSET UNITYSDK_OFFSET(0x1B25B5B0)
#define UNITYENGINE_ANDROIDJAVAOBJECT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B25B7A0)
#define UNITYENGINE_ANDROIDJAVAOBJECT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B25AE20)
#define UNITYENGINE_ANDROIDJAVAOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B25B1E0)
#define UNITYENGINE_ANDROIDJAVAOBJECT__GETRAWCLASS_OFFSET UNITYSDK_OFFSET(0x1B25B760)
#define UNITYENGINE_ANDROIDJAVAOBJECT__GETRAWOBJECT_OFFSET UNITYSDK_OFFSET(0x1B25B720)

namespace UnityEngine
{
	inline static constexpr unsigned int AndroidJavaObject_TypeDefinitionIndex = 5679;

	class AndroidJavaObject : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_enableDebugPrints()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AndroidJavaObject_TypeDefinitionIndex)->GetStaticField(0x360);
		}
		::UnityEngine::GlobalJavaObjectRef* m_jobject; // 0x10
		::UnityEngine::GlobalJavaObjectRef* m_jclass; // 0x18

		::System::Void _ctor(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT__CTOR_2_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT_DISPOSE_OFFSET))(this);
		}

		::System::Void Call(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT_CALL_OFFSET))(this, a1, a2);
		}

		::System::IntPtr GetRawObject()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT_GETRAWOBJECT_OFFSET))(this);
		}

		::System::IntPtr GetRawClass()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT_GETRAWCLASS_OFFSET))(this);
		}

		::System::Void DebugPrint(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT_DEBUGPRINT_OFFSET))(this, a1);
		}

		::System::Void _AndroidJavaObject(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT__ANDROIDJAVAOBJECT_OFFSET))(this, a1, a2);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Void _Call(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT__CALL_OFFSET))(this, a1, a2);
		}

		static ::UnityEngine::AndroidJavaObject* AndroidJavaObjectDeleteLocalRef(::System::IntPtr a1)
		{
			return ((::UnityEngine::AndroidJavaObject*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT_ANDROIDJAVAOBJECTDELETELOCALREF_OFFSET))(a1);
		}

		static ::UnityEngine::AndroidJavaClass* AndroidJavaClassDeleteLocalRef(::System::IntPtr a1)
		{
			return ((::UnityEngine::AndroidJavaClass*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAOBJECT_ANDROIDJAVACLASSDELETELOCALREF_OFFSET))(a1);
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
