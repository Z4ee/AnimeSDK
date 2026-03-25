#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_COMPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x18A8A140)

namespace UnityEngine
{
	inline static constexpr unsigned int Compass_TypeDefinitionIndex = 5153;

	class Compass : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPASS__CTOR_OFFSET))(this);
		}
	};
}
