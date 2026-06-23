#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_NET_MIME_MAILBNFHELPER_CHECKFORUNICODE_OFFSET UNITYSDK_OFFSET(0x1B1CCA50)
#define SYSTEM_NET_MIME_MAILBNFHELPER_GETDATETIMESTRING_OFFSET UNITYSDK_OFFSET(0x1B1CC1F0)
#define SYSTEM_NET_MIME_MAILBNFHELPER_GETTOKENORQUOTEDSTRING_OFFSET UNITYSDK_OFFSET(0x1B1C82E0)
#define SYSTEM_NET_MIME_MAILBNFHELPER_HASCRORLF_OFFSET UNITYSDK_OFFSET(0x1B1C8230)
#define SYSTEM_NET_MIME_MAILBNFHELPER_ISFWSAT_OFFSET UNITYSDK_OFFSET(0x1B1CCB50)
#define SYSTEM_NET_MIME_MAILBNFHELPER_READPARAMETERATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1B1C91B0)
#define SYSTEM_NET_MIME_MAILBNFHELPER_READQUOTEDSTRING_1_OFFSET UNITYSDK_OFFSET(0x1B1CBA70)
#define SYSTEM_NET_MIME_MAILBNFHELPER_READQUOTEDSTRING_OFFSET UNITYSDK_OFFSET(0x1B1C9240)
#define SYSTEM_NET_MIME_MAILBNFHELPER_READTOKEN_OFFSET UNITYSDK_OFFSET(0x1B1C8A40)
#define SYSTEM_NET_MIME_MAILBNFHELPER_SKIPCFWS_OFFSET UNITYSDK_OFFSET(0x1B1C8D60)
#define SYSTEM_NET_MIME_MAILBNFHELPER_VALIDATEHEADERNAME_OFFSET UNITYSDK_OFFSET(0x1B1CB7F0)
#define SYSTEM_NET_MIME_MAILBNFHELPER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B1C94C0)

namespace System::Net::Mime
{
	inline static constexpr unsigned int MailBnfHelper_TypeDefinitionIndex = 3617;

