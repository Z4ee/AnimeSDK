#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ApplicationException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_TARGETINVOCATIONEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1875B210)
#define SYSTEM_REFLECTION_TARGETINVOCATIONEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1875EF00)
#define SYSTEM_REFLECTION_TARGETINVOCATIONEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1875EF70)
#define SYSTEM_REFLECTION_TARGETINVOCATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1875EE60)

namespace System::Reflection
{
	inline static constexpr unsigned int TargetInvocationException_TypeDefinitionIndex = 585;

	class TargetInvocationException : public ::System::ApplicationException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TARGETINVOCATIONEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TARGETINVOCATIONEXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::Exception* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TARGETINVOCATIONEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TARGETINVOCATIONEXCEPTION__CTOR_3_OFFSET))(this, a1, a2);
		}
	};
}
