#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Reflection { class MonoCMethod; }

#define SYSTEM_MONOTYPEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x163558B0)

namespace System
{
	inline static constexpr unsigned int MonoTypeInfo_TypeDefinitionIndex = 374;

	class MonoTypeInfo : public ::System::Object
	{
	public:
		::System::String* full_name; // 0x10
		::System::Reflection::MonoCMethod* default_ctor; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MONOTYPEINFO__CTOR_OFFSET))(this);
		}
	};
}
