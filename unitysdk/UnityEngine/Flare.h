#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Object.h"

#define UNITYENGINE_FLARE_INTERNAL_CREATE_OFFSET UNITYSDK_OFFSET(0x1F3BD720)
#define UNITYENGINE_FLARE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3BD710)

namespace UnityEngine
{
	inline static constexpr unsigned int Flare_TypeDefinitionIndex = 4141;

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
