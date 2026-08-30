#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE_GET_GUID_OFFSET UNITYSDK_OFFSET(0x1AB76E10)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE_GET_LOCALIZATIONRESOURCES_OFFSET UNITYSDK_OFFSET(0x1AB76E30)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AB76DF0)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE_SET_GUID_OFFSET UNITYSDK_OFFSET(0x1AB76E20)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1AB76E00)
#define SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB76E40)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventSourceAttribute_TypeDefinitionIndex = 1692;

	class EventSourceAttribute : public ::System::Attribute
	{
	public:
		::System::String* _Guid_k__BackingField; // 0x10
		::System::String* _Name_k__BackingField; // 0x18
		::System::String* _LocalizationResources_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_Guid()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE_GET_GUID_OFFSET))(this);
		}

		::System::Void set_Guid(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE_SET_GUID_OFFSET))(this, a1);
		}

		::System::String* get_LocalizationResources()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTSOURCEATTRIBUTE_GET_LOCALIZATIONRESOURCES_OFFSET))(this);
		}
	};
}
