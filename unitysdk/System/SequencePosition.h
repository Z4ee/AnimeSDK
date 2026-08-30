#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define SYSTEM_SEQUENCEPOSITION_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C6F110)
#define SYSTEM_SEQUENCEPOSITION_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C6EFB0)
#define SYSTEM_SEQUENCEPOSITION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C6F120)
#define SYSTEM_SEQUENCEPOSITION_GETINTEGER_OFFSET UNITYSDK_OFFSET(0x12370)
#define SYSTEM_SEQUENCEPOSITION_GETOBJECT_OFFSET UNITYSDK_OFFSET(0x161E0)
#define SYSTEM_SEQUENCEPOSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x6B82D0)

namespace System
{
	inline static constexpr unsigned int SequencePosition_TypeDefinitionIndex = 4971;

	struct alignas(8) SequencePosition
	{
		::System::Object* _object; // 0x10
		::System::Int32 _integer; // 0x18

		::System::Void _ctor(::System::Object* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SEQUENCEPOSITION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Object* GetObject()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SEQUENCEPOSITION_GETOBJECT_OFFSET))(this);
		}

		::System::Int32 GetInteger()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SEQUENCEPOSITION_GETINTEGER_OFFSET))(this);
		}

		::System::Boolean Equals(::System::SequencePosition a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::SequencePosition))((::PBYTE)hIl2Cpp + SYSTEM_SEQUENCEPOSITION_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_SEQUENCEPOSITION_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SEQUENCEPOSITION_GETHASHCODE_OFFSET))(this);
		}
	};
}
