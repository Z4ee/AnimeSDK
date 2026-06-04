#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalArrayTypeE.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalMemberTypeE.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalMemberValueE.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalObjectPositionE.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalObjectTypeE.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalParseTypeE.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/InternalPrimitiveTypeE.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Runtime::Serialization { class SerializationInfo; }
namespace System::Runtime::Serialization::Formatters::Binary { class PrimitiveArray; }
namespace System::Runtime::Serialization::Formatters::Binary { class ReadObjectInfo; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PARSERECORD_INIT_OFFSET UNITYSDK_OFFSET(0x187B0760)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PARSERECORD__CCTOR_OFFSET UNITYSDK_OFFSET(0x187BA0F0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PARSERECORD__CTOR_OFFSET UNITYSDK_OFFSET(0x187B06A0)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int ParseRecord_TypeDefinitionIndex = 1183;

	class ParseRecord : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_parseRecordIdCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ParseRecord_TypeDefinitionIndex)->GetStaticField(0x4880);
		}
		::System::Object* PRvarValue; // 0x10
		::Il2CppArray<::System::Int32>* PRlengthA; // 0x18
		::System::Type* PRarrayElementType; // 0x20
		::System::String* PRkeyDt; // 0x28
		::System::Runtime::Serialization::Formatters::Binary::PrimitiveArray* PRprimitiveArray; // 0x30
		::System::Runtime::Serialization::Formatters::Binary::ReadObjectInfo* PRobjectInfo; // 0x38
		::Il2CppArray<::System::Int32>* PRlowerBoundA; // 0x40
		::Il2CppArray<::System::Object*>* PRmemberData; // 0x48
		::System::String* PRvalue; // 0x50
		::System::String* PRname; // 0x58
		::System::Runtime::Serialization::SerializationInfo* PRsi; // 0x60
		::Il2CppArray<::System::Int32>* PRindexMap; // 0x68
		::System::String* PRarrayElementTypeString; // 0x70
		::Il2CppArray<::System::Int32>* PRrectangularMap; // 0x78
		::System::Object* PRnewObj; // 0x80
		::Il2CppArray<::System::Int32>* PRupperBoundA; // 0x88
		::Il2CppArray<::System::Int32>* PRpositionA; // 0x90
		::System::Type* PRdtType; // 0x98
		::Il2CppArray<::System::Object*>* PRobjectA; // 0xA0
		::System::Int64 PRidRef; // 0xA8
		::System::Boolean PRisLowerBound; // 0xB0
		::System::Boolean PRisValueTypeFixup; // 0xB1
		::System::Runtime::Serialization::Formatters::Binary::InternalArrayTypeE PRarrayTypeEnum; // 0xB4
		::System::Int64 PRtopId; // 0xB8
		::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE PRarrayElementTypeCode; // 0xC0
		::System::Runtime::Serialization::Formatters::Binary::InternalMemberValueE PRmemberValueEnum; // 0xC4
		::System::Int32 PRlinearlength; // 0xC8
		::System::Runtime::Serialization::Formatters::Binary::InternalPrimitiveTypeE PRdtTypeCode; // 0xCC
		::System::Int64 PRheaderId; // 0xD0
		::System::Boolean PRisArrayVariant; // 0xD8
		::System::Boolean PRisRegistered; // 0xD9
		::System::Boolean PRisEnum; // 0xDA
		::System::Int32 PRmemberIndex; // 0xDC
		::System::Int64 PRobjectId; // 0xE0
		::System::Runtime::Serialization::Formatters::Binary::InternalParseTypeE PRparseTypeEnum; // 0xE8
		::System::Int32 PRnullCount; // 0xEC
		::System::Runtime::Serialization::Formatters::Binary::InternalObjectPositionE PRobjectPositionEnum; // 0xF0
		::System::Runtime::Serialization::Formatters::Binary::InternalMemberTypeE PRmemberTypeEnum; // 0xF4
		::System::Int32 PRrank; // 0xF8
		::System::Runtime::Serialization::Formatters::Binary::InternalObjectTypeE PRobjectTypeEnum; // 0xFC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PARSERECORD__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PARSERECORD__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_PARSERECORD_INIT_OFFSET))(this);
		}
	};
}
