#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ApplicationException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_TARGETEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CE8ABD0)
#define SYSTEM_REFLECTION_TARGETEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1CE8AC60)
#define SYSTEM_REFLECTION_TARGETEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE8AB10)

namespace System::Reflection
{
	inline static constexpr unsigned int TargetException_TypeDefinitionIndex = 559;

	class TargetException : public ::System::ApplicationException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TARGETEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TARGETEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TARGETEXCEPTION__CTOR_2_OFFSET))(this, info, context);
		}
	};
}
