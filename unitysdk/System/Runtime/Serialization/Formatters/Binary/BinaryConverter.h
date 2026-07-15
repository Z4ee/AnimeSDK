#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/BinaryTypeEnum.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalPrimitiveTypeE.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Runtime::Serialization::Formatters::Binary { class BinaryAssemblyInfo; }
namespace System::Runtime::Serialization::Formatters::Binary { class ObjectReader; }
namespace System::Runtime::Serialization::Formatters::Binary { class ObjectWriter; }
namespace System::Runtime::Serialization::Formatters::Binary { class WriteObjectInfo; }
namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryParser; }
namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryWriter; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCONVERTER_GETBINARYTYPEINFO_OFFSET UNITYSDK_OFFSET(0x17915330)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCONVERTER_GETPARSERBINARYTYPEINFO_OFFSET UNITYSDK_OFFSET(0x17915BD0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCONVERTER_READTYPEINFO_OFFSET UNITYSDK_OFFSET(0x17914A70)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCONVERTER_TYPEFROMINFO_OFFSET UNITYSDK_OFFSET(0x17916130)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCONVERTER_WRITETYPEINFO_OFFSET UNITYSDK_OFFSET(0x17913B50)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int BinaryConverter_TypeDefinitionIndex = 1136;

	class BinaryConverter : public ::System::Object
	{
	public:
		static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum GetBinaryTypeInfo(::System::Type* a1, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* a2, ::System::String* a3, ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* a4, ::System::Object*& a5, ::System::Int32& a6)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum(*)(::System::Type*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::String*, ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*, ::System::Object*&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCONVERTER_GETBINARYTYPEINFO_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum GetParserBinaryTypeInfo(::System::Type* a1, ::System::Object*& a2)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum(*)(::System::Type*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCONVERTER_GETPARSERBINARYTYPEINFO_OFFSET))(a1, a2);
		}

		static ::System::Void WriteTypeInfo(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum a1, ::System::Object* a2, ::System::Int32 a3, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* a4)
		{
			return ((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::System::Object*, ::System::Int32, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCONVERTER_WRITETYPEINFO_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Object* ReadTypeInfo(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum a1, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* a2, ::System::Int32& a3)
		{
			return ((::System::Object*(*)(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCONVERTER_READTYPEINFO_OFFSET))(a1, a2, a3);
		}

		static ::System::Void TypeFromInfo(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum a1, ::System::Object* a2, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* a3, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* a4, ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE& a5, ::System::String*& a6, ::System::Type*& a7, ::System::Boolean& a8)
		{
			return ((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::System::Object*, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*, ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE&, ::System::String*&, ::System::Type*&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCONVERTER_TYPEFROMINFO_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}
	};
}
