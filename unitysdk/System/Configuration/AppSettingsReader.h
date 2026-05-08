#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }

#define SYSTEM_CONFIGURATION_APPSETTINGSREADER_GETVALUE_OFFSET UNITYSDK_OFFSET(0x19A4F250)
#define SYSTEM_CONFIGURATION_APPSETTINGSREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x19A4F210)

namespace System::Configuration
{
	inline static constexpr unsigned int AppSettingsReader_TypeDefinitionIndex = 4200;

	class AppSettingsReader : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPSETTINGSREADER__CTOR_OFFSET))(this);
		}

		::System::Object* GetValue(::System::String* key, ::System::Type* type)
		{
			return ((::System::Object*(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_CONFIGURATION_APPSETTINGSREADER_GETVALUE_OFFSET))(this, key, type);
		}
	};
}
