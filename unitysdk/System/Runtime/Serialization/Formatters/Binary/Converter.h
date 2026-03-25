#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalPrimitiveTypeE.h"
#include "unitysdk/System/TypeCode.h"

namespace System { class Array; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Reflection { class Assembly; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_CREATEPRIMITIVEARRAY_OFFSET UNITYSDK_OFFSET(0x163D18D0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_FROMSTRING_OFFSET UNITYSDK_OFFSET(0x163D2260)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITARRAYTYPEA_OFFSET UNITYSDK_OFFSET(0x163D07F0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITCODEA_OFFSET UNITYSDK_OFFSET(0x163D1F90)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITTYPEA_OFFSET UNITYSDK_OFFSET(0x163D1060)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITTYPECODEA_OFFSET UNITYSDK_OFFSET(0x163D1C10)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITVALUEA_OFFSET UNITYSDK_OFFSET(0x163D1940)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_ISPRIMITIVEARRAY_OFFSET UNITYSDK_OFFSET(0x163CCBA0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_ISWRITEASBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x163D07B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOARRAYTYPE_OFFSET UNITYSDK_OFFSET(0x163CDB00)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOCODE_OFFSET UNITYSDK_OFFSET(0x163CD380)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOCOMTYPE_OFFSET UNITYSDK_OFFSET(0x163CD8E0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOPRIMITIVETYPEENUM_OFFSET UNITYSDK_OFFSET(0x163D06B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOTYPECODE_OFFSET UNITYSDK_OFFSET(0x163D1E90)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOTYPE_OFFSET UNITYSDK_OFFSET(0x163CD9F0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TYPELENGTH_OFFSET UNITYSDK_OFFSET(0x163D07D0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER__CCTOR_OFFSET UNITYSDK_OFFSET(0x163D22E0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int Converter_TypeDefinitionIndex = 1155;

	class Converter : public ::System::Object
	{
	public:
		static ::System::Type** StaticGet_typeofDecimalArray()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x6F90);
		}
		static ::System::Type** StaticGet_typeofDoubleArray()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x6F98);
		}
		static ::System::Type** StaticGet_typeofInt32Array()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x6FA0);
		}
		static ::System::Type** StaticGet_typeofDouble()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x6FA8);
		}
		static ::System::Type** StaticGet_typeofISerializable()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x6FB0);
		}
		static ::Il2CppArray<::System::Type*>** StaticGet_typeA()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x6FB8);
		}
		static ::System::Type** StaticGet_typeofUInt64()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x6FC0);
		}
		static ::Il2CppArray<::System::Type*>** StaticGet_arrayTypeA()
		{
			return (::Il2CppArray<::System::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x6FC8);
		}
		static ::System::Type** StaticGet_typeofMarshalByRefObject()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x6FD0);
		}
		static ::System::Type** StaticGet_typeofSingleArray()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x6FD8);
		}
		static ::System::Type** StaticGet_typeofUInt32Array()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x6FE0);
		}
		static ::System::Type** StaticGet_typeofUInt16()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x6FE8);
		}
		static ::System::Type** StaticGet_typeofDateTime()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x6FF0);
		}
		static ::System::Type** StaticGet_typeofBoolean()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x6FF8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_valueA()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x7000);
		}
		static ::System::Type** StaticGet_typeofUInt16Array()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x7008);
		}
		static ::Il2CppArray<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>** StaticGet_codeA()
		{
			return (::Il2CppArray<::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE>**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x7010);
		}
		static ::System::Type** StaticGet_typeofInt16Array()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x7018);
		}
		static ::System::Type** StaticGet_typeofByteArray()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x7020);
		}
		static ::System::Type** StaticGet_typeofChar()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x7028);
		}
		static ::System::Type** StaticGet_typeofInt16()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x7030);
		}
		static ::System::Reflection::Assembly** StaticGet_urtAssembly()
		{
			return (::System::Reflection::Assembly**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x7038);
		}
		static ::System::Type** StaticGet_typeofBooleanArray()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x7040);
		}
		static ::System::Type** StaticGet_typeofString()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x7048);
		}
		static ::System::Type** StaticGet_typeofByte()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x7050);
		}
		static ::System::Type** StaticGet_typeofStringArray()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x7058);
		}
		static ::System::Type** StaticGet_typeofUInt32()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x7060);
		}
		static ::System::Type** StaticGet_typeofDecimal()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x7068);
		}
		static ::System::Type** StaticGet_typeofInt64()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x7070);
		}
		static ::System::Type** StaticGet_typeofSByteArray()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x7078);
		}
		static ::System::Type** StaticGet_typeofTimeSpan()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x7080);
		}
		static ::System::Type** StaticGet_typeofTypeArray()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x7088);
		}
		static ::System::Type** StaticGet_typeofSingle()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x7090);
		}
		static ::System::Type** StaticGet_typeofSByte()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x7098);
		}
		static ::System::Type** StaticGet_typeofTimeSpanArray()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x70A0);
		}
		static ::System::Type** StaticGet_typeofInt64Array()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x70A8);
		}
		static ::System::Type** StaticGet_typeofCharArray()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x70B0);
		}
		static ::Il2CppArray<::System::TypeCode>** StaticGet_typeCodeA()
		{
			return (::Il2CppArray<::System::TypeCode>**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x70B8);
		}
		static ::System::Type** StaticGet_typeofObject()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x70C0);
		}
		static ::System::Type** StaticGet_typeofConverter()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x70C8);
		}
		static ::System::Type** StaticGet_typeofSystemVoid()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x70D0);
		}
		static ::System::Type** StaticGet_typeofInt32()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x70D8);
		}
		static ::System::Type** StaticGet_typeofDateTimeArray()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x70E0);
		}
		static ::System::Type** StaticGet_typeofObjectArray()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x70E8);
		}
		static ::System::Type** StaticGet_typeofUInt64Array()
		{
			return (::System::Type**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x70F0);
		}
		static ::System::String** StaticGet_urtAssemblyString()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x70F8);
		}
		static ::System::Int32* StaticGet_primitiveTypeEnumLength()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Converter_TypeDefinitionIndex)->GetStaticField(0x3EC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER__CCTOR_OFFSET))();
		}

		static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE ToCode(::System::Type* type)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE(*)(::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOCODE_OFFSET))(type);
		}

		static ::System::Boolean IsWriteAsByteArray(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code)
		{
			return ((::System::Boolean(*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_ISWRITEASBYTEARRAY_OFFSET))(code);
		}

		static ::System::Int32 TypeLength(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code)
		{
			return ((::System::Int32(*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TYPELENGTH_OFFSET))(code);
		}

		static ::System::Type* ToArrayType(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code)
		{
			return ((::System::Type*(*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOARRAYTYPE_OFFSET))(code);
		}

		static ::System::Void InitTypeA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITTYPEA_OFFSET))();
		}

		static ::System::Void InitArrayTypeA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITARRAYTYPEA_OFFSET))();
		}

		static ::System::Type* ToType(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code)
		{
			return ((::System::Type*(*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOTYPE_OFFSET))(code);
		}

		static ::System::Array* CreatePrimitiveArray(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code, ::System::Int32 length)
		{
			return ((::System::Array*(*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_CREATEPRIMITIVEARRAY_OFFSET))(code, length);
		}

		static ::System::Boolean IsPrimitiveArray(::System::Type* type, ::System::Object*& typeInformation)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::Object*&))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_ISPRIMITIVEARRAY_OFFSET))(type, typeInformation);
		}

		static ::System::Void InitValueA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITVALUEA_OFFSET))();
		}

		static ::System::String* ToComType(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code)
		{
			return ((::System::String*(*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOCOMTYPE_OFFSET))(code);
		}

		static ::System::Void InitTypeCodeA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITTYPECODEA_OFFSET))();
		}

		static ::System::TypeCode ToTypeCode(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code)
		{
			return ((::System::TypeCode(*)(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOTYPECODE_OFFSET))(code);
		}

		static ::System::Void InitCodeA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_INITCODEA_OFFSET))();
		}

		static ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE ToPrimitiveTypeEnum(::System::TypeCode typeCode)
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE(*)(::System::TypeCode))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_TOPRIMITIVETYPEENUM_OFFSET))(typeCode);
		}

		static ::System::Object* FromString(::System::String* value, ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code)
		{
			return ((::System::Object*(*)(::System::String*, ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_CONVERTER_FROMSTRING_OFFSET))(value, code);
		}
	};
}
