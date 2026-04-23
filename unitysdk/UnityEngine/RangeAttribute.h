#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define UNITYENGINE_RANGEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A46C020)

namespace UnityEngine
{
	inline static constexpr unsigned int RangeAttribute_TypeDefinitionIndex = 4051;

	class RangeAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Single max; // 0x10
		::System::Single min; // 0x14

		::System::Void _ctor(::System::Single min, ::System::Single max)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RANGEATTRIBUTE__CTOR_OFFSET))(this, min, max);
		}
	};
}
