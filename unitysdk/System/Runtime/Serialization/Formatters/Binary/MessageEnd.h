#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryWriter; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MESSAGEEND_WRITE_OFFSET UNITYSDK_OFFSET(0x1DF410B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MESSAGEEND__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF410A0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int MessageEnd_TypeDefinitionIndex = 1198;

	class MessageEnd : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MESSAGEEND__CTOR_OFFSET))(this);
		}

		::System::Void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_MESSAGEEND_WRITE_OFFSET))(this, sout);
		}
	};
}
