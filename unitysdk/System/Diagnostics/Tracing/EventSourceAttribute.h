#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE_GET_GUID_OFFSET UNITYSDK_OFFSET(0x179017F0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE_GET_LOCALIZATIONRESOURCES_OFFSET UNITYSDK_OFFSET(0x17901810)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x179017D0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE_SET_GUID_OFFSET UNITYSDK_OFFSET(0x17901800)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x179017E0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x17901820)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventSourceAttribute_TypeDefinitionIndex = 1683;

	class EventSourceAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Guid_k__BackingField; // 0x10
		::System::String* _LocalizationResources_k__BackingField; // 0x18
		::System::String* _Name_k__BackingField; // 0x20

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
