#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"

inline static constexpr unsigned int WeatherConfig_CapturedWeatherData_TypeDefinitionIndex = 27055;

struct alignas(8) WeatherConfig_CapturedWeatherData
{
	::UnityEngine::Rendering::RenderTargetIdentifier CloudNoiseRTID; // 0x10
	::UnityEngine::Rendering::RenderTargetIdentifier RainDropTextureRTID; // 0x38
	::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* HighCloudAtlasRTIDs; // 0x60
	::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* RainSplashTextureRTIDs; // 0x68
	::System::Int32 HollowMaterialID; // 0x70
	::System::Int32 HollowMeshID; // 0x74
	::System::Int32 SceneEtherCoverEffectId; // 0x78
};
