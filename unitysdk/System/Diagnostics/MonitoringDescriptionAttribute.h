#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/DescriptionAttribute.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_MONITORINGDESCRIPTIONATTRIBUTE_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1AF446D0)
#define SYSTEM_DIAGNOSTICS_MONITORINGDESCRIPTIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF44670)

namespace System::Diagnostics
{
	inline static constexpr unsigned int MonitoringDescriptionAttribute_TypeDefinitionIndex = 2545;

	class MonitoringDescriptionAttribute : public ::System::ComponentModel::DescriptionAttribute
	{
	public:
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_MONITORINGDESCRIPTIONATTRIBUTE__CTOR_OFFSET))(this, a1);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_MONITORINGDESCRIPTIONATTRIBUTE_GET_DESCRIPTION_OFFSET))(this);
		}
	};
}
