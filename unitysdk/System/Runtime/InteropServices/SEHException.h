#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/ExternalException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RUNTIME_INTEROPSERVICES_SEHEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16394C90)
#define SYSTEM_RUNTIME_INTEROPSERVICES_SEHEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x16394BF0)

namespace System::Runtime::InteropServices
{
	inline static constexpr unsigned int SEHException_TypeDefinitionIndex = 1423;

	class SEHException : public ::System::Runtime::InteropServices::ExternalException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SEHEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_INTEROPSERVICES_SEHEXCEPTION__CTOR_1_OFFSET))(this, info, context);
		}
	};
}
