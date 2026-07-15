#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_STACKOVERFLOWEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x150C38C0)
#define SYSTEM_STACKOVERFLOWEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x150C3930)
#define SYSTEM_STACKOVERFLOWEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x150C3820)

namespace System
{
	inline static constexpr unsigned int StackOverflowException_TypeDefinitionIndex = 326;

	class StackOverflowException : public ::System::SystemException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_STACKOVERFLOWEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_STACKOVERFLOWEXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_STACKOVERFLOWEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}
	};
}
