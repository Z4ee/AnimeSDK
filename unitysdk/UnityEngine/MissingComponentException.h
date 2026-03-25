#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define UNITYENGINE_MISSINGCOMPONENTEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18A25E90)
#define UNITYENGINE_MISSINGCOMPONENTEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18A25DF0)

namespace UnityEngine
{
	inline static constexpr unsigned int MissingComponentException_TypeDefinitionIndex = 4151;

	class MissingComponentException : public ::System::Exception
	{
	public:
		::System::String* unityStackTrace; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MISSINGCOMPONENTEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + UNITYENGINE_MISSINGCOMPONENTEXCEPTION__CTOR_1_OFFSET))(this, info, context);
		}
	};
}
