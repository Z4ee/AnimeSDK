#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_RENDERING_DISPOSEUTILITY_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x210B0E0)
#define UNITYENGINE_RENDERING_DISPOSEUTILITY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x210B020)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DisposeUtility_TypeDefinitionIndex = 27851;

	struct alignas(1) DisposeUtility
	{
		::System::Boolean _Disposed; // 0x10

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DISPOSEUTILITY_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DISPOSEUTILITY_DISPOSE_1_OFFSET))(this, disposing);
		}
	};
}
