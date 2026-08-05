#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class FormatException; }
namespace System { class String; }
namespace System::Text { class Encoding; }

#define SYSTEM_NET_MAIL_MAILADDRESS_CREATEFORMATEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1D243710)
#define SYSTEM_NET_MAIL_MAILADDRESS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D243820)
#define SYSTEM_NET_MAIL_MAILADDRESS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D2439A0)
#define SYSTEM_NET_MAIL_MAILADDRESS_GET_ADDRESS_OFFSET UNITYSDK_OFFSET(0x1D2437D0)
#define SYSTEM_NET_MAIL_MAILADDRESS_GET_DISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1D2437E0)
#define SYSTEM_NET_MAIL_MAILADDRESS_GET_HOST_OFFSET UNITYSDK_OFFSET(0x1D243800)
#define SYSTEM_NET_MAIL_MAILADDRESS_GET_USER_OFFSET UNITYSDK_OFFSET(0x1D243810)
#define SYSTEM_NET_MAIL_MAILADDRESS_PARSEADDRESS_OFFSET UNITYSDK_OFFSET(0x1D2433C0)
#define SYSTEM_NET_MAIL_MAILADDRESS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D243900)
#define SYSTEM_NET_MAIL_MAILADDRESS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D243220)
#define SYSTEM_NET_MAIL_MAILADDRESS__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D243300)
#define SYSTEM_NET_MAIL_MAILADDRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D243150)

namespace System::Net::Mail
{
	inline static constexpr unsigned int MailAddress_TypeDefinitionIndex = 3587;

	class MailAddress : public ::System::Object
	{
	public:
		::System::String* to_string; // 0x10
		::System::String* address; // 0x18
		::System::String* displayName; // 0x20
		::System::String* user; // 0x28
		::System::String* host; // 0x30

		::System::Void _ctor(::System::String* address)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESS__CTOR_OFFSET))(this, address);
		}

		::System::Void _ctor_1(::System::String* address, ::System::String* displayName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESS__CTOR_1_OFFSET))(this, address, displayName);
		}

		::System::Void _ctor_2(::System::String* address, ::System::String* displayName, ::System::Text::Encoding* displayNameEncoding)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESS__CTOR_2_OFFSET))(this, address, displayName, displayNameEncoding);
		}

		::System::Void ParseAddress(::System::String* address)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESS_PARSEADDRESS_OFFSET))(this, address);
		}

		::System::String* get_Address()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESS_GET_ADDRESS_OFFSET))(this);
		}

		::System::String* get_DisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESS_GET_DISPLAYNAME_OFFSET))(this);
		}

		::System::String* get_Host()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESS_GET_HOST_OFFSET))(this);
		}

		::System::String* get_User()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESS_GET_USER_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILADDRESS_EQUALS_OFFSET))(this, value);
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
