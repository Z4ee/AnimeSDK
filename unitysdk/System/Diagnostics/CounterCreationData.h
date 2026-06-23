#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/PerformanceCounterType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATA_GET_COUNTERHELP_OFFSET UNITYSDK_OFFSET(0x1B752830)
#define SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATA_GET_COUNTERNAME_OFFSET UNITYSDK_OFFSET(0x1B7528B0)
#define SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATA_GET_COUNTERTYPE_OFFSET UNITYSDK_OFFSET(0x1B752930)
#define SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATA_SET_COUNTERHELP_OFFSET UNITYSDK_OFFSET(0x1B752870)
#define SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATA_SET_COUNTERNAME_OFFSET UNITYSDK_OFFSET(0x1B7528F0)
#define SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATA_SET_COUNTERTYPE_OFFSET UNITYSDK_OFFSET(0x1B752970)
#define SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B7527F0)
#define SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7527B0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int CounterCreationData_TypeDefinitionIndex = 4064;

	class CounterCreationData : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* counterName, ::System::String* counterHelp, ::System::Diagnostics::PerformanceCounterType counterType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Diagnostics::PerformanceCounterType))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATA__CTOR_1_OFFSET))(this, counterName, counterHelp, counterType);
		}

		::System::String* get_CounterHelp()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATA_GET_COUNTERHELP_OFFSET))(this);
		}

		::System::Void set_CounterHelp(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATA_SET_COUNTERHELP_OFFSET))(this, value);
		}

		::System::String* get_CounterName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATA_GET_COUNTERNAME_OFFSET))(this);
		}

		::System::Void set_CounterName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATA_SET_COUNTERNAME_OFFSET))(this, value);
		}

		::System::Diagnostics::PerformanceCounterType get_CounterType()
		{
			return ((::System::Diagnostics::PerformanceCounterType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATA_GET_COUNTERTYPE_OFFSET))(this);
		}

		::System::Void set_CounterType(::System::Diagnostics::PerformanceCounterType value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::PerformanceCounterType))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATA_SET_COUNTERTYPE_OFFSET))(this, value);
		}
	};
}
