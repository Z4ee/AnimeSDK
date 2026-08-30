#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_BINDINGS_NOTNULLATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F00F7E0)

namespace UnityEngine::Bindings
{
	inline static constexpr unsigned int NotNullAttribute_TypeDefinitionIndex = 3729;

	class NotNullAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_BINDINGS_NOTNULLATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
