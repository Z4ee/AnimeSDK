#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_RENDERING_UNIVERSAL_BRIGHTSPOTSFLARECONFIG_GETCONFIGFORCAMERA_OFFSET UNITYSDK_OFFSET(0x18FE5370)
#define UNITYENGINE_RENDERING_UNIVERSAL_BRIGHTSPOTSFLARECONFIG_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x18FE52C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_BRIGHTSPOTSFLARECONFIG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x18FE5080)
#define UNITYENGINE_RENDERING_UNIVERSAL_BRIGHTSPOTSFLARECONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x18FE5740)
#define UNITYENGINE_RENDERING_UNIVERSAL_BRIGHTSPOTSFLARECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18FE56E0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int BrightSpotsFlareConfig_TypeDefinitionIndex = 29833;

	class BrightSpotsFlareConfig : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::BrightSpotsFlareConfig*>** StaticGet_activeConfigs()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::BrightSpotsFlareConfig*>**)Il2CppClass::FromTypeDefinitionIndex(BrightSpotsFlareConfig_TypeDefinitionIndex)->GetStaticField(0x22920);
		}
		::UnityEngine::Texture2D* flareTexture; // 0x18
		::System::Single luminanceThreshold; // 0x20
		::System::Single opacity; // 0x24
		::System::Single minSize; // 0x28
		::System::Single maxSize; // 0x2C
		::System::Int32 verticalGridCount; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BRIGHTSPOTSFLARECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BRIGHTSPOTSFLARECONFIG__CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BRIGHTSPOTSFLARECONFIG_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BRIGHTSPOTSFLARECONFIG_ONDISABLE_OFFSET))(this);
		}

		static ::UnityEngine::Rendering::Universal::BrightSpotsFlareConfig* GetConfigForCamera(::UnityEngine::Camera* camera)
		{
			return ((::UnityEngine::Rendering::Universal::BrightSpotsFlareConfig*(*)(::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_BRIGHTSPOTSFLARECONFIG_GETCONFIGFORCAMERA_OFFSET))(camera);
		}
	};
}
