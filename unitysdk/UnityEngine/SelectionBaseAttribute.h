#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_SELECTIONBASEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A4D770)

namespace UnityEngine
{
	inline static constexpr unsigned int SelectionBaseAttribute_TypeDefinitionIndex = 4148;

	class SelectionBaseAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SELECTIONBASEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
