#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/ReadState.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Version; }
namespace System::IO { class Stream; }
namespace System::Net { class HttpWebRequest; }
namespace System::Net { class WebHeaderCollection; }

#define SYSTEM_NET_WEBCONNECTIONDATA_GET_READSTATE_OFFSET UNITYSDK_OFFSET(0x1F097640)
#define SYSTEM_NET_WEBCONNECTIONDATA_GET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1F097620)
#define SYSTEM_NET_WEBCONNECTIONDATA_SET_READSTATE_OFFSET UNITYSDK_OFFSET(0x1F093210)
#define SYSTEM_NET_WEBCONNECTIONDATA_SET_REQUEST_OFFSET UNITYSDK_OFFSET(0x1F097630)
#define SYSTEM_NET_WEBCONNECTIONDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F0940C0)
#define SYSTEM_NET_WEBCONNECTIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1F08E8D0)

namespace System::Net
{
	inline static constexpr unsigned int WebConnectionData_TypeDefinitionIndex = 2885;

	class WebConnectionData : public ::System::Object
	{
	public:
		::System::Version* Version; // 0x10
		::System::Version* ProxyVersion; // 0x18
		::Il2CppArray<::System::String*>* Challenge; // 0x20
		::System::String* StatusDescription; // 0x28
		::System::Net::WebHeaderCollection* Headers; // 0x30
		::System::IO::Stream* stream; // 0x38
		::System::Net::HttpWebRequest* _request; // 0x40
		::System::Net::ReadState _readState; // 0x48
		::System::Int32 StatusCode; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONDATA__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Net::HttpWebRequest* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpWebRequest*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONDATA__CTOR_1_OFFSET))(this, a1);
		}

		::System::Net::HttpWebRequest* get_request()
		{
			return ((::System::Net::HttpWebRequest*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONDATA_GET_REQUEST_OFFSET))(this);
		}

		::System::Void set_request(::System::Net::HttpWebRequest* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::HttpWebRequest*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONDATA_SET_REQUEST_OFFSET))(this, a1);
		}

		::System::Net::ReadState get_ReadState()
		{
			return ((::System::Net::ReadState(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONDATA_GET_READSTATE_OFFSET))(this);
		}

		::System::Void set_ReadState(::System::Net::ReadState a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::ReadState))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONDATA_SET_READSTATE_OFFSET))(this, a1);
		}
	};
}
