#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_RENDERING_RELOADGROUPATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x188ECA30)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ReloadGroupAttribute_TypeDefinitionIndex = 27896;

	class ReloadGroupAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RELOADGROUPATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
