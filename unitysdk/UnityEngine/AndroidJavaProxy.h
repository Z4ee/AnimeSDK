#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class AndroidJavaClass; }
namespace UnityEngine { class AndroidJavaObject; }
namespace UnityEngine { class GlobalJavaObjectRef; }

#define UNITYENGINE_ANDROIDJAVAPROXY_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1F2B7D00)
#define UNITYENGINE_ANDROIDJAVAPROXY_GETPROXYOBJECT_OFFSET UNITYSDK_OFFSET(0x1F2B9D80)
#define UNITYENGINE_ANDROIDJAVAPROXY_GETRAWPROXY_OFFSET UNITYSDK_OFFSET(0x1F2B9350)
#define UNITYENGINE_ANDROIDJAVAPROXY_INVOKE_1_OFFSET UNITYSDK_OFFSET(0x1F2B9550)
#define UNITYENGINE_ANDROIDJAVAPROXY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1F2B7D70)
#define UNITYENGINE_ANDROIDJAVAPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2B9F00)
#define UNITYENGINE_ANDROIDJAVAPROXY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F2B7CF0)
#define UNITYENGINE_ANDROIDJAVAPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2B7C50)

namespace UnityEngine
{
	inline static constexpr unsigned int AndroidJavaProxy_TypeDefinitionIndex = 39935;

	class AndroidJavaProxy : public ::System::Object
	{
	public:
		static ::UnityEngine::GlobalJavaObjectRef** StaticGet_s_JavaLangSystemClass()
		{
			return (::UnityEngine::GlobalJavaObjectRef**)Il2CppClass::FromTypeDefinitionIndex(AndroidJavaProxy_TypeDefinitionIndex)->GetStaticField(0x2C7D0);
		}
		static ::System::IntPtr* StaticGet_s_HashCodeMethodID()
		{
			return (::System::IntPtr*)Il2CppClass::FromTypeDefinitionIndex(AndroidJavaProxy_TypeDefinitionIndex)->GetStaticField(0x9940);
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
