#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_RUNTIME_REMOTING_TYPEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCBCB70)

namespace System::Runtime::Remoting
{
	inline static constexpr unsigned int TypeEntry_TypeDefinitionIndex = 1262;

	class TypeEntry : public ::System::Object
	{
	public:
		::System::String* assembly_name; // 0x10
		::System::String* type_name; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_TYPEENTRY__CTOR_OFFSET))(this);
		}
	};
}
