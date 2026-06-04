#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class FormatException; }
namespace System { class String; }
namespace System::Text { class Encoding; }

#define SYSTEM_NET_MAIL_MAILADDRESS_CREATEFORMATEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1AF97D70)
#define SYSTEM_NET_MAIL_MAILADDRESS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AF97E40)
#define SYSTEM_NET_MAIL_MAILADDRESS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AF97FC0)
#define SYSTEM_NET_MAIL_MAILADDRESS_GET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x1AF97E10)
#define SYSTEM_NET_MAIL_MAILADDRESS_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1AF97E20)
#define SYSTEM_NET_MAIL_MAILADDRESS_PARSEADDRESS_OFFSET UNITYSDK_OFFSET(0x1AF97A20)
#define SYSTEM_NET_MAIL_MAILADDRESS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AF97F20)
#define SYSTEM_NET_MAIL_MAILADDRESS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AF978B0)
#define SYSTEM_NET_MAIL_MAILADDRESS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AF97960)
#define SYSTEM_NET_MAIL_MAILADDRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF97800)

namespace System::Net::Mail
{
	inline static constexpr unsigned int MailAddress_TypeDefinitionIndex = 2881;

	class MailAddress : public ::System::Object
	{
	public:
		::System::String* user; // 0x10
		::System::String* to_string; // 0x18
		::System::String* host; // 0x20
		::System::String* address; // 0x28
		::System::String* displayName; // 0x30

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESS__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESS__CTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_2(::System::String* a1, ::System::String* a2, ::System::Text::Encoding* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESS__CTOR_2_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ParseAddress(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESS_PARSEADDRESS_OFFSET))(this, a1);
		}

		::System::String* get_Address()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESS_GET_ADDRESS_OFFSET))(this);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESS_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESS_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESS_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESS_TOSTRING_OFFSET))(this);
		}

		static ::System::FormatException* CreateFormatException()
		{
			return ((::System::FormatException*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESS_CREATEFORMATEXCEPTION_OFFSET))();
		}
	};
}
