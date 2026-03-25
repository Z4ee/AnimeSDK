#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE_GET_GUID_OFFSET UNITYSDK_OFFSET(0x162D50D0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE_GET_LOCALIZATIONRESOURCES_OFFSET UNITYSDK_OFFSET(0x162D50F0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x162D50B0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE_SET_GUID_OFFSET UNITYSDK_OFFSET(0x162D50E0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x162D50C0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x162D5100)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventSourceAttribute_TypeDefinitionIndex = 1682;

	class EventSourceAttribute : public ::System::Attribute
	{
	public:
		::System::String* _LocalizationResources_k__BackingField; // 0x10
		::System::String* _Name_k__BackingField; // 0x18
		::System::String* _Guid_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_Guid()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE_GET_GUID_OFFSET))(this);
		}

		::System::Void set_Guid(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE_SET_GUID_OFFSET))(this, value);
		}

		::System::String* get_LocalizationResources()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE_GET_LOCALIZATIONRESOURCES_OFFSET))(this);
		}
	};
}
