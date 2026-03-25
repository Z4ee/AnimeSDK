#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::Rendering { class VolumeProfile; }
namespace UnityEngine::Rendering { class VolumeProxy; }

#define UNITYENGINE_RENDERING_VOLUME_GET_PROFILE_OFFSET UNITYSDK_OFFSET(0x188FC010)
#define UNITYENGINE_RENDERING_VOLUME_GET_PROXY_OFFSET UNITYSDK_OFFSET(0x188FCEC0)
#define UNITYENGINE_RENDERING_VOLUME_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x188FD3D0)
#define UNITYENGINE_RENDERING_VOLUME_ONENABLE_OFFSET UNITYSDK_OFFSET(0x188FD200)
#define UNITYENGINE_RENDERING_VOLUME_SET_PROFILE_OFFSET UNITYSDK_OFFSET(0x188FC020)
#define UNITYENGINE_RENDERING_VOLUME_START_OFFSET UNITYSDK_OFFSET(0x188FD3A0)
#define UNITYENGINE_RENDERING_VOLUME__CCTOR_OFFSET UNITYSDK_OFFSET(0x188FD4B0)
#define UNITYENGINE_RENDERING_VOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x188FD4A0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int Volume_TypeDefinitionIndex = 27901;

	class Volume : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Rendering::VolumeProxy*>** StaticGet__ProxyCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Rendering::VolumeProxy*>**)Il2CppClass::FromTypeDefinitionIndex(Volume_TypeDefinitionIndex)->GetStaticField(0x209E0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Rendering::VolumeProfile*>** StaticGet__ProfileCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Rendering::VolumeProfile*>**)Il2CppClass::FromTypeDefinitionIndex(Volume_TypeDefinitionIndex)->GetStaticField(0x209E8);
		}
		::UnityEngine::Rendering::VolumeProfile* sharedProfile; // 0x18
		::UnityEngine::Rendering::VolumeProxy* _Proxy; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME__CCTOR_OFFSET))();
		}

		::UnityEngine::Rendering::VolumeProfile* get_Profile()
		{
			return ((::UnityEngine::Rendering::VolumeProfile*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME_GET_PROFILE_OFFSET))(this);
		}

		::System::Void set_Profile(::UnityEngine::Rendering::VolumeProfile* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::VolumeProfile*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME_SET_PROFILE_OFFSET))(this, value);
		}

		::UnityEngine::Rendering::VolumeProxy* get_Proxy()
		{
			return ((::UnityEngine::Rendering::VolumeProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME_GET_PROXY_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME_ONENABLE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME_START_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VOLUME_ONDISABLE_OFFSET))(this);
		}
	};
}
