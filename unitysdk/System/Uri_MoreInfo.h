#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_URI_MOREINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x167F41E0)

namespace System
{
	inline static constexpr unsigned int Uri_MoreInfo_TypeDefinitionIndex = 2458;

	class Uri_MoreInfo : public ::System::Object
	{
	public:
		::System::String* AbsoluteUri; // 0x10
		::System::String* Query; // 0x18
		::System::String* Fragment; // 0x20
		::System::String* Path; // 0x28
		::System::String* RemoteUrl; // 0x30
		::System::Int32 Hash; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_MOREINFO__CTOR_OFFSET))(this);
		}
	};
}
