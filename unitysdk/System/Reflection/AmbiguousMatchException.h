#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_AMBIGUOUSMATCHEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CE89DD0)
#define SYSTEM_REFLECTION_AMBIGUOUSMATCHEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1CE89E60)
#define SYSTEM_REFLECTION_AMBIGUOUSMATCHEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE89D10)

namespace System::Reflection
{
	inline static constexpr unsigned int AmbiguousMatchException_TypeDefinitionIndex = 524;

	class AmbiguousMatchException : public ::System::SystemException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_AMBIGUOUSMATCHEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_AMBIGUOUSMATCHEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_AMBIGUOUSMATCHEXCEPTION__CTOR_2_OFFSET))(this, info, context);
		}
	};
}
