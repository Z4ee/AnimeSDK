#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/UriComponents.h"
#include "unitysdk/System/UriFormat.h"
#include "unitysdk/System/UriParser_UriQuirksVersion.h"
#include "unitysdk/System/UriSyntaxFlags.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System { class UriFormatException; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define SYSTEM_URIPARSER_FINDORFETCHASUNKNOWNV1SYNTAX_OFFSET UNITYSDK_OFFSET(0x18772730)
#define SYSTEM_URIPARSER_GETCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x18778AD0)
#define SYSTEM_URIPARSER_GETSYNTAX_OFFSET UNITYSDK_OFFSET(0x18777980)
#define SYSTEM_URIPARSER_GET_DEFAULTPORT_OFFSET UNITYSDK_OFFSET(0x187787E0)
#define SYSTEM_URIPARSER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x18779A70)
#define SYSTEM_URIPARSER_GET_ISSIMPLE_OFFSET UNITYSDK_OFFSET(0x18766050)
#define SYSTEM_URIPARSER_GET_SCHEMENAME_OFFSET UNITYSDK_OFFSET(0x187787D0)
#define SYSTEM_URIPARSER_GET_SHOULDUSELEGACYV2QUIRKS_OFFSET UNITYSDK_OFFSET(0x187722E0)
#define SYSTEM_URIPARSER_INFACT_OFFSET UNITYSDK_OFFSET(0x18763C50)
#define SYSTEM_URIPARSER_INITIALIZEANDVALIDATE_OFFSET UNITYSDK_OFFSET(0x18778800)
#define SYSTEM_URIPARSER_INTERNALGETCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x1876FAE0)
#define SYSTEM_URIPARSER_INTERNALISWELLFORMEDORIGINALSTRING_OFFSET UNITYSDK_OFFSET(0x18776160)
#define SYSTEM_URIPARSER_INTERNALONNEWURI_OFFSET UNITYSDK_OFFSET(0x18775540)
#define SYSTEM_URIPARSER_INTERNALRESOLVE_OFFSET UNITYSDK_OFFSET(0x18766A30)
#define SYSTEM_URIPARSER_INTERNALVALIDATE_OFFSET UNITYSDK_OFFSET(0x18775580)
#define SYSTEM_URIPARSER_ISALLSET_OFFSET UNITYSDK_OFFSET(0x1876DB00)
#define SYSTEM_URIPARSER_ISFULLMATCH_OFFSET UNITYSDK_OFFSET(0x18779A80)
#define SYSTEM_URIPARSER_ISWELLFORMEDORIGINALSTRING_OFFSET UNITYSDK_OFFSET(0x18778CA0)
#define SYSTEM_URIPARSER_NOTANY_OFFSET UNITYSDK_OFFSET(0x1876DB40)
#define SYSTEM_URIPARSER_ONNEWURI_OFFSET UNITYSDK_OFFSET(0x187787F0)
#define SYSTEM_URIPARSER_RESOLVE_OFFSET UNITYSDK_OFFSET(0x18778860)
#define SYSTEM_URIPARSER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18778CC0)
#define SYSTEM_URIPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x18779AC0)

namespace System
{
	inline static constexpr unsigned int UriParser_TypeDefinitionIndex = 2465;

