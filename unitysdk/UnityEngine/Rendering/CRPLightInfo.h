#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rendering/GameLightType.h"
#include "unitysdk/UnityEngine/Rendering/LightVolumeInfo.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPLightInfo_TypeDefinitionIndex = 4857;

	struct alignas(4) CRPLightInfo
	{
		::UnityEngine::Rendering::GameLightType InternalLightType; // 0x10
		::UnityEngine::Vector3 Scale; // 0x14
		::System::Int32 CustomLightQualityFilter; // 0x20
		::System::Single FalloffExp; // 0x24
		::UnityEngine::Vector2 DirectionalBS; // 0x28
		::UnityEngine::Vector4 LightFix; // 0x30
		::UnityEngine::Color CharColor; // 0x40
		::System::Single CharIntensity; // 0x50
		::System::Single ShadowLightingFactor; // 0x54
		::UnityEngine::Rendering::LightVolumeInfo LightVolumeData; // 0x58
		::System::Single SourceRadius; // 0x180
		::System::Single SoftSourceRadius; // 0x184
		::UnityEngine::Vector4 SpotParam; // 0x188
		::System::Single SpotLightScale; // 0x198
		::System::Single CookieHeight; // 0x19C
		::System::Int32 CookieTex; // 0x1A0
		::System::Int32 StencilDelegate; // 0x1A4
		::UnityEngine::Matrix4x4 StencilDelegateMatrix; // 0x1A8
		::System::Int32 _CustomLightFlag; // 0x1E8
		::UnityEngine::Vector4 CustomData0; // 0x1EC
		::UnityEngine::Vector4 CustomData1; // 0x1FC
		::System::UInt32 _Flag; // 0x20C
		::System::Int32 AreaLightDelegateShape; // 0x210
		::UnityEngine::Vector3 BoxDelegateSize; // 0x214
		::UnityEngine::Vector3 BoxDelegateOffset; // 0x220
	};
}
