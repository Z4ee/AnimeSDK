#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class AndroidJavaClass; }
namespace UnityEngine { class AndroidJavaObject; }
namespace UnityEngine { class GlobalJavaObjectRef; }

#define UNITYENGINE_ANDROIDJAVAPROXY_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D223E60)
#define UNITYENGINE_ANDROIDJAVAPROXY_GETPROXYOBJECT_OFFSET UNITYSDK_OFFSET(0x1D225AA0)
#define UNITYENGINE_ANDROIDJAVAPROXY_GETRAWPROXY_OFFSET UNITYSDK_OFFSET(0x1D225240)
#define UNITYENGINE_ANDROIDJAVAPROXY_INVOKE_1_OFFSET UNITYSDK_OFFSET(0x1D225400)
#define UNITYENGINE_ANDROIDJAVAPROXY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D223ED0)
#define UNITYENGINE_ANDROIDJAVAPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D225BA0)
#define UNITYENGINE_ANDROIDJAVAPROXY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D223E50)
#define UNITYENGINE_ANDROIDJAVAPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D223DF0)

namespace UnityEngine
{
	inline static constexpr unsigned int AndroidJavaProxy_TypeDefinitionIndex = 5683;

	class AndroidJavaProxy : public ::System::Object
	{
	public:
		static ::UnityEngine::GlobalJavaObjectRef** StaticGet_s_JavaLangSystemClass()
		{
			return (::UnityEngine::GlobalJavaObjectRef**)Il2CppClass::FromTypeDefinitionIndex(AndroidJavaProxy_TypeDefinitionIndex)->GetStaticField(0x400);
		}
		static ::System::IntPtr* StaticGet_s_HashCodeMethodID()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(AndroidJavaProxy_TypeDefinitionIndex)->GetStaticField(0x370);
		}
		::UnityEngine::AndroidJavaClass* javaInterface; // 0x10
		::System::IntPtr proxyObject; // 0x18

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAPROXY__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::UnityEngine::AndroidJavaClass* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AndroidJavaClass*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAPROXY__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAPROXY__CCTOR_OFFSET))();
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAPROXY_FINALIZE_OFFSET))(this);
		}

		::UnityEngine::AndroidJavaObject* Invoke(::System::String* a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::UnityEngine::AndroidJavaObject*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAPROXY_INVOKE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::AndroidJavaObject* Invoke_1(::System::String* a1, ::Il2CppArray<::UnityEngine::AndroidJavaObject*>* a2)
		{
			return ((::UnityEngine::AndroidJavaObject*(*)(::PVOID, ::System::String*, ::Il2CppArray<::UnityEngine::AndroidJavaObject*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAPROXY_INVOKE_1_OFFSET))(this, a1, a2);
		}

		::UnityEngine::AndroidJavaObject* GetProxyObject()
		{
			return ((::UnityEngine::AndroidJavaObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAPROXY_GETPROXYOBJECT_OFFSET))(this);
		}

		::System::IntPtr GetRawProxy()
		{
			return ((::System::IntPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAPROXY_GETRAWPROXY_OFFSET))(this);
		}
	};
}
