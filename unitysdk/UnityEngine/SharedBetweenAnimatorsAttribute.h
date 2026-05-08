#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_SHAREDBETWEENANIMATORSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C544AB0)

namespace UnityEngine
{
	inline static constexpr unsigned int SharedBetweenAnimatorsAttribute_TypeDefinitionIndex = 6525;

	class SharedBetweenAnimatorsAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SHAREDBETWEENANIMATORSATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
