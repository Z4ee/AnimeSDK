#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine
{
	inline static constexpr unsigned int TreeInstance_TypeDefinitionIndex = 5325;

	struct alignas(4) TreeInstance
	{
		::UnityEngine::Vector3 position; // 0x10
		::System::Single widthScale; // 0x1C
		::System::Single heightScale; // 0x20
		::System::Single rotation; // 0x24
		::UnityEngine::Color32 color; // 0x28
		::UnityEngine::Color32 lightmapColor; // 0x2C
		::System::Int32 prototypeIndex; // 0x30
		::System::Single temporaryDistance; // 0x34
	};
}
