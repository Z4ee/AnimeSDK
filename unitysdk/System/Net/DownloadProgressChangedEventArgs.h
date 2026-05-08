#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/ProgressChangedEventArgs.h"

namespace System { class Object; }

#define SYSTEM_NET_DOWNLOADPROGRESSCHANGEDEVENTARGS_GET_BYTESRECEIVED_OFFSET UNITYSDK_OFFSET(0x19A5F290)
#define SYSTEM_NET_DOWNLOADPROGRESSCHANGEDEVENTARGS_GET_TOTALBYTESTORECEIVE_OFFSET UNITYSDK_OFFSET(0x19A5F2A0)
#define SYSTEM_NET_DOWNLOADPROGRESSCHANGEDEVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19A5F2B0)
#define SYSTEM_NET_DOWNLOADPROGRESSCHANGEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x19A5F210)

namespace System::Net
{
	inline static constexpr unsigned int DownloadProgressChangedEventArgs_TypeDefinitionIndex = 3475;

	class DownloadProgressChangedEventArgs : public ::System::ComponentModel::ProgressChangedEventArgs
	{
	public:
		::System::Int64 m_TotalBytesToReceive; // 0x20
		::System::Int64 m_BytesReceived; // 0x28

		::System::Void _ctor(::System::Int32 progressPercentage, ::System::Object* userToken, ::System::Int64 bytesReceived, ::System::Int64 totalBytesToReceive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_NET_DOWNLOADPROGRESSCHANGEDEVENTARGS__CTOR_OFFSET))(this, progressPercentage, userToken, bytesReceived, totalBytesToReceive);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DOWNLOADPROGRESSCHANGEDEVENTARGS__CTOR_1_OFFSET))(this);
		}

		::System::Int64 get_BytesReceived()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DOWNLOADPROGRESSCHANGEDEVENTARGS_GET_BYTESRECEIVED_OFFSET))(this);
		}

		::System::Int64 get_TotalBytesToReceive()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DOWNLOADPROGRESSCHANGEDEVENTARGS_GET_TOTALBYTESTORECEIVE_OFFSET))(this);
		}
	};
}
