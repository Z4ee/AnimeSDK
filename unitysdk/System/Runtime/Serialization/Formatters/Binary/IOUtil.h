#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/MessageEnum.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryWriter; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_IOUTIL_FLAGTEST_OFFSET UNITYSDK_OFFSET(0x19468160)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_IOUTIL_WRITESTRINGWITHCODE_OFFSET UNITYSDK_OFFSET(0x19467F70)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_IOUTIL_WRITEWITHCODE_OFFSET UNITYSDK_OFFSET(0x19468170)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int IOUtil_TypeDefinitionIndex = 1144;

	class IOUtil : public ::System::Object
	{
	public:
		static ::System::Boolean FlagTest(::System::Runtime::Serialization::Formatters::Binary::MessageEnum a1, ::System::Runtime::Serialization::Formatters::Binary::MessageEnum a2)
		{
			return ((::System::Boolean(*)(::System::Runtime::Serialization::Formatters::Binary::MessageEnum, ::System::Runtime::Serialization::Formatters::Binary::MessageEnum))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_IOUTIL_FLAGTEST_OFFSET))(a1, a2);
		}

		static ::System::Void WriteStringWithCode(::System::String* a1, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* a2)
		{
			return ((::System::Void(*)(::System::String*, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_IOUTIL_WRITESTRINGWITHCODE_OFFSET))(a1, a2);
		}

		static ::System::Void WriteWithCode(::System::Type* a1, ::System::Object* a2, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* a3)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Object*, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_IOUTIL_WRITEWITHCODE_OFFSET))(a1, a2, a3);
		}
	};
}
