#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_STACKOVERFLOWEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x178214B0)
#define SYSTEM_STACKOVERFLOWEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x17821520)
#define SYSTEM_STACKOVERFLOWEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17821410)

namespace System
{
	inline static constexpr unsigned int StackOverflowException_TypeDefinitionIndex = 327;

	class StackOverflowException : public ::System::SystemException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STACKOVERFLOWEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STACKOVERFLOWEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_STACKOVERFLOWEXCEPTION__CTOR_2_OFFSET))(this, info, context);
		}
	};
}
