#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/PerformanceCounterType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATA_GET_COUNTERHELP_OFFSET UNITYSDK_OFFSET(0x193A70F0)
#define SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATA_GET_COUNTERNAME_OFFSET UNITYSDK_OFFSET(0x193A7170)
#define SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATA_GET_COUNTERTYPE_OFFSET UNITYSDK_OFFSET(0x193A71F0)
#define SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATA_SET_COUNTERHELP_OFFSET UNITYSDK_OFFSET(0x193A7130)
#define SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATA_SET_COUNTERNAME_OFFSET UNITYSDK_OFFSET(0x193A71B0)
#define SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATA_SET_COUNTERTYPE_OFFSET UNITYSDK_OFFSET(0x193A7230)
#define SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x193A70B0)
#define SYSTEM_DIAGNOSTICS_COUNTERCREATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x193A7070)

namespace System::Diagnostics
{
	inline static constexpr unsigned int CounterCreationData_TypeDefinitionIndex = 4065;

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
