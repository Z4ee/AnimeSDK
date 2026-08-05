#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/PerformanceCounterType.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_DIAGNOSTICS_COUNTERSAMPLE_CALCULATE_1_OFFSET UNITYSDK_OFFSET(0x1CC06DD0)
#define SYSTEM_DIAGNOSTICS_COUNTERSAMPLE_CALCULATE_OFFSET UNITYSDK_OFFSET(0x1CC06D90)
#define SYSTEM_DIAGNOSTICS_COUNTERSAMPLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x96CDB0)
#define SYSTEM_DIAGNOSTICS_COUNTERSAMPLE_GET_BASEVALUE_OFFSET UNITYSDK_OFFSET(0x96CBB0)
#define SYSTEM_DIAGNOSTICS_COUNTERSAMPLE_GET_COUNTERFREQUENCY_OFFSET UNITYSDK_OFFSET(0x96CBF0)
#define SYSTEM_DIAGNOSTICS_COUNTERSAMPLE_GET_COUNTERTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x96CC30)
#define SYSTEM_DIAGNOSTICS_COUNTERSAMPLE_GET_COUNTERTYPE_OFFSET UNITYSDK_OFFSET(0x96CC70)
#define SYSTEM_DIAGNOSTICS_COUNTERSAMPLE_GET_RAWVALUE_OFFSET UNITYSDK_OFFSET(0x96CCB0)
#define SYSTEM_DIAGNOSTICS_COUNTERSAMPLE_GET_SYSTEMFREQUENCY_OFFSET UNITYSDK_OFFSET(0x96CCF0)
#define SYSTEM_DIAGNOSTICS_COUNTERSAMPLE_GET_TIMESTAMP100NSEC_OFFSET UNITYSDK_OFFSET(0x96CD70)
#define SYSTEM_DIAGNOSTICS_COUNTERSAMPLE_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x96CD30)
#define SYSTEM_DIAGNOSTICS_COUNTERSAMPLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1CC06E50)
#define SYSTEM_DIAGNOSTICS_COUNTERSAMPLE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1CC06E90)
#define SYSTEM_DIAGNOSTICS_COUNTERSAMPLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x96CB70)
#define SYSTEM_DIAGNOSTICS_COUNTERSAMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x96CB30)

namespace System::Diagnostics
{
	inline static constexpr unsigned int CounterSample_TypeDefinitionIndex = 4166;

	struct alignas(1) CounterSample
	{
		static ::System::Diagnostics::CounterSample* StaticGet_Empty()
		{
			return (::System::Diagnostics::CounterSample*)Il2CppClass::FromTypeDefinitionIndex(CounterSample_TypeDefinitionIndex)->GetStaticField(0x135C0);
		}

		::System::Void _ctor(::System::Int64 rawValue, ::System::Int64 baseValue, ::System::Int64 counterFrequency, ::System::Int64 systemFrequency, ::System::Int64 timeStamp, ::System::Int64 timeStamp100nSec, ::System::Diagnostics::PerformanceCounterType counterType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Diagnostics::PerformanceCounterType))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERSAMPLE__CTOR_OFFSET))(this, rawValue, baseValue, counterFrequency, systemFrequency, timeStamp, timeStamp100nSec, counterType);
		}

		::System::Void _ctor_1(::System::Int64 rawValue, ::System::Int64 baseValue, ::System::Int64 counterFrequency, ::System::Int64 systemFrequency, ::System::Int64 timeStamp, ::System::Int64 timeStamp100nSec, ::System::Diagnostics::PerformanceCounterType counterType, ::System::Int64 counterTimeStamp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Int64, ::System::Diagnostics::PerformanceCounterType, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERSAMPLE__CTOR_1_OFFSET))(this, rawValue, baseValue, counterFrequency, systemFrequency, timeStamp, timeStamp100nSec, counterType, counterTimeStamp);
		}

		::System::Int64 get_BaseValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERSAMPLE_GET_BASEVALUE_OFFSET))(this);
		}

		::System::Int64 get_CounterFrequency()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERSAMPLE_GET_COUNTERFREQUENCY_OFFSET))(this);
		}

		::System::Int64 get_CounterTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERSAMPLE_GET_COUNTERTIMESTAMP_OFFSET))(this);
		}

		::System::Diagnostics::PerformanceCounterType get_CounterType()
		{
			return ((::System::Diagnostics::PerformanceCounterType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERSAMPLE_GET_COUNTERTYPE_OFFSET))(this);
		}

		::System::Int64 get_RawValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERSAMPLE_GET_RAWVALUE_OFFSET))(this);
		}

		::System::Int64 get_SystemFrequency()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERSAMPLE_GET_SYSTEMFREQUENCY_OFFSET))(this);
		}

		::System::Int64 get_TimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERSAMPLE_GET_TIMESTAMP_OFFSET))(this);
		}

		::System::Int64 get_TimeStamp100nSec()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERSAMPLE_GET_TIMESTAMP100NSEC_OFFSET))(this);
		}

		static ::System::Single Calculate(::System::Diagnostics::CounterSample counterSample)
		{
			return ((::System::Single(*)(::System::Diagnostics::CounterSample))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERSAMPLE_CALCULATE_OFFSET))(counterSample);
		}

		static ::System::Single Calculate_1(::System::Diagnostics::CounterSample counterSample, ::System::Diagnostics::CounterSample nextCounterSample)
		{
			return ((::System::Single(*)(::System::Diagnostics::CounterSample, ::System::Diagnostics::CounterSample))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERSAMPLE_CALCULATE_1_OFFSET))(counterSample, nextCounterSample);
		}

		::System::Boolean Equals(::System::Diagnostics::CounterSample sample)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::CounterSample))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERSAMPLE_EQUALS_OFFSET))(this, sample);
		}

		static ::System::Boolean op_Equality(::System::Diagnostics::CounterSample a, ::System::Diagnostics::CounterSample b)
		{
			return ((::System::Boolean(*)(::System::Diagnostics::CounterSample, ::System::Diagnostics::CounterSample))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERSAMPLE_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::System::Diagnostics::CounterSample a, ::System::Diagnostics::CounterSample b)
		{
			return ((::System::Boolean(*)(::System::Diagnostics::CounterSample, ::System::Diagnostics::CounterSample))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERSAMPLE_OP_INEQUALITY_OFFSET))(a, b);
		}
	};
}
