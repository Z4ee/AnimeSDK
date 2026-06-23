#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_THREADING_BARRIERPOSTPHASEEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B778800)
#define SYSTEM_THREADING_BARRIERPOSTPHASEEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B778730)
#define SYSTEM_THREADING_BARRIERPOSTPHASEEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B7788C0)
#define SYSTEM_THREADING_BARRIERPOSTPHASEEXCEPTION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1B778990)
#define SYSTEM_THREADING_BARRIERPOSTPHASEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B778670)

namespace System::Threading
{
	inline static constexpr unsigned int BarrierPostPhaseException_TypeDefinitionIndex = 2707;

	class BarrierPostPhaseException : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_BARRIERPOSTPHASEEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_BARRIERPOSTPHASEEXCEPTION__CTOR_1_OFFSET))(this, innerException);
		}

		::System::Void _ctor_2(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_BARRIERPOSTPHASEEXCEPTION__CTOR_2_OFFSET))(this, message);
		}

		::System::Void _ctor_3(::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_BARRIERPOSTPHASEEXCEPTION__CTOR_3_OFFSET))(this, message, innerException);
		}

		::System::Void _ctor_4(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_BARRIERPOSTPHASEEXCEPTION__CTOR_4_OFFSET))(this, info, context);
		}
	};
}
