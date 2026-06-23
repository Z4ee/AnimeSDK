#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_TIMELINE_HIDEINMENUATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2E0B50)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int HideInMenuAttribute_TypeDefinitionIndex = 32415;

	class HideInMenuAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_HIDEINMENUATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
