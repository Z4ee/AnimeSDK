#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_TYPENASSEMBLY__CTOR_OFFSET UNITYSDK_OFFSET(0x19473E10)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int ObjectReader_TypeNAssembly_TypeDefinitionIndex = 1188;

	class ObjectReader_TypeNAssembly : public ::System::Object
	{
	public:
		::System::String* assemblyName; // 0x10
		::System::Type* type; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_OBJECTREADER_TYPENASSEMBLY__CTOR_OFFSET))(this);
		}
	};
}
