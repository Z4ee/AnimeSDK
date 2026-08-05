#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DetailLayerConfig_DetailBlendModeType.h"

namespace UnityEngine { class Texture2D; }

#define UNITYENGINE_RENDERING_UNIVERSAL_DETAILLAYERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11098480)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int DetailLayerConfig_TypeDefinitionIndex = 27730;

	class DetailLayerConfig : public ::System::Object
	{
	public:
		::System::Boolean EnableDetailLayer; // 0x10
		::UnityEngine::Texture2D* DetailMask; // 0x18
		::UnityEngine::Texture2D* DetailAlbedoMap; // 0x20
		::UnityEngine::Texture2D* DetailMREMap; // 0x28
		::UnityEngine::Texture2D* DetailNormalMap; // 0x30
		::System::Single DetailIntensity; // 0x38
		::System::Single DetailMapSize; // 0x3C
		::System::Single DetailNormalScale; // 0x40
		::UnityEngine::Rendering::Universal::DetailLayerConfig_DetailBlendModeType DetailBlendMode; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_DETAILLAYERCONFIG__CTOR_OFFSET))(this);
		}
	};
}
