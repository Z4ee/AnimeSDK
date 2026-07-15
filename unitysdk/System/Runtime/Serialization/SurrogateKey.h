#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Type; }

#define SYSTEM_RUNTIME_SERIALIZATION_SURROGATEKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18343670)
#define SYSTEM_RUNTIME_SERIALIZATION_SURROGATEKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x18343660)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SurrogateKey_TypeDefinitionIndex = 1130;

	class SurrogateKey : public ::System::Object
	{
	public:
		::System::Runtime::Serialization::StreamingContext m_context; // 0x10
		::System::Type* m_type; // 0x20

		::System::Void _ctor(::System::Type* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SURROGATEKEY__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SURROGATEKEY_GETHASHCODE_OFFSET))(this);
		}
	};
}
