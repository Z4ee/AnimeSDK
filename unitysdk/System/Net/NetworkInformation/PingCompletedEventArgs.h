#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ComponentModel/AsyncCompletedEventArgs.h"

namespace System { class Exception; }
namespace System { class Object; }
namespace System::Net::NetworkInformation { class PingReply; }

#define SYSTEM_NET_NETWORKINFORMATION_PINGCOMPLETEDEVENTARGS_GET_REPLY_OFFSET UNITYSDK_OFFSET(0x1A257290)
#define SYSTEM_NET_NETWORKINFORMATION_PINGCOMPLETEDEVENTARGS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A2572A0)
#define SYSTEM_NET_NETWORKINFORMATION_PINGCOMPLETEDEVENTARGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A257210)

namespace System::Net::NetworkInformation
{
	inline static constexpr unsigned int PingCompletedEventArgs_TypeDefinitionIndex = 3825;

	class PingCompletedEventArgs : public ::System::ComponentModel::AsyncCompletedEventArgs
	{
	public:
		::System::Net::NetworkInformation::PingReply* reply; // 0x28

		::System::Void _ctor(::System::Exception* ex, ::System::Boolean cancelled, ::System::Object* userState, ::System::Net::NetworkInformation::PingReply* reply)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*, ::System::Boolean, ::System::Object*, ::System::Net::NetworkInformation::PingReply*))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PINGCOMPLETEDEVENTARGS__CTOR_OFFSET))(this, ex, cancelled, userState, reply);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PINGCOMPLETEDEVENTARGS__CTOR_1_OFFSET))(this);
		}

		::System::Net::NetworkInformation::PingReply* get_Reply()
		{
			return ((::System::Net::NetworkInformation::PingReply*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETWORKINFORMATION_PINGCOMPLETEDEVENTARGS_GET_REPLY_OFFSET))(this);
		}
	};
}
