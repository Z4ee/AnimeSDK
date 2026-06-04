#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_RUNTIME_SERIALIZATION_FIXUPHOLDER__CTOR_OFFSET UNITYSDK_OFFSET(0x187A5050)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int FixupHolder_TypeDefinitionIndex = 1102;

	class FixupHolder : public ::System::Object
	{
	public:
		::System::Object* m_fixupInfo; // 0x10
		::System::Int64 m_id; // 0x18
		::System::Int32 m_fixupType; // 0x20

		::System::Void _ctor(::System::Int64 a1, ::System::Object* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_FIXUPHOLDER__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
