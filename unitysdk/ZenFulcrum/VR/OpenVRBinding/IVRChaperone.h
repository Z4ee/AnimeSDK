#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding { class IVRChaperone__AreBoundsVisible; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRChaperone__ForceBoundsVisible; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRChaperone__GetBoundsColor; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRChaperone__GetCalibrationState; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRChaperone__GetPlayAreaRect; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRChaperone__GetPlayAreaSize; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRChaperone__ReloadInfo; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRChaperone__SetSceneColor; }

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRChaperone_TypeDefinitionIndex = 36828;

	struct alignas(8) IVRChaperone
	{
		::ZenFulcrum::VR::OpenVRBinding::IVRChaperone__GetCalibrationState* GetCalibrationState; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::IVRChaperone__GetPlayAreaSize* GetPlayAreaSize; // 0x18
		::ZenFulcrum::VR::OpenVRBinding::IVRChaperone__GetPlayAreaRect* GetPlayAreaRect; // 0x20
		::ZenFulcrum::VR::OpenVRBinding::IVRChaperone__ReloadInfo* ReloadInfo; // 0x28
		::ZenFulcrum::VR::OpenVRBinding::IVRChaperone__SetSceneColor* SetSceneColor; // 0x30
		::ZenFulcrum::VR::OpenVRBinding::IVRChaperone__GetBoundsColor* GetBoundsColor; // 0x38
		::ZenFulcrum::VR::OpenVRBinding::IVRChaperone__AreBoundsVisible* AreBoundsVisible; // 0x40
		::ZenFulcrum::VR::OpenVRBinding::IVRChaperone__ForceBoundsVisible* ForceBoundsVisible; // 0x48
	};
}
