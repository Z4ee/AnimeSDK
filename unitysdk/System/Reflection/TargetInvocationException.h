#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ApplicationException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_TARGETINVOCATIONEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A7C1B40)
#define SYSTEM_REFLECTION_TARGETINVOCATIONEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A7C1C10)
#define SYSTEM_REFLECTION_TARGETINVOCATIONEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1A7C1CA0)
#define SYSTEM_REFLECTION_TARGETINVOCATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7C1A80)

namespace System::Reflection
{
	inline static constexpr unsigned int TargetInvocationException_TypeDefinitionIndex = 560;

	class TargetInvocationException : public ::System::ApplicationException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TARGETINVOCATIONEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Exception* inner)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TARGETINVOCATIONEXCEPTION__CTOR_1_OFFSET))(this, inner);
		}

		::System::Void _ctor_2(::System::String* message, ::System::Exception* inner)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TARGETINVOCATIONEXCEPTION__CTOR_2_OFFSET))(this, message, inner);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TARGETINVOCATIONEXCEPTION__CTOR_3_OFFSET))(this, info, context);
		}
	};
}
