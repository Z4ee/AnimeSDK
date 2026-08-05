#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine::Rendering::Universal::Internal { class MonoLightObjectProxy; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MONOLIGHTOBJECTPROXYMANAGER_APPLYINTENSITYMULTIPLY_OFFSET UNITYSDK_OFFSET(0x1CEF9FC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MONOLIGHTOBJECTPROXYMANAGER_HASANYPROXY_OFFSET UNITYSDK_OFFSET(0x1CEF9ED0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MONOLIGHTOBJECTPROXYMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1CEFA420)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MONOLIGHTOBJECTPROXYMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1CEFA660)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MONOLIGHTOBJECTPROXYMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEFA880)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MONOLIGHTOBJECTPROXYMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEFA870)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int MonoLightObjectProxyManager_TypeDefinitionIndex = 27916;

	class MonoLightObjectProxyManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::Internal::MonoLightObjectProxy*>** StaticGet_s_LocalFogProxies()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::Internal::MonoLightObjectProxy*>**)Il2CppClass::FromTypeDefinitionIndex(MonoLightObjectProxyManager_TypeDefinitionIndex)->GetStaticField(0x22D00);
		}
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::Internal::MonoLightObjectProxy*>** StaticGet_s_LocalLightProxies()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::Rendering::Universal::Internal::MonoLightObjectProxy*>**)Il2CppClass::FromTypeDefinitionIndex(MonoLightObjectProxyManager_TypeDefinitionIndex)->GetStaticField(0x22D08);
		}
		static ::System::Single* StaticGet_s_CachedIntensityMultiply()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MonoLightObjectProxyManager_TypeDefinitionIndex)->GetStaticField(0x6130);
		}
		static ::System::Single* StaticGet_s_CachedFogIntensity()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MonoLightObjectProxyManager_TypeDefinitionIndex)->GetStaticField(0x6134);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MONOLIGHTOBJECTPROXYMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MONOLIGHTOBJECTPROXYMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Boolean HasAnyProxy()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MONOLIGHTOBJECTPROXYMANAGER_HASANYPROXY_OFFSET))();
		}

		static ::System::Void ApplyIntensityMultiply(::System::Single lightIntensityMultiply, ::System::Single fogIntensity)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MONOLIGHTOBJECTPROXYMANAGER_APPLYINTENSITYMULTIPLY_OFFSET))(lightIntensityMultiply, fogIntensity);
		}

		static ::System::Void Register(::UnityEngine::Rendering::Universal::Internal::MonoLightObjectProxy* proxy)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::MonoLightObjectProxy*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MONOLIGHTOBJECTPROXYMANAGER_REGISTER_OFFSET))(proxy);
		}

		static ::System::Void Unregister(::UnityEngine::Rendering::Universal::Internal::MonoLightObjectProxy* proxy)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::MonoLightObjectProxy*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_MONOLIGHTOBJECTPROXYMANAGER_UNREGISTER_OFFSET))(proxy);
		}
	};
}
