#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Reflection { class Assembly; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYASSEMBLYINFO_GETASSEMBLY_OFFSET UNITYSDK_OFFSET(0x1BE05A20)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYASSEMBLYINFO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BE05A10)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYASSEMBLYINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE05A00)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int BinaryAssemblyInfo_TypeDefinitionIndex = 1145;

	class BinaryAssemblyInfo : public ::System::Object
	{
	public:
		::System::Reflection::Assembly* assembly; // 0x10
		::System::String* assemblyString; // 0x18

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
