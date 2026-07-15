#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace ZenFulcrum::VR::OpenVRBinding { class IVRChaperoneSetup__CommitWorkingCopy; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRChaperoneSetup__ExportLiveToBuffer; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRChaperoneSetup__GetLiveCollisionBoundsInfo; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRChaperoneSetup__GetLivePhysicalBoundsInfo; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRChaperoneSetup__GetWorkingCollisionBoundsInfo; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRChaperoneSetup__GetWorkingPlayAreaRect; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRChaperoneSetup__GetWorkingPlayAreaSize; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRChaperoneSetup__ImportFromBufferToWorking; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRChaperoneSetup__ReloadFromDisk; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRChaperoneSetup__RevertWorkingCopy; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRChaperoneSetup__SetWorkingCollisionBoundsInfo; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRChaperoneSetup__SetWorkingPlayAreaSize; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose; }
namespace ZenFulcrum::VR::OpenVRBinding { class IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose; }

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int IVRChaperoneSetup_TypeDefinitionIndex = 36837;

	struct alignas(8) IVRChaperoneSetup
	{
		::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__CommitWorkingCopy* CommitWorkingCopy; // 0x10
		::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__RevertWorkingCopy* RevertWorkingCopy; // 0x18
		::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__GetWorkingPlayAreaSize* GetWorkingPlayAreaSize; // 0x20
		::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__GetWorkingPlayAreaRect* GetWorkingPlayAreaRect; // 0x28
		::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__GetWorkingCollisionBoundsInfo* GetWorkingCollisionBoundsInfo; // 0x30
		::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__GetLiveCollisionBoundsInfo* GetLiveCollisionBoundsInfo; // 0x38
		::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__GetWorkingSeatedZeroPoseToRawTrackingPose* GetWorkingSeatedZeroPoseToRawTrackingPose; // 0x40
		::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__GetWorkingStandingZeroPoseToRawTrackingPose* GetWorkingStandingZeroPoseToRawTrackingPose; // 0x48
		::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__SetWorkingPlayAreaSize* SetWorkingPlayAreaSize; // 0x50
		::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__SetWorkingCollisionBoundsInfo* SetWorkingCollisionBoundsInfo; // 0x58
		::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__SetWorkingSeatedZeroPoseToRawTrackingPose* SetWorkingSeatedZeroPoseToRawTrackingPose; // 0x60
		::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__SetWorkingStandingZeroPoseToRawTrackingPose* SetWorkingStandingZeroPoseToRawTrackingPose; // 0x68
		::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__ReloadFromDisk* ReloadFromDisk; // 0x70
		::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__GetLiveSeatedZeroPoseToRawTrackingPose* GetLiveSeatedZeroPoseToRawTrackingPose; // 0x78
		::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__SetWorkingCollisionBoundsTagsInfo* SetWorkingCollisionBoundsTagsInfo; // 0x80
		::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__GetLiveCollisionBoundsTagsInfo* GetLiveCollisionBoundsTagsInfo; // 0x88
		::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__SetWorkingPhysicalBoundsInfo* SetWorkingPhysicalBoundsInfo; // 0x90
		::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__GetLivePhysicalBoundsInfo* GetLivePhysicalBoundsInfo; // 0x98
		::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__ExportLiveToBuffer* ExportLiveToBuffer; // 0xA0
		::ZenFulcrum::VR::OpenVRBinding::IVRChaperoneSetup__ImportFromBufferToWorking* ImportFromBufferToWorking; // 0xA8
	};
}
