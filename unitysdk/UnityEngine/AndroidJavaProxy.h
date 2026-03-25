#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class AndroidJavaClass; }
namespace UnityEngine { class AndroidJavaObject; }
namespace UnityEngine { class GlobalJavaObjectRef; }

#define UNITYENGINE_ANDROIDJAVAPROXY_FINALIZE_OFFSET UNITYSDK_OFFSET(0x189CD4E0)
#define UNITYENGINE_ANDROIDJAVAPROXY_GETPROXYOBJECT_OFFSET UNITYSDK_OFFSET(0x189CF1A0)
#define UNITYENGINE_ANDROIDJAVAPROXY_GETRAWPROXY_OFFSET UNITYSDK_OFFSET(0x189CE8A0)
#define UNITYENGINE_ANDROIDJAVAPROXY_INVOKE_1_OFFSET UNITYSDK_OFFSET(0x189CEAA0)
#define UNITYENGINE_ANDROIDJAVAPROXY_INVOKE_OFFSET UNITYSDK_OFFSET(0x189CD550)
#define UNITYENGINE_ANDROIDJAVAPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x189CF2A0)
#define UNITYENGINE_ANDROIDJAVAPROXY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x189CD4D0)
#define UNITYENGINE_ANDROIDJAVAPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x189CD470)

namespace UnityEngine
{
	inline static constexpr unsigned int AndroidJavaProxy_TypeDefinitionIndex = 5390;

	class AndroidJavaProxy : public ::System::Object
	{
	public:
		static ::UnityEngine::GlobalJavaObjectRef** StaticGet_s_JavaLangSystemClass()
		{
			return (::UnityEngine::GlobalJavaObjectRef**)Il2CppClass::FromTypeDefinitionIndex(AndroidJavaProxy_TypeDefinitionIndex)->GetStaticField(0x3D0);
		}
		static ::System::IntPtr* StaticGet_s_HashCodeMethodID()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(AndroidJavaProxy_TypeDefinitionIndex)->GetStaticField(0x2D0);
		}
		::UnityEngine::AndroidJavaClass* javaInterface; // 0x10
		::System::IntPtr proxyObject; // 0x18

		::System::Void _ctor(::System::String* javaInterface)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAPROXY__CTOR_OFFSET))(this, javaInterface);
		}

		::System::Void _ctor_1(::UnityEngine::AndroidJavaClass* javaInterface)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AndroidJavaClass*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAPROXY__CTOR_1_OFFSET))(this, javaInterface);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAPROXY__CCTOR_OFFSET))();
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAPROXY_FINALIZE_OFFSET))(this);
		}

		::UnityEngine::AndroidJavaObject* Invoke(::System::String* methodName, ::Il2CppArray<::System::Object*>* args)
		{
			return ((::UnityEngine::AndroidJavaObject*(*)(::PVOID, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAPROXY_INVOKE_OFFSET))(this, methodName, args);
		}

		::UnityEngine::AndroidJavaObject* Invoke_1(::System::String* methodName, ::Il2CppArray<::UnityEngine::AndroidJavaObject*>* javaArgs)
		{
			return ((::UnityEngine::AndroidJavaObject*(*)(::PVOID, ::System::String*, ::Il2CppArray<::UnityEngine::AndroidJavaObject*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_ANDROIDJAVAPROXY_INVOKE_1_OFFSET))(this, methodName, javaArgs);
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
