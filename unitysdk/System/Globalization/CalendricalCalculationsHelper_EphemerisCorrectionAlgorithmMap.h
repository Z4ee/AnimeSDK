#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/CalendricalCalculationsHelper_CorrectionAlgorithm.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_EPHEMERISCORRECTIONALGORITHMMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x312BA0)

namespace System::Globalization
{
	inline static constexpr unsigned int CalendricalCalculationsHelper_EphemerisCorrectionAlgorithmMap_TypeDefinitionIndex = 699;

	struct alignas(4) CalendricalCalculationsHelper_EphemerisCorrectionAlgorithmMap
	{
		::System::Int32 _lowestYear; // 0x10
		::System::Globalization::CalendricalCalculationsHelper_CorrectionAlgorithm _algorithm; // 0x14

		::System::Void _ctor(::System::Int32 year, ::System::Globalization::CalendricalCalculationsHelper_CorrectionAlgorithm algorithm)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Globalization::CalendricalCalculationsHelper_CorrectionAlgorithm))((::PBYTE)hIl2Cpp + SYSTEM_GLOBALIZATION_CALENDRICALCALCULATIONSHELPER_EPHEMERISCORRECTIONALGORITHMMAP__CTOR_OFFSET))(this, year, algorithm);
		}
	};
}
