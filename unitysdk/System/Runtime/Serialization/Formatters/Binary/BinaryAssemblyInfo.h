#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Reflection { class Assembly; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYASSEMBLYINFO_GETASSEMBLY_OFFSET UNITYSDK_OFFSET(0x187A8C90)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYASSEMBLYINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x187A8C80)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYASSEMBLYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x187A8C70)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int BinaryAssemblyInfo_TypeDefinitionIndex = 1136;

	class BinaryAssemblyInfo : public ::System::Object
	{
	public:
		::System::String* assemblyString; // 0x10
		::System::Reflection::Assembly* assembly; // 0x18

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYASSEMBLYINFO__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::Reflection::Assembly* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Reflection::Assembly*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYASSEMBLYINFO__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Reflection::Assembly* GetAssembly()
		{
			return ((::System::Reflection::Assembly*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYASSEMBLYINFO_GETASSEMBLY_OFFSET))(this);
		}
	};
}
