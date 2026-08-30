#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

#define UNITYENGINE_FLARE_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1DEDA8F0)
#define UNITYENGINE_FLARE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEDA8E0)

namespace UnityEngine
{
	inline static constexpr unsigned int Flare_TypeDefinitionIndex = 4140;

	class Flare : public ::UnityEngine::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_FLARE__CTOR_OFFSET))(this);
		}

		static ::System::Void Internal_Create(::UnityEngine::Flare* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Flare*))((::PBYTE)hIl2Cpp + UNITYENGINE_FLARE_INTERNAL_CREATE_OFFSET))(a1);
		}
	};
}
