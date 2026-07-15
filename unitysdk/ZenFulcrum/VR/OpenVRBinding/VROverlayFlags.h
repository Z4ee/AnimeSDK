#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int VROverlayFlags_TypeDefinitionIndex = 37095;

	enum class VROverlayFlags : ::System::Int32
	{
		None = 0,
		Curved = 1,
		RGSS4X = 2,
		NoDashboardTab = 3,
		AcceptsGamepadEvents = 4,
		ShowGamepadFocus = 5,
		SendVRScrollEvents = 6,
		SendVRTouchpadEvents = 7,
		ShowTouchPadScrollWheel = 8,
		TransferOwnershipToInternalProcess = 9,
		SideBySide_Parallel = 10,
		SideBySide_Crossed = 11,
		Panorama = 12,
		StereoPanorama = 13,
		SortWithNonSceneOverlays = 14,
		VisibleInDashboard = 15,
	};
}
