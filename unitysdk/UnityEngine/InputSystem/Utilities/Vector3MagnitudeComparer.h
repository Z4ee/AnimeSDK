#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_VECTOR3MAGNITUDECOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0x8B73D0)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int Vector3MagnitudeComparer_TypeDefinitionIndex = 29386;

	struct alignas(1) Vector3MagnitudeComparer
	{
		/*
		::System::Int32 Compare(::UnityEngine::Vector3 x, ::UnityEngine::Vector3 y)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_VECTOR3MAGNITUDECOMPARER_COMPARE_OFFSET))(this, x, y);
		}
		*/
	};
}
