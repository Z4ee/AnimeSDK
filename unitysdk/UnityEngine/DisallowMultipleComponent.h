#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_DISALLOWMULTIPLECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D66B830)

namespace UnityEngine
{
	inline static constexpr unsigned int DisallowMultipleComponent_TypeDefinitionIndex = 5325;

	class DisallowMultipleComponent : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DISALLOWMULTIPLECOMPONENT__CTOR_OFFSET))(this);
		}
	};
}
