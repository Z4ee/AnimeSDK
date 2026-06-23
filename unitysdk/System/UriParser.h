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

#define SYSTEM_URIPARSER_CHECKSETISSIMPLEFLAG_OFFSET UNITYSDK_OFFSET(0x1C672AD0)
#define SYSTEM_URIPARSER_FETCHSYNTAX_OFFSET UNITYSDK_OFFSET(0x1C670FC0)
#define SYSTEM_URIPARSER_FINDORFETCHASUNKNOWNV1SYNTAX_OFFSET UNITYSDK_OFFSET(0x1C672C50)
#define SYSTEM_URIPARSER_GETCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x1C670C00)
#define SYSTEM_URIPARSER_GETSYNTAX_OFFSET UNITYSDK_OFFSET(0x1C671640)
#define SYSTEM_URIPARSER_GET_DEFAULTPORT_OFFSET UNITYSDK_OFFSET(0x1C670940)
#define SYSTEM_URIPARSER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1C672A10)
#define SYSTEM_URIPARSER_GET_ISSIMPLE_OFFSET UNITYSDK_OFFSET(0x1C6730E0)
#define SYSTEM_URIPARSER_GET_SCHEMENAME_OFFSET UNITYSDK_OFFSET(0x1C670930)
#define SYSTEM_URIPARSER_GET_SHOULDUSELEGACYV2QUIRKS_OFFSET UNITYSDK_OFFSET(0x1C671840)
#define SYSTEM_URIPARSER_INFACT_OFFSET UNITYSDK_OFFSET(0x1C672A60)
#define SYSTEM_URIPARSER_INITIALIZEANDVALIDATE_OFFSET UNITYSDK_OFFSET(0x1C6709B0)
#define SYSTEM_URIPARSER_INTERNALGETCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x1C673180)
#define SYSTEM_URIPARSER_INTERNALISBASEOF_OFFSET UNITYSDK_OFFSET(0x1C673170)
#define SYSTEM_URIPARSER_INTERNALISWELLFORMEDORIGINALSTRING_OFFSET UNITYSDK_OFFSET(0x1C6731A0)
#define SYSTEM_URIPARSER_INTERNALONNEWURI_OFFSET UNITYSDK_OFFSET(0x1C673100)
#define SYSTEM_URIPARSER_INTERNALRESOLVE_OFFSET UNITYSDK_OFFSET(0x1C673150)
#define SYSTEM_URIPARSER_INTERNALVALIDATE_OFFSET UNITYSDK_OFFSET(0x1C673140)
#define SYSTEM_URIPARSER_ISALLSET_OFFSET UNITYSDK_OFFSET(0x1C672A90)
#define SYSTEM_URIPARSER_ISBASEOF_OFFSET UNITYSDK_OFFSET(0x1C670BE0)
#define SYSTEM_URIPARSER_ISFULLMATCH_OFFSET UNITYSDK_OFFSET(0x1C672A20)
#define SYSTEM_URIPARSER_ISKNOWNSCHEME_OFFSET UNITYSDK_OFFSET(0x1C671510)
#define SYSTEM_URIPARSER_ISWELLFORMEDORIGINALSTRING_OFFSET UNITYSDK_OFFSET(0x1C670DD0)
#define SYSTEM_URIPARSER_NOTANY_OFFSET UNITYSDK_OFFSET(0x1C671810)
#define SYSTEM_URIPARSER_ONNEWURI_OFFSET UNITYSDK_OFFSET(0x1C670990)
#define SYSTEM_URIPARSER_ONREGISTER_OFFSET UNITYSDK_OFFSET(0x1C6709A0)
#define SYSTEM_URIPARSER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1C670DF0)
#define SYSTEM_URIPARSER_RESOLVE_OFFSET UNITYSDK_OFFSET(0x1C670A30)
#define SYSTEM_URIPARSER_SETUPDATABLEFLAGS_OFFSET UNITYSDK_OFFSET(0x1C6730F0)
#define SYSTEM_URIPARSER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C6718A0)
#define SYSTEM_URIPARSER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C670970)
#define SYSTEM_URIPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C670950)

namespace System
{
	inline static constexpr unsigned int UriParser_TypeDefinitionIndex = 2687;

