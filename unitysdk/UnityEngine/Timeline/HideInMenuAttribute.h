#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_TIMELINE_HIDEINMENUATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECC40B0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int HideInMenuAttribute_TypeDefinitionIndex = 37568;

	class HideInMenuAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_HIDEINMENUATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
