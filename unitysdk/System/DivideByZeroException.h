#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArithmeticException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_DIVIDEBYZEROEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x186C34F0)
#define SYSTEM_DIVIDEBYZEROEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x186C3440)

namespace System
{
	inline static constexpr unsigned int DivideByZeroException_TypeDefinitionIndex = 232;

	class DivideByZeroException : public ::System::ArithmeticException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIVIDEBYZEROEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DIVIDEBYZEROEXCEPTION__CTOR_1_OFFSET))(this, a1, a2);
		}
	};
}
