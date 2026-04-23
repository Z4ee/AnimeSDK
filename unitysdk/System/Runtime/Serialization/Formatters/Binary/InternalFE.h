#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalSerializerTypeE.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/FormatterAssemblyStyle.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/FormatterTypeStyle.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/TypeFilterLevel.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTERNALFE__CTOR_OFFSET UNITYSDK_OFFSET(0x179FAB90)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int InternalFE_TypeDefinitionIndex = 1190;

	class InternalFE : public ::System::Object
	{
	public:
		::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle FEassemblyFormat; // 0x10
		::System::Runtime::Serialization::Formatters::FormatterTypeStyle FEtypeFormat; // 0x14
		::System::Runtime::Serialization::Formatters::TypeFilterLevel FEsecurityLevel; // 0x18
		::System::Runtime::Serialization::Formatters::Binary::InternalSerializerTypeE FEserializerTypeEnum; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_INTERNALFE__CTOR_OFFSET))(this);
		}
	};
}
