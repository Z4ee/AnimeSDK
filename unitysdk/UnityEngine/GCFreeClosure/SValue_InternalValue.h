#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define UNITYENGINE_GCFREECLOSURE_SVALUE_INTERNALVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3BB9500)
#define UNITYENGINE_GCFREECLOSURE_SVALUE_INTERNALVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3BB9520)

namespace UnityEngine::GCFreeClosure
{
	inline static constexpr unsigned int SValue_InternalValue_TypeDefinitionIndex = 4464;

	struct alignas(8) SValue_InternalValue
	{
		::System::Boolean _bool; // 0x10
		::System::SByte _int8; // 0x10
		::System::Byte _uint8; // 0x10
		::System::Char _char; // 0x10
		::System::Int16 _int16; // 0x10
		::System::UInt16 _uint16; // 0x10
		::System::Int32 _int32; // 0x10
		::System::UInt32 _uint32; // 0x10
		::System::Int64 _int64; // 0x10
		::System::UInt64 _uint64; // 0x10
		::System::Single _single; // 0x10
		::System::Double _double; // 0x10

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_INTERNALVALUE_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_GCFREECLOSURE_SVALUE_INTERNALVALUE_GETHASHCODE_OFFSET))(this);
		}
	};
}
