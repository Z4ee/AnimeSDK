#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_EXCLUDEFROMOBJECTFACTORYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEDA260)

namespace UnityEngine
{
	inline static constexpr unsigned int ExcludeFromObjectFactoryAttribute_TypeDefinitionIndex = 4322;

	class ExcludeFromObjectFactoryAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXCLUDEFROMOBJECTFACTORYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
