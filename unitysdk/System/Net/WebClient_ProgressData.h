#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_WEBCLIENT_PROGRESSDATA_RESET_OFFSET UNITYSDK_OFFSET(0x1AAA5930)
#define SYSTEM_NET_WEBCLIENT_PROGRESSDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAA5950)

namespace System::Net
{
	inline static constexpr unsigned int WebClient_ProgressData_TypeDefinitionIndex = 3443;

	class WebClient_ProgressData : public ::System::Object
	{
	public:
		::System::Int64 TotalBytesToSend; // 0x10
		::System::Int64 BytesReceived; // 0x18
		::System::Int64 BytesSent; // 0x20
		::System::Boolean HasUploadPhase; // 0x28
		::System::Int64 TotalBytesToReceive; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_PROGRESSDATA__CTOR_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCLIENT_PROGRESSDATA_RESET_OFFSET))(this);
		}
	};
}
