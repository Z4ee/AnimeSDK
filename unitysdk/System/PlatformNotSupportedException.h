#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/NotSupportedException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_PLATFORMNOTSUPPORTEDEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17993230)
#define SYSTEM_PLATFORMNOTSUPPORTEDEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x179932A0)
#define SYSTEM_PLATFORMNOTSUPPORTEDEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17993190)

namespace System
{
	inline static constexpr unsigned int PlatformNotSupportedException_TypeDefinitionIndex = 314;

	class PlatformNotSupportedException : public ::System::NotSupportedException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PLATFORMNOTSUPPORTEDEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_PLATFORMNOTSUPPORTEDEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_PLATFORMNOTSUPPORTEDEXCEPTION__CTOR_2_OFFSET))(this, info, context);
		}
	};
}
