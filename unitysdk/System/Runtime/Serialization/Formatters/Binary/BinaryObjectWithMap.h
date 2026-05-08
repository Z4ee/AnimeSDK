#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/Formatters/Binary/BinaryHeaderEnum.h"

namespace System { class String; }
namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryParser; }
namespace System::Runtime::Serialization::Formatters::Binary { class __BinaryWriter; }

#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAP_READ_OFFSET UNITYSDK_OFFSET(0x19550A30)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAP_SET_OFFSET UNITYSDK_OFFSET(0x195508B0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAP_WRITE_OFFSET UNITYSDK_OFFSET(0x195508E0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x195508A0)
#define SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x19550890)

namespace System::Runtime::Serialization::Formatters::Binary
{
	inline static constexpr unsigned int BinaryObjectWithMap_TypeDefinitionIndex = 1193;

	class BinaryObjectWithMap : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* memberNames; // 0x10
		::System::String* name; // 0x18
		::System::Int32 numMembers; // 0x20
		::System::Int32 objectId; // 0x24
		::System::Int32 assemId; // 0x28
		::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAP__CTOR_1_OFFSET))(this, binaryHeaderEnum);
		}

		::System::Void Set(::System::Int32 objectId, ::System::String* name, ::System::Int32 numMembers, ::Il2CppArray<::System::String*>* memberNames, ::System::Int32 assemId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Int32, ::Il2CppArray<::System::String*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAP_SET_OFFSET))(this, objectId, name, numMembers, memberNames, assemId);
		}

		::System::Void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAP_WRITE_OFFSET))(this, sout);
		}

		::System::Void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FORMATTERS_BINARY_BINARYOBJECTWITHMAP_READ_OFFSET))(this, input);
		}
	};
}
