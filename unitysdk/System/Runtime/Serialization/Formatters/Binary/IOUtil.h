#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/MessageEnum.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryWriter; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_IOUTIL_FLAGTEST_OFFSET UNITYSDK_OFFSET(0x1C1AEB40)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_IOUTIL_WRITESTRINGWITHCODE_OFFSET UNITYSDK_OFFSET(0x1C1AEB50)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_IOUTIL_WRITEWITHCODE_OFFSET UNITYSDK_OFFSET(0x1C1AEBE0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int IOUtil_TypeDefinitionIndex = 1180;

	class IOUtil : public ::System::Object
	{
	public:
		static ::System::Boolean FlagTest(::System::Runtime::Serialization::Formatters::Binary::MessageEnum flag, ::System::Runtime::Serialization::Formatters::Binary::MessageEnum target)
		{
			return ((::System::Boolean(*)(::System::Runtime::Serialization::Formatters::Binary::MessageEnum, ::System::Runtime::Serialization::Formatters::Binary::MessageEnum))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_IOUTIL_FLAGTEST_OFFSET))(flag, target);
		}

		static ::System::Void WriteStringWithCode(::System::String* value, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout)
		{
			return ((::System::Void(*)(::System::String*, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_IOUTIL_WRITESTRINGWITHCODE_OFFSET))(value, sout);
		}

		static ::System::Void WriteWithCode(::System::Type* type, ::System::Object* value, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout)
		{
			return ((::System::Void(*)(::System::Type*, ::System::Object*, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_IOUTIL_WRITEWITHCODE_OFFSET))(type, value, sout);
		}
	};
}
