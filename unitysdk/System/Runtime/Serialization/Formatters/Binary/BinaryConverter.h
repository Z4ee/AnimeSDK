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

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCONVERTER_GETBINARYTYPEINFO_OFFSET UNITYSDK_OFFSET(0x19E15A80)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCONVERTER_GETPARSERBINARYTYPEINFO_OFFSET UNITYSDK_OFFSET(0x19E15E90)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCONVERTER_READTYPEINFO_OFFSET UNITYSDK_OFFSET(0x19E16490)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCONVERTER_TYPEFROMINFO_OFFSET UNITYSDK_OFFSET(0x19E16690)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCONVERTER_WRITETYPEINFO_OFFSET UNITYSDK_OFFSET(0x19E161C0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int BinaryConverter_TypeDefinitionIndex = 1180;

	class BinaryConverter : public ::System::Object
	{
	public:
		static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum GetBinaryTypeInfo(::System::Type* type, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo* objectInfo, ::System::String* typeName, ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter* objectWriter, ::System::Object*& typeInformation, ::System::Int32& assemId)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum(*)(::System::Type*, ::System::Runtime::Serialization::Formatters::Binary::WriteObjectInfo*, ::System::String*, ::System::Runtime::Serialization::Formatters::Binary::ObjectWriter*, ::System::Object*&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCONVERTER_GETBINARYTYPEINFO_OFFSET))(type, objectInfo, typeName, objectWriter, typeInformation, assemId);
		}

		static ::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum GetParserBinaryTypeInfo(::System::Type* type, ::System::Object*& typeInformation)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum(*)(::System::Type*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCONVERTER_GETPARSERBINARYTYPEINFO_OFFSET))(type, typeInformation);
		}

		static ::System::Void WriteTypeInfo(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum, ::System::Object* typeInformation, ::System::Int32 assemId, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout)
		{
			return ((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::System::Object*, ::System::Int32, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCONVERTER_WRITETYPEINFO_OFFSET))(binaryTypeEnum, typeInformation, assemId, sout);
		}

		static ::System::Object* ReadTypeInfo(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input, ::System::Int32& assemId)
		{
			return ((::System::Object*(*)(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCONVERTER_READTYPEINFO_OFFSET))(binaryTypeEnum, input, assemId);
		}

		static ::System::Void TypeFromInfo(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum binaryTypeEnum, ::System::Object* typeInformation, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* assemblyInfo, ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE& primitiveTypeEnum, ::System::String*& typeString, ::System::Type*& type, ::System::Boolean& isVariant)
		{
			return ((::System::Void(*)(::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum, ::System::Object*, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*, ::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*, ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE&, ::System::String*&, ::System::Type*&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYCONVERTER_TYPEFROMINFO_OFFSET))(binaryTypeEnum, typeInformation, objectReader, assemblyInfo, primitiveTypeEnum, typeString, type, isVariant);
		}
	};
}
