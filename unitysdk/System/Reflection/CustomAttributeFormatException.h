#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/FormatException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEFORMATEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AFC8A00)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEFORMATEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AFC8A70)
#define SYSTEM_REFLECTION_CUSTOMATTRIBUTEFORMATEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC8960)

namespace System::Reflection
{
	inline static constexpr unsigned int CustomAttributeFormatException_TypeDefinitionIndex = 598;

	class CustomAttributeFormatException : public ::System::FormatException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEFORMATEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEFORMATEXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_CUSTOMATTRIBUTEFORMATEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}
	};
}
