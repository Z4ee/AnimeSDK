#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ApplicationException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_REFLECTION_TARGETPARAMETERCOUNTEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C440ED0)
#define SYSTEM_REFLECTION_TARGETPARAMETERCOUNTEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C440F40)
#define SYSTEM_REFLECTION_TARGETPARAMETERCOUNTEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C440E30)

namespace System::Reflection
{
	inline static constexpr unsigned int TargetParameterCountException_TypeDefinitionIndex = 589;

	class TargetParameterCountException : public ::System::ApplicationException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TARGETPARAMETERCOUNTEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TARGETPARAMETERCOUNTEXCEPTION__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_REFLECTION_TARGETPARAMETERCOUNTEXCEPTION__CTOR_2_OFFSET))(this, a1, a2);
		}
	};
}
