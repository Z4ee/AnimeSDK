#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/HID/HID_HIDReportType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define UNITYENGINE_INPUTSYSTEM_HID_HIDPARSER_HIDREPORTDATA_FINDORADDREPORT_OFFSET UNITYSDK_OFFSET(0x1B9772B0)

namespace UnityEngine::InputSystem::HID
{
	inline static constexpr unsigned int HIDParser_HIDReportData_TypeDefinitionIndex = 31802;

	struct alignas(4) HIDParser_HIDReportData
	{
		::System::Int32 reportId; // 0x10
		::UnityEngine::InputSystem::HID::HID_HIDReportType reportType; // 0x14
		::System::Int32 currentBitOffset; // 0x18

		/*
		static ::System::Int32 FindOrAddReport(::System::Nullable_1<::System::Int32> reportId, ::UnityEngine::InputSystem::HID::HID_HIDReportType reportType, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::HID::HIDParser_HIDReportData>* reports)
		{
			return ((::System::Int32(*)(::System::Nullable_1<::System::Int32>, ::UnityEngine::InputSystem::HID::HID_HIDReportType, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::HID::HIDParser_HIDReportData>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HIDPARSER_HIDREPORTDATA_FINDORADDREPORT_OFFSET))(reportId, reportType, reports);
		}
		*/
	};
}
