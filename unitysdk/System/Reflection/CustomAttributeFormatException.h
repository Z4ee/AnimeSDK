#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/FormatException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEFORMATEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A97F7C0)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEFORMATEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A97F850)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEFORMATEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A97F700)

namespace System::Reflection
{
	inline static constexpr unsigned int CustomAttributeFormatException_TypeDefinitionIndex = 573;

	class CustomAttributeFormatException : public ::System::FormatException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEFORMATEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEFORMATEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEFORMATEXCEPTION__CTOR_2_OFFSET))(this, info, context);
		}
	};
}