	class UriParser : public ::System::Object
	{
	public:
		static ::System::UriParser** StaticGet_UuidUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x2710);
		}
		static ::System::UriParser** StaticGet_TelnetUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x2718);
		}
		static ::System::UriParser** StaticGet_HttpsUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x2720);
		}
		static ::System::UriParser** StaticGet_NntpUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x2728);
		}
		static ::System::UriParser** StaticGet_WssUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x2730);
		}
		static ::System::UriParser** StaticGet_FtpUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x2738);
		}
		static ::System::UriParser** StaticGet_FileUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x2740);
		}
		static ::System::UriParser** StaticGet_HttpUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x2748);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UriParser*>** StaticGet_m_TempTable()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UriParser*>**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x2750);
		}
		static ::System::UriParser** StaticGet_NewsUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x2758);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UriParser*>** StaticGet_m_Table()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UriParser*>**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x2760);
		}
		static ::System::UriParser** StaticGet_NetPipeUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x2768);
		}
		static ::System::UriParser** StaticGet_LdapUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x2770);
		}
		static ::System::UriParser** StaticGet_GopherUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x2778);
		}
		static ::System::UriParser** StaticGet_VsMacrosUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x2780);
		}
		static ::System::UriParser** StaticGet_MailToUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x2788);
		}
		static ::System::UriParser** StaticGet_WsUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x2790);
		}
		static ::System::UriParser** StaticGet_NetTcpUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x2798);
		}
		static ::System::UriParser_UriQuirksVersion* StaticGet_s_QuirksVersion()
		{
			return (::System::UriParser_UriQuirksVersion*)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x1010);
		}
		static ::System::UriSyntaxFlags* StaticGet_HttpSyntaxFlags()
		{
			return (::System::UriSyntaxFlags*)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x1014);
		}
		static ::System::UriSyntaxFlags* StaticGet_FileSyntaxFlags()
		{
			return (::System::UriSyntaxFlags*)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x1018);
		}
		// static const ::System::UriSyntaxFlags SchemeOnlyFlags; // 0x0
		// static const ::System::UriSyntaxFlags c_UpdatableFlags; // 0x0
		// static const ::System::Int32 NoDefaultPort = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 c_InitialTableSize = 0x19; // 0x0
		// static const ::System::Int32 c_MaxCapacity = 0x200; // 0x0
		// static const ::System::UriSyntaxFlags UnknownV1SyntaxFlags; // 0x0
		// static const ::System::UriSyntaxFlags FtpSyntaxFlags; // 0x0
		// static const ::System::UriSyntaxFlags VsmacrosSyntaxFlags; // 0x0
		// static const ::System::UriSyntaxFlags GopherSyntaxFlags; // 0x0
		// static const ::System::UriSyntaxFlags NewsSyntaxFlags; // 0x0
		// static const ::System::UriSyntaxFlags NntpSyntaxFlags; // 0x0
		// static const ::System::UriSyntaxFlags TelnetSyntaxFlags; // 0x0
		// static const ::System::UriSyntaxFlags LdapSyntaxFlags; // 0x0
		// static const ::System::UriSyntaxFlags MailtoSyntaxFlags; // 0x0
		// static const ::System::UriSyntaxFlags NetPipeSyntaxFlags; // 0x0
		// static const ::System::UriSyntaxFlags NetTcpSyntaxFlags; // 0x0
		::System::String* m_Scheme; // 0x10
		::System::UriSyntaxFlags m_Flags; // 0x18
		::System::UriSyntaxFlags m_UpdatableFlags; // 0x1C
		::System::Int32 m_Port; // 0x20
		::System::Boolean m_UpdatableFlagsUsed; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER__CCTOR_OFFSET))();
		}

		::System::Void _ctor_1(::System::UriSyntaxFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::UriSyntaxFlags))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER__CTOR_1_OFFSET))(this, flags);
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

		::System::Void OnRegister(::System::String* schemeName, ::System::Int32 defaultPort)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_ONREGISTER_OFFSET))(this, schemeName, defaultPort);
		}

		::System::Void InitializeAndValidate(::System::Uri* uri, ::System::UriFormatException*& parsingError)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::UriFormatException*&))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_INITIALIZEANDVALIDATE_OFFSET))(this, uri, parsingError);
		}

		::System::String* Resolve(::System::Uri* baseUri, ::System::Uri* relativeUri, ::System::UriFormatException*& parsingError)
		{
			return ((::System::String*(*)(::PVOID, ::System::Uri*, ::System::Uri*, ::System::UriFormatException*&))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_RESOLVE_OFFSET))(this, baseUri, relativeUri, parsingError);
		}

		::System::Boolean IsBaseOf(::System::Uri* baseUri, ::System::Uri* relativeUri)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_ISBASEOF_OFFSET))(this, baseUri, relativeUri);
		}

		::System::String* GetComponents(::System::Uri* uri, ::System::UriComponents components, ::System::UriFormat format)
		{
			return ((::System::String*(*)(::PVOID, ::System::Uri*, ::System::UriComponents, ::System::UriFormat))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_GETCOMPONENTS_OFFSET))(this, uri, components, format);
		}

		::System::Boolean IsWellFormedOriginalString(::System::Uri* uri)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_ISWELLFORMEDORIGINALSTRING_OFFSET))(this, uri);
		}

		static ::System::Void Register(::System::UriParser* uriParser, ::System::String* schemeName, ::System::Int32 defaultPort)
		{
			return ((::System::Void(*)(::System::UriParser*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_REGISTER_OFFSET))(uriParser, schemeName, defaultPort);
		}

		static ::System::Boolean IsKnownScheme(::System::String* schemeName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_ISKNOWNSCHEME_OFFSET))(schemeName);
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

		static ::System::Void FetchSyntax(::System::UriParser* syntax, ::System::String* lwrCaseSchemeName, ::System::Int32 defaultPort)
		{
			return ((::System::Void(*)(::System::UriParser*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_FETCHSYNTAX_OFFSET))(syntax, lwrCaseSchemeName, defaultPort);
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

		::System::Void CheckSetIsSimpleFlag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_CHECKSETISSIMPLEFLAG_OFFSET))(this);
		}

		::System::Void SetUpdatableFlags(::System::UriSyntaxFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::UriSyntaxFlags))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_SETUPDATABLEFLAGS_OFFSET))(this, flags);
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

		::System::Boolean InternalIsBaseOf(::System::Uri* thisBaseUri, ::System::Uri* uriLink)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_INTERNALISBASEOF_OFFSET))(this, thisBaseUri, uriLink);
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
