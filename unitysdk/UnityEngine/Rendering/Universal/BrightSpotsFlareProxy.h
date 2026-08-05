#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_RENDERING_UNIVERSAL_BRIGHTSPOTSFLAREPROXY_GET_HASBRIGHTSPOTSFLAREPROXY_OFFSET UNITYSDK_OFFSET(0x1CEE5B50)
#define UNITYENGINE_RENDERING_UNIVERSAL_BRIGHTSPOTSFLAREPROXY_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1CEE5D00)
#define UNITYENGINE_RENDERING_UNIVERSAL_BRIGHTSPOTSFLAREPROXY_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1CEE5BD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_BRIGHTSPOTSFLAREPROXY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEE5E00)
#define UNITYENGINE_RENDERING_UNIVERSAL_BRIGHTSPOTSFLAREPROXY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEE5DB0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int BrightSpotsFlareProxy_TypeDefinitionIndex = 26990;

	class BrightSpotsFlareProxy : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::BrightSpotsFlareProxy*>** StaticGet_activeProxies()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::BrightSpotsFlareProxy*>**)Il2CppClass::FromTypeDefinitionIndex(BrightSpotsFlareProxy_TypeDefinitionIndex)->GetStaticField(0x22CC0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BRIGHTSPOTSFLAREPROXY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BRIGHTSPOTSFLAREPROXY__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_HasBrightSpotsFlareProxy()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BRIGHTSPOTSFLAREPROXY_GET_HASBRIGHTSPOTSFLAREPROXY_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BRIGHTSPOTSFLAREPROXY_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BRIGHTSPOTSFLAREPROXY_ONDISABLE_OFFSET))(this);
		}
	};
}
