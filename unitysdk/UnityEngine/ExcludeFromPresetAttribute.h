#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_EXCLUDEFROMPRESETATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C178B80)

namespace UnityEngine
{
	inline static constexpr unsigned int ExcludeFromPresetAttribute_TypeDefinitionIndex = 4300;

	class ExcludeFromPresetAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXCLUDEFROMPRESETATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
