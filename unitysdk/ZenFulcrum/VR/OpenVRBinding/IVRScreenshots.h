#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding { class IVRScreenshots__GetScreenshotPropertyFilename; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRScreenshots__GetScreenshotPropertyType; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRScreenshots__HookScreenshot; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRScreenshots__RequestScreenshot; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRScreenshots__SubmitScreenshot; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRScreenshots__TakeStereoScreenshot; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRScreenshots__UpdateScreenshotProgress; }

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRScreenshots_TypeDefinitionIndex = 37019;

	struct alignas(8) IVRScreenshots
	{
		::ZenFulcrum::VR::OpenVRBinding::IVRScreenshots__RequestScreenshot* RequestScreenshot; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::IVRScreenshots__HookScreenshot* HookScreenshot; // 0x18
		::ZenFulcrum::VR::OpenVRBinding::IVRScreenshots__GetScreenshotPropertyType* GetScreenshotPropertyType; // 0x20
		::ZenFulcrum::VR::OpenVRBinding::IVRScreenshots__GetScreenshotPropertyFilename* GetScreenshotPropertyFilename; // 0x28
		::ZenFulcrum::VR::OpenVRBinding::IVRScreenshots__UpdateScreenshotProgress* UpdateScreenshotProgress; // 0x30
		::ZenFulcrum::VR::OpenVRBinding::IVRScreenshots__TakeStereoScreenshot* TakeStereoScreenshot; // 0x38
		::ZenFulcrum::VR::OpenVRBinding::IVRScreenshots__SubmitScreenshot* SubmitScreenshot; // 0x40
	};
}
