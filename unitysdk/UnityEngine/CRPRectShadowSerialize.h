#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine
{
	inline static constexpr unsigned int CRPRectShadowSerialize_TypeDefinitionIndex = 4247;

	struct alignas(4) CRPRectShadowSerialize
	{
		::UnityEngine::Vector3 localnormal; // 0x10
		::UnityEngine::Vector3 localup; // 0x1C
		::UnityEngine::Vector3 localpos; // 0x28
		::UnityEngine::Vector2 size; // 0x34
		::System::Int32 occForEditor; // 0x3C
	};
}
