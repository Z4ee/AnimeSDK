#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_MONOLISTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3A9300)

namespace System
{
	inline static constexpr unsigned int MonoListItem_TypeDefinitionIndex = 393;

	class MonoListItem : public ::System::Object
	{
	public:
		::System::MonoListItem* next; // 0x10
		::System::Object* data; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MONOLISTITEM__CTOR_OFFSET))(this);
		}
	};
}
