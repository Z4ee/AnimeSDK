#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_GRADIENTALPHAKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x2A140)

namespace UnityEngine
{
	inline static constexpr unsigned int GradientAlphaKey_TypeDefinitionIndex = 4031;

	struct alignas(4) GradientAlphaKey
	{
		::System::Single alpha; // 0x10
		::System::Single time; // 0x14

		::System::Void _ctor(::System::Single alpha, ::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENTALPHAKEY__CTOR_OFFSET))(this, alpha, time);
		}
	};
}
