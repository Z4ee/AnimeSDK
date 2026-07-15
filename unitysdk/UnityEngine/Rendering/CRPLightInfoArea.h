#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPLightInfoArea_TypeDefinitionIndex = 4862;

	struct alignas(4) CRPLightInfoArea
	{
		::System::Byte AreaLightDelegateShape; // 0x10
		::UnityEngine::Vector3 BoxDelegateSize; // 0x14
		::UnityEngine::Vector3 BoxDelegateOffset; // 0x20
	};
}
