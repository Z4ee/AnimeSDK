#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/CounterSample.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_DIAGNOSTICS_COUNTERSAMPLECALCULATOR_COMPUTECOUNTERVALUE_1_OFFSET UNITYSDK_OFFSET(0x1C2E2E30)
#define SYSTEM_DIAGNOSTICS_COUNTERSAMPLECALCULATOR_COMPUTECOUNTERVALUE_OFFSET UNITYSDK_OFFSET(0x1C2E2DF0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int CounterSampleCalculator_TypeDefinitionIndex = 4167;

	class CounterSampleCalculator : public ::System::Object
	{
	public:
		static ::System::Single ComputeCounterValue(::System::Diagnostics::CounterSample newSample)
		{
			return ((::System::Single(*)(::System::Diagnostics::CounterSample))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERSAMPLECALCULATOR_COMPUTECOUNTERVALUE_OFFSET))(newSample);
		}

		static ::System::Single ComputeCounterValue_1(::System::Diagnostics::CounterSample oldSample, ::System::Diagnostics::CounterSample newSample)
		{
			return ((::System::Single(*)(::System::Diagnostics::CounterSample, ::System::Diagnostics::CounterSample))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_COUNTERSAMPLECALCULATOR_COMPUTECOUNTERVALUE_1_OFFSET))(oldSample, newSample);
		}
	};
}
