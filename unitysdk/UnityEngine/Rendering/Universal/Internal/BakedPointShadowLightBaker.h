#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/BakedPointShadowBakeFaceMask.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/BakedPointShadowFaceResolution.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine::Rendering::Universal::Internal { class BakedPointShadowAtlas; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWLIGHTBAKER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E24C8D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWLIGHTBAKER_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1E24CC00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWLIGHTBAKER_PUSHVALUETOLIGHT_OFFSET UNITYSDK_OFFSET(0x1E24C920)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWLIGHTBAKER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E24CC50)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int BakedPointShadowLightBaker_TypeDefinitionIndex = 26806;

	class BakedPointShadowLightBaker : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::UnityEngine::Rendering::Universal::Internal::BakedPointShadowLightBaker** StaticGet_instance()
		{
			return (::UnityEngine::Rendering::Universal::Internal::BakedPointShadowLightBaker**)Il2CppClass::FromTypeDefinitionIndex(BakedPointShadowLightBaker_TypeDefinitionIndex)->GetStaticField(0x23800);
		}
		::System::String* outputAssetPath; // 0x18
		::System::String* outputAssetFileName; // 0x20
		::System::Boolean isBakedOver; // 0x28
		::UnityEngine::Rendering::Universal::Internal::BakedPointShadowAtlas* bakedPointShadowAtlas; // 0x30
		::UnityEngine::Rendering::Universal::Internal::BakedPointShadowFaceResolution faceResolution; // 0x38
		::UnityEngine::Rendering::Universal::Internal::BakedPointShadowBakeFaceMask bakeFaces; // 0x3C
		::System::Single nearClip; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::MeshRenderer*>* shadowCasters; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWLIGHTBAKER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWLIGHTBAKER_ONENABLE_OFFSET))(this);
		}

		::System::Void PushValueToLight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWLIGHTBAKER_PUSHVALUETOLIGHT_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_BAKEDPOINTSHADOWLIGHTBAKER_ONVALIDATE_OFFSET))(this);
		}
	};
}
