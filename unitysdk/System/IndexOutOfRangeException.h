#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_INDEXOUTOFRANGEEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A3A8E80)
#define SYSTEM_INDEXOUTOFRANGEEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A3A8F10)
#define SYSTEM_INDEXOUTOFRANGEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3A8DC0)

namespace System
{
	inline static constexpr unsigned int IndexOutOfRangeException_TypeDefinitionIndex = 270;

	class IndexOutOfRangeException : public ::System::SystemException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_INDEXOUTOFRANGEEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_INDEXOUTOFRANGEEXCEPTION__CTOR_1_OFFSET))(this, message);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_INDEXOUTOFRANGEEXCEPTION__CTOR_2_OFFSET))(this, info, context);
		}
	};
}
