#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_GRADIENTALPHAKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x2F440)

namespace UnityEngine
{
	inline static constexpr unsigned int GradientAlphaKey_TypeDefinitionIndex = 4220;

	struct alignas(4) GradientAlphaKey
	{
		::System::Single alpha; // 0x10
		::System::Single time; // 0x14

		::System::Void _ctor(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_GRADIENTALPHAKEY__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
