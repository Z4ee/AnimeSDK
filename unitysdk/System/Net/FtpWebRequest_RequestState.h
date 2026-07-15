#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int FtpWebRequest_RequestState_TypeDefinitionIndex = 2837;

	enum class FtpWebRequest_RequestState : ::System::Int32
	{
		Before = 0,
		Scheduled = 1,
		Connecting = 2,
		Authenticating = 3,
		OpeningData = 4,
		TransferInProgress = 5,
		Finished = 6,
		Aborted = 7,
		Error = 8,
	};
}