	class UriParser : public ::System::Object
	{
	public:
		static ::System::UriParser** StaticGet_FileUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0xD460);
		}
		static ::System::UriParser** StaticGet_UuidUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0xD468);
		}
		static ::System::UriParser** StaticGet_LdapUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0xD470);
		}
		static ::System::UriParser** StaticGet_NetTcpUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0xD478);
		}
		static ::System::UriParser** StaticGet_WssUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0xD480);
		}
		static ::System::UriParser** StaticGet_NewsUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0xD488);
		}
		static ::System::UriParser** StaticGet_WsUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0xD490);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UriParser*>** StaticGet_m_TempTable()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UriParser*>**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0xD498);
		}
		static ::System::UriParser** StaticGet_TelnetUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0xD4A0);
		}
		static ::System::UriParser** StaticGet_FtpUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0xD4A8);
		}
		static ::System::UriParser** StaticGet_NetPipeUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0xD4B0);
		}
		static ::System::UriParser** StaticGet_GopherUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0xD4B8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UriParser*>** StaticGet_m_Table()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UriParser*>**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0xD4C0);
		}
		static ::System::UriParser** StaticGet_HttpUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0xD4C8);
		}
		static ::System::UriParser** StaticGet_HttpsUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0xD4D0);
		}
		static ::System::UriParser** StaticGet_VsMacrosUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0xD4D8);
		}
		static ::System::UriParser** StaticGet_NntpUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0xD4E0);
		}
		static ::System::UriParser** StaticGet_MailToUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0xD4E8);
		}
		static ::System::UriSyntaxFlags* StaticGet_HttpSyntaxFlags()
		{
			return (::System::UriSyntaxFlags*)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x4B10);
		}
		static ::System::UriParser_UriQuirksVersion* StaticGet_s_QuirksVersion()
		{
			return (::System::UriParser_UriQuirksVersion*)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x4B14);
		}
		static ::System::UriSyntaxFlags* StaticGet_FileSyntaxFlags()
		{
			return (::System::UriSyntaxFlags*)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x4B18);
		}
		::System::String* m_Scheme; // 0x10
		::System::UriSyntaxFlags m_UpdatableFlags; // 0x18
		::System::UriSyntaxFlags m_Flags; // 0x1C
		::System::Boolean m_UpdatableFlagsUsed; // 0x20
		::System::Int32 m_Port; // 0x24

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::UriSyntaxFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::UriSyntaxFlags))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER__CTOR_OFFSET))(this, flags);
		}

		::System::String* get_SchemeName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_GET_SCHEMENAME_OFFSET))(this);
		}

		::System::Int32 get_DefaultPort()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_GET_DEFAULTPORT_OFFSET))(this);
		}

		::System::UriParser* OnNewUri()
		{
			return ((::System::UriParser*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_ONNEWURI_OFFSET))(this);
		}

		::System::Void InitializeAndValidate(::System::Uri* uri, ::System::UriFormatException*& parsingError)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::UriFormatException*&))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_INITIALIZEANDVALIDATE_OFFSET))(this, uri, parsingError);
		}

		::System::String* Resolve(::System::Uri* baseUri, ::System::Uri* relativeUri, ::System::UriFormatException*& parsingError)
		{
			return ((::System::String*(*)(::PVOID, ::System::Uri*, ::System::Uri*, ::System::UriFormatException*&))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_RESOLVE_OFFSET))(this, baseUri, relativeUri, parsingError);
		}

		::System::String* GetComponents(::System::Uri* uri, ::System::UriComponents components, ::System::UriFormat format)
		{
			return ((::System::String*(*)(::PVOID, ::System::Uri*, ::System::UriComponents, ::System::UriFormat))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_GETCOMPONENTS_OFFSET))(this, uri, components, format);
		}

		::System::Boolean IsWellFormedOriginalString(::System::Uri* uri)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_ISWELLFORMEDORIGINALSTRING_OFFSET))(this, uri);
		}

		static ::System::Boolean get_ShouldUseLegacyV2Quirks()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_GET_SHOULDUSELEGACYV2QUIRKS_OFFSET))();
		}

		::System::UriSyntaxFlags get_Flags()
		{
			return ((::System::UriSyntaxFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_GET_FLAGS_OFFSET))(this);
		}

		::System::Boolean NotAny(::System::UriSyntaxFlags flags)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UriSyntaxFlags))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_NOTANY_OFFSET))(this, flags);
		}

		::System::Boolean InFact(::System::UriSyntaxFlags flags)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UriSyntaxFlags))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_INFACT_OFFSET))(this, flags);
		}

		::System::Boolean IsAllSet(::System::UriSyntaxFlags flags)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UriSyntaxFlags))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_ISALLSET_OFFSET))(this, flags);
		}

		::System::Boolean IsFullMatch(::System::UriSyntaxFlags flags, ::System::UriSyntaxFlags expected)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UriSyntaxFlags, ::System::UriSyntaxFlags))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_ISFULLMATCH_OFFSET))(this, flags, expected);
		}

		static ::System::UriParser* FindOrFetchAsUnknownV1Syntax(::System::String* lwrCaseScheme)
		{
			return ((::System::UriParser*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_FINDORFETCHASUNKNOWNV1SYNTAX_OFFSET))(lwrCaseScheme);
		}

		static ::System::UriParser* GetSyntax(::System::String* lwrCaseScheme)
		{
			return ((::System::UriParser*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_GETSYNTAX_OFFSET))(lwrCaseScheme);
		}

		::System::Boolean get_IsSimple()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_GET_ISSIMPLE_OFFSET))(this);
		}

		::System::UriParser* InternalOnNewUri()
		{
			return ((::System::UriParser*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_INTERNALONNEWURI_OFFSET))(this);
		}

		::System::Void InternalValidate(::System::Uri* thisUri, ::System::UriFormatException*& parsingError)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::UriFormatException*&))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_INTERNALVALIDATE_OFFSET))(this, thisUri, parsingError);
		}

		::System::String* InternalResolve(::System::Uri* thisBaseUri, ::System::Uri* uriLink, ::System::UriFormatException*& parsingError)
		{
			return ((::System::String*(*)(::PVOID, ::System::Uri*, ::System::Uri*, ::System::UriFormatException*&))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_INTERNALRESOLVE_OFFSET))(this, thisBaseUri, uriLink, parsingError);
		}

		::System::String* InternalGetComponents(::System::Uri* thisUri, ::System::UriComponents uriComponents, ::System::UriFormat uriFormat)
		{
			return ((::System::String*(*)(::PVOID, ::System::Uri*, ::System::UriComponents, ::System::UriFormat))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_INTERNALGETCOMPONENTS_OFFSET))(this, thisUri, uriComponents, uriFormat);
		}

		::System::Boolean InternalIsWellFormedOriginalString(::System::Uri* thisUri)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_INTERNALISWELLFORMEDORIGINALSTRING_OFFSET))(this, thisUri);
		}
	};
}
