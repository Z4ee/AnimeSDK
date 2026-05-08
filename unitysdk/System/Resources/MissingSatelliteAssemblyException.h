#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/SystemException.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_RESOURCES_MISSINGSATELLITEASSEMBLYEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1954CA10)
#define SYSTEM_RESOURCES_MISSINGSATELLITEASSEMBLYEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1954CAB0)
#define SYSTEM_RESOURCES_MISSINGSATELLITEASSEMBLYEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1954C950)

namespace System::Resources
{
	inline static constexpr unsigned int MissingSatelliteAssemblyException_TypeDefinitionIndex = 507;

	class MissingSatelliteAssemblyException : public ::System::SystemException
	{
	public:
		::System::String* _cultureName; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MISSINGSATELLITEASSEMBLYEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* message, ::System::String* cultureName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MISSINGSATELLITEASSEMBLYEXCEPTION__CTOR_1_OFFSET))(this, message, cultureName);
		}

		::System::Void _ctor_2(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_RESOURCES_MISSINGSATELLITEASSEMBLYEXCEPTION__CTOR_2_OFFSET))(this, info, context);
		}
	};
}
