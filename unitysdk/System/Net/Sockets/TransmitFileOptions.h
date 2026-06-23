#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Sockets
{
	inline static constexpr unsigned int TransmitFileOptions_TypeDefinitionIndex = 3674;

	enum class TransmitFileOptions : ::System::Int32
	{
		UseDefaultWorkerThread = 0,
		Disconnect = 1,
		ReuseSocket = 2,
		WriteBehind = 4,
		UseSystemThread = 16,
		UseKernelApc = 32,
	};
}
