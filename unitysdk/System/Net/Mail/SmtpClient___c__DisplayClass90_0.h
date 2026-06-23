#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::ComponentModel { class DoWorkEventArgs; }
namespace System::ComponentModel { class RunWorkerCompletedEventArgs; }
namespace System::Net::Mail { class MailMessage; }
namespace System::Net::Mail { class SmtpClient; }

#define SYSTEM_NET_MAIL_SMTPCLIENT___C__DISPLAYCLASS90_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C07D4A0)
#define SYSTEM_NET_MAIL_SMTPCLIENT___C__DISPLAYCLASS90_0__SENDASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1C07D4B0)
#define SYSTEM_NET_MAIL_SMTPCLIENT___C__DISPLAYCLASS90_0__SENDASYNC_B__1_OFFSET UNITYSDK_OFFSET(0x1C07D580)

namespace System::Net::Mail
{
	inline static constexpr unsigned int SmtpClient___c__DisplayClass90_0_TypeDefinitionIndex = 3599;

	class SmtpClient___c__DisplayClass90_0 : public ::System::Object
	{
	public:
		::System::Net::Mail::SmtpClient* __4__this; // 0x10
		::System::Net::Mail::MailMessage* message; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT___C__DISPLAYCLASS90_0__CTOR_OFFSET))(this);
		}

		::System::Void _SendAsync_b__0(::System::Object* o, ::System::ComponentModel::DoWorkEventArgs* ea)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::DoWorkEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT___C__DISPLAYCLASS90_0__SENDASYNC_B__0_OFFSET))(this, o, ea);
		}

		::System::Void _SendAsync_b__1(::System::Object* o, ::System::ComponentModel::RunWorkerCompletedEventArgs* ea)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::RunWorkerCompletedEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPCLIENT___C__DISPLAYCLASS90_0__SENDASYNC_B__1_OFFSET))(this, o, ea);
		}
	};
}
