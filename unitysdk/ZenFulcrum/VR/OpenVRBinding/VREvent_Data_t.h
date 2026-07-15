#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VREvent_ApplicationLaunch_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VREvent_Chaperone_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VREvent_Controller_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VREvent_EditingCameraSurface_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VREvent_Ipd_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VREvent_Keyboard_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VREvent_MessageOverlay_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VREvent_Mouse_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VREvent_Notification_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VREvent_Overlay_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VREvent_PerformanceTest_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VREvent_Process_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VREvent_Reserved_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VREvent_ScreenshotProgress_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VREvent_Screenshot_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VREvent_Scroll_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VREvent_SeatedZeroPoseReset_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VREvent_Status_t.h"
#include "unitysdk/ZenFulcrum/VR/OpenVRBinding/VREvent_TouchPadMove_t.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VREvent_Data_t_TypeDefinitionIndex = 37107;

	struct alignas(8) VREvent_Data_t
	{
		::ZenFulcrum::VR::OpenVRBinding::VREvent_Reserved_t reserved; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::VREvent_Controller_t controller; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::VREvent_Mouse_t mouse; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::VREvent_Scroll_t scroll; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::VREvent_Process_t process; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::VREvent_Notification_t notification; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::VREvent_Overlay_t overlay; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::VREvent_Status_t status; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::VREvent_Ipd_t ipd; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::VREvent_Chaperone_t chaperone; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::VREvent_PerformanceTest_t performanceTest; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::VREvent_TouchPadMove_t touchPadMove; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::VREvent_SeatedZeroPoseReset_t seatedZeroPoseReset; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::VREvent_Screenshot_t screenshot; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::VREvent_ScreenshotProgress_t screenshotProgress; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::VREvent_ApplicationLaunch_t applicationLaunch; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::VREvent_EditingCameraSurface_t cameraSurface; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::VREvent_MessageOverlay_t messageOverlay; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::VREvent_Keyboard_t keyboard; // 0x10
	};
}
