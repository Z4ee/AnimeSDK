#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/BinaryHeaderEnum.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/BinaryTypeEnum.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalPrimitiveTypeE.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class Stream; }
namespace System::Runtime::Serialization::Formatters::Binary { class BinaryAssemblyInfo; }
namespace System::Runtime::Serialization::Formatters::Binary { class BinaryCrossAppDomainString; }
namespace System::Runtime::Serialization::Formatters::Binary { class BinaryObject; }
namespace System::Runtime::Serialization::Formatters::Binary { class BinaryObjectString; }
namespace System::Runtime::Serialization::Formatters::Binary { class BinaryObjectWithMap; }
namespace System::Runtime::Serialization::Formatters::Binary { class BinaryObjectWithMapTyped; }
namespace System::Runtime::Serialization::Formatters::Binary { class MemberPrimitiveTyped; }
namespace System::Runtime::Serialization::Formatters::Binary { class MemberPrimitiveUnTyped; }
namespace System::Runtime::Serialization::Formatters::Binary { class MemberReference; }
namespace System::Runtime::Serialization::Formatters::Binary { class MessageEnd; }
namespace System::Runtime::Serialization::Formatters::Binary { class ObjectNull; }
namespace System::Runtime::Serialization::Formatters::Binary { class ObjectProgress; }
namespace System::Runtime::Serialization::Formatters::Binary { class ObjectReader; }
namespace System::Runtime::Serialization::Formatters::Binary { class ParseRecord; }
namespace System::Runtime::Serialization::Formatters::Binary { class SerStack; }
namespace System::Runtime::Serialization::Formatters::Binary { class SizedArray; }
namespace System::Text { class Encoding; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_GETOP_OFFSET UNITYSDK_OFFSET(0x17A0F610)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_GET_ASSEMIDTOASSEMBLYTABLE_OFFSET UNITYSDK_OFFSET(0x17A0E7A0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_GET_OBJECTMAPIDTABLE_OFFSET UNITYSDK_OFFSET(0x17A0E710)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_GET_PRS_OFFSET UNITYSDK_OFFSET(0x17A0E820)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_GET_SYSTEMASSEMBLYINFO_OFFSET UNITYSDK_OFFSET(0x17A0E680)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_PUTOP_OFFSET UNITYSDK_OFFSET(0x17A12EE0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READARRAYASBYTES_OFFSET UNITYSDK_OFFSET(0x17A125B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READARRAY_OFFSET UNITYSDK_OFFSET(0x17A11BD0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READASSEMBLY_OFFSET UNITYSDK_OFFSET(0x17A0ED80)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READBEGIN_OFFSET UNITYSDK_OFFSET(0x17A0E870)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READBOOLEAN_OFFSET UNITYSDK_OFFSET(0x17A0E890)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READBYTES_1_OFFSET UNITYSDK_OFFSET(0x17A0E8C0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READBYTES_OFFSET UNITYSDK_OFFSET(0x17A0C7E0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READBYTE_OFFSET UNITYSDK_OFFSET(0x179F8BB0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READCHARS_OFFSET UNITYSDK_OFFSET(0x17A0E960)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READCHAR_OFFSET UNITYSDK_OFFSET(0x17A0E930)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READCROSSAPPDOMAINMAP_OFFSET UNITYSDK_OFFSET(0x17A0F7C0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READDATETIME_OFFSET UNITYSDK_OFFSET(0x17A0EB90)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READDECIMAL_OFFSET UNITYSDK_OFFSET(0x17A0E990)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READDOUBLE_OFFSET UNITYSDK_OFFSET(0x17A0EA40)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READEND_OFFSET UNITYSDK_OFFSET(0x17A0E880)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READINT16_OFFSET UNITYSDK_OFFSET(0x17A0EA70)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READINT32_OFFSET UNITYSDK_OFFSET(0x17A0EAA0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READINT64_OFFSET UNITYSDK_OFFSET(0x17A0EAD0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READMEMBERPRIMITIVETYPED_OFFSET UNITYSDK_OFFSET(0x17A11430)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READMEMBERPRIMITIVEUNTYPED_OFFSET UNITYSDK_OFFSET(0x17A12F80)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READMEMBERREFERENCE_OFFSET UNITYSDK_OFFSET(0x17A13600)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READMESSAGEEND_OFFSET UNITYSDK_OFFSET(0x17A13F80)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READOBJECTNULL_OFFSET UNITYSDK_OFFSET(0x17A13AC0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READOBJECTSTRING_OFFSET UNITYSDK_OFFSET(0x17A10910)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READOBJECTWITHMAPTYPED_1_OFFSET UNITYSDK_OFFSET(0x17A10070)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READOBJECTWITHMAPTYPED_OFFSET UNITYSDK_OFFSET(0x17A108A0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READOBJECTWITHMAP_1_OFFSET UNITYSDK_OFFSET(0x17A0F970)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READOBJECTWITHMAP_OFFSET UNITYSDK_OFFSET(0x17A10810)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READOBJECT_OFFSET UNITYSDK_OFFSET(0x17A0F0D0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READSBYTE_OFFSET UNITYSDK_OFFSET(0x17A0EB00)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READSERIALIZATIONHEADERRECORD_OFFSET UNITYSDK_OFFSET(0x17A0ECC0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READSINGLE_OFFSET UNITYSDK_OFFSET(0x17A0EA10)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READSTRING_OFFSET UNITYSDK_OFFSET(0x17A0EB30)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READTIMESPAN_OFFSET UNITYSDK_OFFSET(0x17A0EB60)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READUINT16_OFFSET UNITYSDK_OFFSET(0x17A0EC30)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READUINT32_OFFSET UNITYSDK_OFFSET(0x17A0EC60)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READUINT64_OFFSET UNITYSDK_OFFSET(0x17A0EC90)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READVALUE_OFFSET UNITYSDK_OFFSET(0x17A14120)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_RUN_OFFSET UNITYSDK_OFFSET(0x17A01A00)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER__CCTOR_OFFSET UNITYSDK_OFFSET(0x17A14620)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x179FAC50)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int __BinaryParser_TypeDefinitionIndex = 1183;

	class __BinaryParser : public ::System::Object
	{
	public:
		static ::System::Text::Encoding** StaticGet_encoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(__BinaryParser_TypeDefinitionIndex)->GetStaticField(0x89F0);
		}
		static ::System::Runtime::Serialization::Formatters::Binary::MessageEnd** StaticGet_messageEnd()
		{
			return (::System::Runtime::Serialization::Formatters::Binary::MessageEnd**)Il2CppClass::FromTypeDefinitionIndex(__BinaryParser_TypeDefinitionIndex)->GetStaticField(0x89F8);
		}
		::System::IO::BinaryReader* dataReader; // 0x10
		::System::Runtime::Serialization::Formatters::Binary::BinaryCrossAppDomainString* crossAppDomainString; // 0x18
		::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* systemAssemblyInfo; // 0x20
		::System::Runtime::Serialization::Formatters::Binary::BinaryObject* binaryObject; // 0x28
		::System::IO::Stream* input; // 0x30
		::System::Runtime::Serialization::Formatters::Binary::MemberReference* memberReference; // 0x38
		::System::Runtime::Serialization::Formatters::Binary::SizedArray* assemIdToAssemblyTable; // 0x40
		::System::Runtime::Serialization::Formatters::Binary::ObjectNull* objectNull; // 0x48
		::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* bowmt; // 0x50
		::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveTyped* memberPrimitiveTyped; // 0x58
		::System::Runtime::Serialization::Formatters::Binary::BinaryObjectString* objectString; // 0x60
		::System::Object* expectedTypeInformation; // 0x68
		::Il2CppArray<::System::Byte>* byteBuffer; // 0x70
		::System::Runtime::Serialization::Formatters::Binary::ParseRecord* PRS; // 0x78
		::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* bowm; // 0x80
		::System::Runtime::Serialization::Formatters::Binary::SerStack* stack; // 0x88
		::System::Runtime::Serialization::Formatters::Binary::SizedArray* objectMapIdTable; // 0x90
		::System::Runtime::Serialization::Formatters::Binary::MemberPrimitiveUnTyped* memberPrimitiveUnTyped; // 0x98
		::System::Runtime::Serialization::Formatters::Binary::SerStack* opPool; // 0xA0
		::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader; // 0xA8
		::System::Int64 topId; // 0xB0
		::System::Int64 headerId; // 0xB8
		::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum expectedType; // 0xC0

		::System::Void _ctor(::System::IO::Stream* stream, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader* objectReader)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*, ::System::Runtime::Serialization::Formatters::Binary::ObjectReader*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER__CTOR_OFFSET))(this, stream, objectReader);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER__CCTOR_OFFSET))();
		}

		::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo* get_SystemAssemblyInfo()
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::BinaryAssemblyInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_GET_SYSTEMASSEMBLYINFO_OFFSET))(this);
		}

		::System::Runtime::Serialization::Formatters::Binary::SizedArray* get_ObjectMapIdTable()
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::SizedArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_GET_OBJECTMAPIDTABLE_OFFSET))(this);
		}

		::System::Runtime::Serialization::Formatters::Binary::SizedArray* get_AssemIdToAssemblyTable()
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::SizedArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_GET_ASSEMIDTOASSEMBLYTABLE_OFFSET))(this);
		}

		::System::Runtime::Serialization::Formatters::Binary::ParseRecord* get_prs()
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::ParseRecord*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_GET_PRS_OFFSET))(this);
		}

		::System::Void Run()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_RUN_OFFSET))(this);
		}

		::System::Void ReadBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READBEGIN_OFFSET))(this);
		}

		::System::Void ReadEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READEND_OFFSET))(this);
		}

		::System::Boolean ReadBoolean()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READBOOLEAN_OFFSET))(this);
		}

		::System::Byte ReadByte()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READBYTE_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* ReadBytes(::System::Int32 length)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READBYTES_OFFSET))(this, length);
		}

		::System::Void ReadBytes_1(::Il2CppArray<::System::Byte>* byteA, ::System::Int32 offset, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READBYTES_1_OFFSET))(this, byteA, offset, size);
		}

		::System::Char ReadChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READCHAR_OFFSET))(this);
		}

		::Il2CppArray<::System::Char>* ReadChars(::System::Int32 length)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READCHARS_OFFSET))(this, length);
		}

		::System::Decimal ReadDecimal()
		{
			return ((::System::Decimal(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READDECIMAL_OFFSET))(this);
		}

		::System::Single ReadSingle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READSINGLE_OFFSET))(this);
		}

		::System::Double ReadDouble()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READDOUBLE_OFFSET))(this);
		}

		::System::Int16 ReadInt16()
		{
			return ((::System::Int16(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READINT16_OFFSET))(this);
		}

		::System::Int32 ReadInt32()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READINT32_OFFSET))(this);
		}

		::System::Int64 ReadInt64()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READINT64_OFFSET))(this);
		}

		::System::SByte ReadSByte()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READSBYTE_OFFSET))(this);
		}

		::System::String* ReadString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READSTRING_OFFSET))(this);
		}

		::System::TimeSpan ReadTimeSpan()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READTIMESPAN_OFFSET))(this);
		}

		::System::DateTime ReadDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READDATETIME_OFFSET))(this);
		}

		::System::UInt16 ReadUInt16()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READUINT16_OFFSET))(this);
		}

		::System::UInt32 ReadUInt32()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READUINT32_OFFSET))(this);
		}

		::System::UInt64 ReadUInt64()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READUINT64_OFFSET))(this);
		}

		::System::Void ReadSerializationHeaderRecord()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READSERIALIZATIONHEADERRECORD_OFFSET))(this);
		}

		::System::Void ReadAssembly(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READASSEMBLY_OFFSET))(this, binaryHeaderEnum);
		}

		::System::Void ReadObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READOBJECT_OFFSET))(this);
		}

		::System::Void ReadCrossAppDomainMap()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READCROSSAPPDOMAINMAP_OFFSET))(this);
		}

		::System::Void ReadObjectWithMap(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READOBJECTWITHMAP_OFFSET))(this, binaryHeaderEnum);
		}

		::System::Void ReadObjectWithMap_1(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap* record)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMap*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READOBJECTWITHMAP_1_OFFSET))(this, record);
		}

		::System::Void ReadObjectWithMapTyped(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READOBJECTWITHMAPTYPED_OFFSET))(this, binaryHeaderEnum);
		}

		::System::Void ReadObjectWithMapTyped_1(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped* record)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READOBJECTWITHMAPTYPED_1_OFFSET))(this, record);
		}

		::System::Void ReadObjectString(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READOBJECTSTRING_OFFSET))(this, binaryHeaderEnum);
		}

		::System::Void ReadMemberPrimitiveTyped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READMEMBERPRIMITIVETYPED_OFFSET))(this);
		}

		::System::Void ReadArray(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READARRAY_OFFSET))(this, binaryHeaderEnum);
		}

		::System::Void ReadArrayAsBytes(::System::Runtime::Serialization::Formatters::Binary::ParseRecord* pr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::ParseRecord*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READARRAYASBYTES_OFFSET))(this, pr);
		}

		::System::Void ReadMemberPrimitiveUnTyped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READMEMBERPRIMITIVEUNTYPED_OFFSET))(this);
		}

		::System::Void ReadMemberReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READMEMBERREFERENCE_OFFSET))(this);
		}

		::System::Void ReadObjectNull(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READOBJECTNULL_OFFSET))(this, binaryHeaderEnum);
		}

		::System::Void ReadMessageEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READMESSAGEEND_OFFSET))(this);
		}

		::System::Object* ReadValue(::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE code)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_READVALUE_OFFSET))(this, code);
		}

		::System::Runtime::Serialization::Formatters::Binary::ObjectProgress* GetOp()
		{
			return ((::System::Runtime::Serialization::Formatters::Binary::ObjectProgress*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_GETOP_OFFSET))(this);
		}

		::System::Void PutOp(::System::Runtime::Serialization::Formatters::Binary::ObjectProgress* op)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::ObjectProgress*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY___BINARYPARSER_PUTOP_OFFSET))(this, op);
		}
	};
}
