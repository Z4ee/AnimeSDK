#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_INVALIDPROGRAMEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C6D4870)
#define SYSTEM_INVALIDPROGRAMEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C6D4900)
#define SYSTEM_INVALIDPROGRAMEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6D47B0)

namespace System
{
	inline static constexpr unsigned int InvalidProgramException_TypeDefinitionIndex = 277;

	class InvalidProgramException : public ::System::SystemException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INVALIDPROGRAMEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_INVALIDPROGRAMEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_INVALIDPROGRAMEXCEPTION__CTOR_2_OFFSET))(this, info, context);
		}
	};
}
