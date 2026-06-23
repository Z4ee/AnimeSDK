#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int VisQueryManager_QueryParam_TypeDefinitionIndex = 26654;

	struct alignas(4) VisQueryManager_QueryParam
	{
		::UnityEngine::Vector3 WorldPos; // 0x10
		::System::UInt32 Handle; // 0x1C
		::UnityEngine::Vector4 ShapeData; // 0x20
	};
}
