#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int ETrackedPropertyError_TypeDefinitionIndex = 37066;

	enum class ETrackedPropertyError : ::System::Int32
	{
		TrackedProp_Success = 0,
		TrackedProp_WrongDataType = 1,
		TrackedProp_WrongDeviceClass = 2,
		TrackedProp_BufferTooSmall = 3,
		TrackedProp_UnknownProperty = 4,
		TrackedProp_InvalidDevice = 5,
		TrackedProp_CouldNotContactServer = 6,
		TrackedProp_ValueNotProvidedByDevice = 7,
		TrackedProp_StringExceedsMaximumLength = 8,
		TrackedProp_NotYetAvailable = 9,
		TrackedProp_PermissionDenied = 10,
		TrackedProp_InvalidOperation = 11,
	};
}
