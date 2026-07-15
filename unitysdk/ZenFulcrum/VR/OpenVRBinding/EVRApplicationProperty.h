#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int EVRApplicationProperty_TypeDefinitionIndex = 37087;

	enum class EVRApplicationProperty : ::System::Int32
	{
		Name_String = 0,
		LaunchType_String = 11,
		WorkingDirectory_String = 12,
		BinaryPath_String = 13,
		Arguments_String = 14,
		URL_String = 15,
		Description_String = 50,
		NewsURL_String = 51,
		ImagePath_String = 52,
		Source_String = 53,
		IsDashboardOverlay_Bool = 60,
		IsTemplate_Bool = 61,
		IsInstanced_Bool = 62,
		IsInternal_Bool = 63,
		WantsCompositorPauseInStandby_Bool = 64,
		LastLaunchTime_Uint64 = 70,
	};
}
