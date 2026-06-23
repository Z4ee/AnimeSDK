#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

inline static constexpr unsigned int VolumetricCloudBoxVolume_ModelData_TypeDefinitionIndex = 26880;

struct alignas(4) VolumetricCloudBoxVolume_ModelData
{
	::UnityEngine::Matrix4x4 worldToLocalMatrix; // 0x10
	::UnityEngine::Matrix4x4 localToWorldMatrix; // 0x50
	::System::Single fallOff; // 0x90
	::System::Single blendStartHeight; // 0x94
	::System::Single blendEndHeight; // 0x98
	::System::Single lowerDensity; // 0x9C
	::System::Single upperDensity; // 0xA0
	::System::Single densityScale; // 0xA4
	::System::Single lowerType; // 0xA8
	::System::Single upperType; // 0xAC
};
