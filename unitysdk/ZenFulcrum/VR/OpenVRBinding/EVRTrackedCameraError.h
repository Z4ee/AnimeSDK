#pragma once
#include "unitysdk/unitysdk.h"

namespace ZenFulcrum::VR::OpenVRBinding
{
	inline static constexpr unsigned int EVRTrackedCameraError_TypeDefinitionIndex = 37084;

	enum class EVRTrackedCameraError : ::System::Int32
	{
		None = 0,
		OperationFailed = 100,
		InvalidHandle = 101,
		InvalidFrameHeaderVersion = 102,
		OutOfHandles = 103,
		IPCFailure = 104,
		NotSupportedForThisDevice = 105,
		SharedMemoryFailure = 106,
		FrameBufferingFailure = 107,
		StreamSetupFailure = 108,
		InvalidGLTextureId = 109,
		InvalidSharedTextureHandle = 110,
		FailedToGetGLTextureId = 111,
		SharedTextureFailure = 112,
		NoFrameAvailable = 113,
		InvalidArgument = 114,
		InvalidFrameBufferSize = 115,
	};
}