	class MailBnfHelper : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Boolean>** StaticGet_Ftext()
		{
			return (::Il2CppArray<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MailBnfHelper_TypeDefinitionIndex)->GetStaticField(0x27C0);
		}
		static ::Il2CppArray<::System::Boolean>** StaticGet_Atext()
		{
			return (::Il2CppArray<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MailBnfHelper_TypeDefinitionIndex)->GetStaticField(0x27C8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_months()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MailBnfHelper_TypeDefinitionIndex)->GetStaticField(0x27D0);
		}
		static ::Il2CppArray<::System::Boolean>** StaticGet_Qtext()
		{
			return (::Il2CppArray<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MailBnfHelper_TypeDefinitionIndex)->GetStaticField(0x27D8);
		}
		static ::Il2CppArray<::System::Boolean>** StaticGet_Ctext()
		{
			return (::Il2CppArray<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MailBnfHelper_TypeDefinitionIndex)->GetStaticField(0x27E0);
		}
		static ::System::Collections::Generic::IList_1<::System::Char>** StaticGet_Whitespace()
		{
			return (::System::Collections::Generic::IList_1<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(MailBnfHelper_TypeDefinitionIndex)->GetStaticField(0x27E8);
		}
		static ::Il2CppArray<::System::Boolean>** StaticGet_Ttext()
		{
			return (::Il2CppArray<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MailBnfHelper_TypeDefinitionIndex)->GetStaticField(0x27F0);
		}
		static ::Il2CppArray<::System::Boolean>** StaticGet_Dtext()
		{
			return (::Il2CppArray<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MailBnfHelper_TypeDefinitionIndex)->GetStaticField(0x27F8);
		}
		static ::System::Int32* StaticGet_Ascii7bitMaxValue()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(MailBnfHelper_TypeDefinitionIndex)->GetStaticField(0x1030);
		}
		static ::System::Char* StaticGet_Space()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(MailBnfHelper_TypeDefinitionIndex)->GetStaticField(0x1034);
		}
		static ::System::Char* StaticGet_StartAngleBracket()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(MailBnfHelper_TypeDefinitionIndex)->GetStaticField(0x1036);
		}
		static ::System::Char* StaticGet_EndAngleBracket()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(MailBnfHelper_TypeDefinitionIndex)->GetStaticField(0x1038);
		}
		static ::System::Char* StaticGet_Dot()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(MailBnfHelper_TypeDefinitionIndex)->GetStaticField(0x103A);
		}
		static ::System::Char* StaticGet_EndSquareBracket()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(MailBnfHelper_TypeDefinitionIndex)->GetStaticField(0x103C);
		}
		static ::System::Char* StaticGet_At()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(MailBnfHelper_TypeDefinitionIndex)->GetStaticField(0x103E);
		}
		static ::System::Char* StaticGet_EndComment()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(MailBnfHelper_TypeDefinitionIndex)->GetStaticField(0x1040);
		}
		static ::System::Char* StaticGet_StartSquareBracket()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(MailBnfHelper_TypeDefinitionIndex)->GetStaticField(0x1042);
		}
		static ::System::Char* StaticGet_StartComment()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(MailBnfHelper_TypeDefinitionIndex)->GetStaticField(0x1044);
		}
		static ::System::Char* StaticGet_LF()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(MailBnfHelper_TypeDefinitionIndex)->GetStaticField(0x1046);
		}
		static ::System::Char* StaticGet_Comma()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(MailBnfHelper_TypeDefinitionIndex)->GetStaticField(0x1048);
		}
		static ::System::Char* StaticGet_Tab()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(MailBnfHelper_TypeDefinitionIndex)->GetStaticField(0x104A);
		}
		static ::System::Char* StaticGet_Quote()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(MailBnfHelper_TypeDefinitionIndex)->GetStaticField(0x104C);
		}
		static ::System::Char* StaticGet_Backslash()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(MailBnfHelper_TypeDefinitionIndex)->GetStaticField(0x104E);
		}
		static ::System::Char* StaticGet_CR()
		{
			return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(MailBnfHelper_TypeDefinitionIndex)->GetStaticField(0x1050);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MAILBNFHELPER__CCTOR_OFFSET))();
		}

		static ::System::Boolean SkipCFWS(::System::String* data, ::System::Int32& offset)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MAILBNFHELPER_SKIPCFWS_OFFSET))(data, offset);
		}

		static ::System::Void ValidateHeaderName(::System::String* data)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MAILBNFHELPER_VALIDATEHEADERNAME_OFFSET))(data);
		}

		static ::System::String* ReadQuotedString(::System::String* data, ::System::Int32& offset, ::System::Text::StringBuilder* builder)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32&, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MAILBNFHELPER_READQUOTEDSTRING_OFFSET))(data, offset, builder);
		}

		static ::System::String* ReadQuotedString_1(::System::String* data, ::System::Int32& offset, ::System::Text::StringBuilder* builder, ::System::Boolean doesntRequireQuotes, ::System::Boolean permitUnicodeInDisplayName)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32&, ::System::Text::StringBuilder*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MAILBNFHELPER_READQUOTEDSTRING_1_OFFSET))(data, offset, builder, doesntRequireQuotes, permitUnicodeInDisplayName);
		}

		static ::System::String* ReadParameterAttribute(::System::String* data, ::System::Int32& offset, ::System::Text::StringBuilder* builder)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32&, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MAILBNFHELPER_READPARAMETERATTRIBUTE_OFFSET))(data, offset, builder);
		}

		static ::System::String* ReadToken(::System::String* data, ::System::Int32& offset, ::System::Text::StringBuilder* builder)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32&, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MAILBNFHELPER_READTOKEN_OFFSET))(data, offset, builder);
		}

		static ::System::String* GetDateTimeString(::System::DateTime value, ::System::Text::StringBuilder* builder)
		{
			return ((::System::String*(*)(::System::DateTime, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MAILBNFHELPER_GETDATETIMESTRING_OFFSET))(value, builder);
		}

		static ::System::Void GetTokenOrQuotedString(::System::String* data, ::System::Text::StringBuilder* builder, ::System::Boolean allowUnicode)
		{
			return ((::System::Void(*)(::System::String*, ::System::Text::StringBuilder*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MAILBNFHELPER_GETTOKENORQUOTEDSTRING_OFFSET))(data, builder, allowUnicode);
		}

		static ::System::Boolean CheckForUnicode(::System::Char ch, ::System::Boolean allowUnicode)
		{
			return ((::System::Boolean(*)(::System::Char, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MAILBNFHELPER_CHECKFORUNICODE_OFFSET))(ch, allowUnicode);
		}

		static ::System::Boolean HasCROrLF(::System::String* data)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MAILBNFHELPER_HASCRORLF_OFFSET))(data);
		}

		static ::System::Boolean IsFWSAt(::System::String* data, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_MAILBNFHELPER_ISFWSAT_OFFSET))(data, index);
		}
	};
}
