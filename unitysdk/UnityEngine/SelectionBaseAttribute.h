#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define UNITYENGINE_SELECTIONBASEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A485070)

namespace UnityEngine
{
	inline static constexpr unsigned int SelectionBaseAttribute_TypeDefinitionIndex = 4150;

	class SelectionBaseAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_SELECTIONBASEATTRIBUTE__CTOR_OFFSET))(this);
		}
	};
}
