#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_MONOLISTITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD73EF0)

namespace System
{
	inline static constexpr unsigned int MonoListItem_TypeDefinitionIndex = 408;

	class MonoListItem : public ::System::Object
	{
	public:
		::System::Object* data; // 0x10
		::System::MonoListItem* next; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MONOLISTITEM__CTOR_OFFSET))(this);
		}
	};
}
