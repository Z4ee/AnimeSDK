#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Component.h"

#define UNITYENGINE_KODAMADYNAMIC__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A5300)

namespace UnityEngine
{
	inline static constexpr unsigned int KodamaDynamic_TypeDefinitionIndex = 5167;

	class KodamaDynamic : public ::UnityEngine::Component
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_KODAMADYNAMIC__CTOR_OFFSET))(this);
		}
	};
}
