#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_COMPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4C43C0)

namespace UnityEngine
{
	inline static constexpr unsigned int Compass_TypeDefinitionIndex = 5164;

	class Compass : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPASS__CTOR_OFFSET))(this);
		}
	};
}
