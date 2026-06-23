#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYWRONGTYPEEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C64ECB0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYWRONGTYPEEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C64ECF0)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYWRONGTYPEEXCEPTION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1C64ED30)
#define SYSTEM_CONFIGURATION_SETTINGSPROPERTYWRONGTYPEEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C64EC70)

namespace System::Configuration
{
	inline static constexpr unsigned int SettingsPropertyWrongTypeException_TypeDefinitionIndex = 4227;

	class SettingsPropertyWrongTypeException : public ::System::Exception
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYWRONGTYPEEXCEPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYWRONGTYPEEXCEPTION__CTOR_1_OFFSET))(this, info, context);
		}

		::System::Void _ctor_2(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYWRONGTYPEEXCEPTION__CTOR_2_OFFSET))(this, message);
		}

		::System::Void _ctor_3(::System::String* message, ::System::Exception* innerException)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Exception*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_SETTINGSPROPERTYWRONGTYPEEXCEPTION__CTOR_3_OFFSET))(this, message, innerException);
		}
	};
}
