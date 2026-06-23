#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Mail/MailHeaderID.h"
#include "unitysdk/System/Net/Mail/MailHeaderInfo_HeaderInfo.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define SYSTEM_NET_MAIL_MAILHEADERINFO_ALLOWSUNICODE_OFFSET UNITYSDK_OFFSET(0x1C6D7030)
#define SYSTEM_NET_MAIL_MAILHEADERINFO_GETID_OFFSET UNITYSDK_OFFSET(0x1C6D68C0)
#define SYSTEM_NET_MAIL_MAILHEADERINFO_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1C6D6820)
#define SYSTEM_NET_MAIL_MAILHEADERINFO_ISMATCH_OFFSET UNITYSDK_OFFSET(0x1C6D6F20)
#define SYSTEM_NET_MAIL_MAILHEADERINFO_ISSINGLETON_OFFSET UNITYSDK_OFFSET(0x1C6D6C20)
#define SYSTEM_NET_MAIL_MAILHEADERINFO_ISUSERSETTABLE_OFFSET UNITYSDK_OFFSET(0x1C6D6AA0)
#define SYSTEM_NET_MAIL_MAILHEADERINFO_ISWELLKNOWN_OFFSET UNITYSDK_OFFSET(0x1C6D69C0)
#define SYSTEM_NET_MAIL_MAILHEADERINFO_NORMALIZECASE_OFFSET UNITYSDK_OFFSET(0x1C6D6DA0)
#define SYSTEM_NET_MAIL_MAILHEADERINFO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6D5B70)

namespace System::Net::Mail
{
	inline static constexpr unsigned int MailHeaderInfo_TypeDefinitionIndex = 3576;

	class MailHeaderInfo : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Net::Mail::MailHeaderInfo_HeaderInfo>** StaticGet_m_HeaderInfo()
		{
			return (::Il2CppArray<::System::Net::Mail::MailHeaderInfo_HeaderInfo>**)Il2CppClass::FromTypeDefinitionIndex(MailHeaderInfo_TypeDefinitionIndex)->GetStaticField(0x3240);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>** StaticGet_m_HeaderDictionary()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MailHeaderInfo_TypeDefinitionIndex)->GetStaticField(0x3248);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILHEADERINFO__CCTOR_OFFSET))();
		}

		static ::System::String* GetString(::System::Net::Mail::MailHeaderID id)
		{
			return ((::System::String*(*)(::System::Net::Mail::MailHeaderID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILHEADERINFO_GETSTRING_OFFSET))(id);
		}

		static ::System::Net::Mail::MailHeaderID GetID(::System::String* name)
		{
			return ((::System::Net::Mail::MailHeaderID(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILHEADERINFO_GETID_OFFSET))(name);
		}

		static ::System::Boolean IsWellKnown(::System::String* name)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILHEADERINFO_ISWELLKNOWN_OFFSET))(name);
		}

		static ::System::Boolean IsUserSettable(::System::String* name)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILHEADERINFO_ISUSERSETTABLE_OFFSET))(name);
		}

		static ::System::Boolean IsSingleton(::System::String* name)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILHEADERINFO_ISSINGLETON_OFFSET))(name);
		}

		static ::System::String* NormalizeCase(::System::String* name)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILHEADERINFO_NORMALIZECASE_OFFSET))(name);
		}

		static ::System::Boolean IsMatch(::System::String* name, ::System::Net::Mail::MailHeaderID header)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Net::Mail::MailHeaderID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILHEADERINFO_ISMATCH_OFFSET))(name, header);
		}

		static ::System::Boolean AllowsUnicode(::System::String* name)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_MAILHEADERINFO_ALLOWSUNICODE_OFFSET))(name);
		}
	};
}
