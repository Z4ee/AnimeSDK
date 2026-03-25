#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x164A8AC0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int AddingNewEventArgs_TypeDefinitionIndex = 8171;

	class AddingNewEventArgs : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTARGS__CTOR_OFFSET))(this);
		}
	};
}
