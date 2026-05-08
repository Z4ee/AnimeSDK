#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Reflection { class Assembly; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYASSEMBLYINFO_GETASSEMBLY_OFFSET UNITYSDK_OFFSET(0x19E159A0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYASSEMBLYINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19E15990)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYASSEMBLYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x19E15980)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int BinaryAssemblyInfo_TypeDefinitionIndex = 1182;

	class BinaryAssemblyInfo : public ::System::Object
	{
	public:
		::System::Reflection::Assembly* assembly; // 0x10
		::System::String* assemblyString; // 0x18

		::System::Void _ctor(::System::String* assemblyString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYASSEMBLYINFO__CTOR_OFFSET))(this, assemblyString);
		}

		::System::Void _ctor_1(::System::String* assemblyString, ::System::Reflection::Assembly* assembly)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYASSEMBLYINFO__CTOR_1_OFFSET))(this, assemblyString, assembly);
		}

		::System::Reflection::Assembly* GetAssembly()
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYASSEMBLYINFO_GETASSEMBLY_OFFSET))(this);
		}
	};
}
