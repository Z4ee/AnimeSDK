#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::ComponentModel { class AsyncCompletedEventArgs; }
namespace System::Net::Mail { class SendCompletedEventHandler; }
namespace System::Net::Mail { class SmtpClient; }
namespace System::Threading::Tasks { template <typename T> class TaskCompletionSource_1; }

#define SYSTEM_NET_MAIL_SMTPCLIENT___C__DISPLAYCLASS85_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1EC390)
#define SYSTEM_NET_MAIL_SMTPCLIENT___C__DISPLAYCLASS85_0__SENDMAILASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1B1EC3A0)

namespace System::Net::Mail
{
	inline static constexpr unsigned int SmtpClient___c__DisplayClass85_0_TypeDefinitionIndex = 3599;

	class SmtpClient___c__DisplayClass85_0 : public ::System::Object
	{
	public:
		::System::Threading::Tasks::TaskCompletionSource_1<::System::Object*>* tcs; // 0x10
		::System::Net::Mail::SmtpClient* __4__this; // 0x18
		::System::Net::Mail::SendCompletedEventHandler* handler; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT___C__DISPLAYCLASS85_0__CTOR_OFFSET))(this);
		}

		::System::Void _SendMailAsync_b__0(::System::Object* s, ::System::ComponentModel::AsyncCompletedEventArgs* e)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::AsyncCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT___C__DISPLAYCLASS85_0__SENDMAILASYNC_B__0_OFFSET))(this, s, e);
		}
	};
}
