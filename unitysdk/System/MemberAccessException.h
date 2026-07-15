#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_MEMBERACCESSEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B875F60)
#define SYSTEM_MEMBERACCESSEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B875FD0)
#define SYSTEM_MEMBERACCESSEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1B875EC0)

namespace System
{
	inline static constexpr unsigned int MemberAccessException_TypeDefinitionIndex = 293;

	class MemberAccessException : public ::System::SystemException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MEMBERACCESSEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_MEMBERACCESSEXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_MEMBERACCESSEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}
	};
}
