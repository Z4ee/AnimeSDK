#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x17AD42D0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int AddingNewEventArgs_TypeDefinitionIndex = 8317;

	class AddingNewEventArgs : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_ADDINGNEWEVENTARGS__CTOR_OFFSET))(this);
		}
	};
}
