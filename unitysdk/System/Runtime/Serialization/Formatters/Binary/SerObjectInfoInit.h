#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class Hashtable; }
namespace System::Runtime::Serialization::Formatters::Binary { class SerStack; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SEROBJECTINFOINIT__CTOR_OFFSET UNITYSDK_OFFSET(0x1946EAA0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int SerObjectInfoInit_TypeDefinitionIndex = 1184;

	class SerObjectInfoInit : public ::System::Object
	{
	public:
		::System::Runtime::Serialization::Formatters::Binary::SerStack* oiPool; // 0x10
		::System::Collections::Hashtable* seenBeforeTable; // 0x18
		::System::Int32 objectInfoIdCount; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SEROBJECTINFOINIT__CTOR_OFFSET))(this);
		}
	};
}
