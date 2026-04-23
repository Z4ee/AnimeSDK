#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_EXCLUDEFROMOBJECTFACTORYATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A443710)

namespace UnityEngine
{
	inline static constexpr unsigned int ExcludeFromObjectFactoryAttribute_TypeDefinitionIndex = 4133;

	class ExcludeFromObjectFactoryAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXCLUDEFROMOBJECTFACTORYATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
