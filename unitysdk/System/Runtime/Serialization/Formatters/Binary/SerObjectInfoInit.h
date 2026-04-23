#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class Hashtable; }
namespace System::Runtime::Serialization::Formatters::Binary { class SerStack; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SEROBJECTINFOINIT__CTOR_OFFSET UNITYSDK_OFFSET(0x17A01940)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int SerObjectInfoInit_TypeDefinitionIndex = 1176;

	class SerObjectInfoInit : public ::System::Object
	{
	public:
		::System::Collections::Hashtable* seenBeforeTable; // 0x10
		::System::Runtime::Serialization::Formatters::Binary::SerStack* oiPool; // 0x18
		::System::Int32 objectInfoIdCount; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_SEROBJECTINFOINIT__CTOR_OFFSET))(this);
		}
	};
}
