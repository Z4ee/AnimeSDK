#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Type; }

#define SYSTEM_RUNTIME_SERIALIZATION_SURROGATEKEY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x163F5FB0)
#define SYSTEM_RUNTIME_SERIALIZATION_SURROGATEKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x163F5FA0)

namespace System::Runtime::Serialization
{
	inline static constexpr unsigned int SurrogateKey_TypeDefinitionIndex = 1127;

	class SurrogateKey : public ::System::Object
	{
	public:
		::System::Type* m_type; // 0x10
		::System::Runtime::Serialization::StreamingContext m_context; // 0x18

		::System::Void _ctor(::System::Type* type, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SURROGATEKEY__CTOR_OFFSET))(this, type, context);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_SERIALIZATION_SURROGATEKEY_GETHASHCODE_OFFSET))(this);
		}
	};
}
