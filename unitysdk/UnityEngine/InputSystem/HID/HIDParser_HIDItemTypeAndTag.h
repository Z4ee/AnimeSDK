#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::InputSystem::HID
{
	inline static constexpr unsigned int HIDParser_HIDItemTypeAndTag_TypeDefinitionIndex = 31803;

	enum class HIDParser_HIDItemTypeAndTag : ::System::Int32
	{
		Input = 128,
		Output = 144,
		Feature = 176,
		Collection = 160,
		EndCollection = 192,
		UsagePage = 4,
		LogicalMinimum = 20,
		LogicalMaximum = 36,
		PhysicalMinimum = 52,
		PhysicalMaximum = 68,
		UnitExponent = 84,
		Unit = 100,
		ReportSize = 116,
		ReportID = 132,
		ReportCount = 148,
		Push = 164,
		Pop = 180,
		Usage = 8,
		UsageMinimum = 24,
		UsageMaximum = 40,
		DesignatorIndex = 56,
		DesignatorMinimum = 72,
		DesignatorMaximum = 88,
		StringIndex = 120,
		StringMinimum = 136,
		StringMaximum = 152,
		Delimiter = 168,
	};
}
