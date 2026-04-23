#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/PropertyAttribute.h"

#define UNITYENGINE_SPACEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A486430)
#define UNITYENGINE_SPACEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A486420)

namespace UnityEngine
{
	inline static constexpr unsigned int SpaceAttribute_TypeDefinitionIndex = 4049;

	class SpaceAttribute : public ::UnityEngine::PropertyAttribute
	{
	public:
		::System::Single height; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SPACEATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Single height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_SPACEATTRIBUTE__CTOR_1_OFFSET))(this, height);
		}
	};
}
