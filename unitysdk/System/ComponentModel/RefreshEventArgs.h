#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

namespace System { class Type; }

#define SYSTEM_COMPONENTMODEL_REFRESHEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x191593A0)

namespace System::ComponentModel
{
	inline static constexpr unsigned int RefreshEventArgs_TypeDefinitionIndex = 2616;

	class RefreshEventArgs : public ::System::EventArgs
	{
	public:
		::System::Type* typeChanged; // 0x10

		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COMPONENTMODEL_REFRESHEVENTARGS__CTOR_OFFSET))(this, a1);
		}
	};
}
