#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

inline static constexpr unsigned int VolumetricCloudBoxVolume_BlockerData_TypeDefinitionIndex = 26879;

struct alignas(4) VolumetricCloudBoxVolume_BlockerData
{
	::UnityEngine::Matrix4x4 worldToLocalMatrix; // 0x10
	::System::Single falloff; // 0x50
};
