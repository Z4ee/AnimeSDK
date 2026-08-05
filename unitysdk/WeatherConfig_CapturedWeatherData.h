#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"

inline static constexpr unsigned int WeatherConfig_CapturedWeatherData_TypeDefinitionIndex = 27751;

struct alignas(8) WeatherConfig_CapturedWeatherData
{
	::UnityEngine::Rendering::RenderTargetIdentifier RainDropTextureRTID; // 0x10
	::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* RainSplashTextureRTIDs; // 0x38
	::System::Int32 HollowMaterialID; // 0x40
	::System::Int32 HollowMeshID; // 0x44
};
