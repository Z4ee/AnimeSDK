#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_DISALLOWMULTIPLECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1ED1F8F0)

namespace UnityEngine
{
	inline static constexpr unsigned int DisallowMultipleComponent_TypeDefinitionIndex = 4299;

	class DisallowMultipleComponent : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DISALLOWMULTIPLECOMPONENT__CTOR_OFFSET))(this);
		}
	};
}
