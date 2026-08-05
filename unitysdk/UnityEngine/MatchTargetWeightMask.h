#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_MATCHTARGETWEIGHTMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x478110)

namespace UnityEngine
{
	inline static constexpr unsigned int MatchTargetWeightMask_TypeDefinitionIndex = 6632;

	struct alignas(4) MatchTargetWeightMask
	{
		::UnityEngine::Vector3 m_PositionXYZWeight; // 0x10
		::System::Single m_RotationWeight; // 0x1C

		::System::Void _ctor(::UnityEngine::Vector3 positionXYZWeight, ::System::Single rotationWeight)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATCHTARGETWEIGHTMASK__CTOR_OFFSET))(this, positionXYZWeight, rotationWeight);
		}
	};
}
