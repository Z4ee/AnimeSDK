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

#define SYSTEM_URIPARSER_FINDORFETCHASUNKNOWNV1SYNTAX_OFFSET UNITYSDK_OFFSET(0x1B00F520)
#define SYSTEM_URIPARSER_GETCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x1B0159F0)
#define SYSTEM_URIPARSER_GETSYNTAX_OFFSET UNITYSDK_OFFSET(0x1B014630)
#define SYSTEM_URIPARSER_GET_DEFAULTPORT_OFFSET UNITYSDK_OFFSET(0x1B015700)
#define SYSTEM_URIPARSER_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1B016990)
#define SYSTEM_URIPARSER_GET_ISSIMPLE_OFFSET UNITYSDK_OFFSET(0x1B002CC0)
#define SYSTEM_URIPARSER_GET_SCHEMENAME_OFFSET UNITYSDK_OFFSET(0x1B0156F0)
#define SYSTEM_URIPARSER_GET_SHOULDUSELEGACYV2QUIRKS_OFFSET UNITYSDK_OFFSET(0x1B00F0D0)
#define SYSTEM_URIPARSER_INFACT_OFFSET UNITYSDK_OFFSET(0x1B000880)
#define SYSTEM_URIPARSER_INITIALIZEANDVALIDATE_OFFSET UNITYSDK_OFFSET(0x1B015720)
#define SYSTEM_URIPARSER_INTERNALGETCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x1B00C9A0)
#define SYSTEM_URIPARSER_INTERNALISWELLFORMEDORIGINALSTRING_OFFSET UNITYSDK_OFFSET(0x1B012F90)
#define SYSTEM_URIPARSER_INTERNALONNEWURI_OFFSET UNITYSDK_OFFSET(0x1B012370)
#define SYSTEM_URIPARSER_INTERNALRESOLVE_OFFSET UNITYSDK_OFFSET(0x1B003690)
#define SYSTEM_URIPARSER_INTERNALVALIDATE_OFFSET UNITYSDK_OFFSET(0x1B0123B0)
#define SYSTEM_URIPARSER_ISALLSET_OFFSET UNITYSDK_OFFSET(0x1B00A930)
#define SYSTEM_URIPARSER_ISFULLMATCH_OFFSET UNITYSDK_OFFSET(0x1B0169A0)
#define SYSTEM_URIPARSER_ISWELLFORMEDORIGINALSTRING_OFFSET UNITYSDK_OFFSET(0x1B015BC0)
#define SYSTEM_URIPARSER_NOTANY_OFFSET UNITYSDK_OFFSET(0x1B00A970)
#define SYSTEM_URIPARSER_ONNEWURI_OFFSET UNITYSDK_OFFSET(0x1B015710)
#define SYSTEM_URIPARSER_RESOLVE_OFFSET UNITYSDK_OFFSET(0x1B015780)
#define SYSTEM_URIPARSER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B015BE0)
#define SYSTEM_URIPARSER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0169E0)

namespace System
{
	inline static constexpr unsigned int UriParser_TypeDefinitionIndex = 2466;

	class UriParser : public ::System::Object
	{
	public:
		static ::System::UriParser** StaticGet_FileUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x283C0);
		}
		static ::System::UriParser** StaticGet_NntpUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x283C8);
		}
		static ::System::UriParser** StaticGet_WsUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x283D0);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UriParser*>** StaticGet_m_Table()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UriParser*>**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x283D8);
		}
		static ::System::UriParser** StaticGet_FtpUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x283E0);
		}
		static ::System::UriParser** StaticGet_TelnetUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x283E8);
		}
		static ::System::UriParser** StaticGet_GopherUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x283F0);
		}
		static ::System::UriParser** StaticGet_LdapUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x283F8);
		}
		static ::System::UriParser** StaticGet_HttpUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x28400);
		}
		static ::System::UriParser** StaticGet_UuidUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x28408);
		}
		static ::System::UriParser** StaticGet_WssUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x28410);
		}
		static ::System::UriParser** StaticGet_MailToUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x28418);
		}
		static ::System::UriParser** StaticGet_NewsUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x28420);
		}
		static ::System::UriParser** StaticGet_VsMacrosUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x28428);
		}
		static ::System::UriParser** StaticGet_NetTcpUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x28430);
		}
		static ::System::UriParser** StaticGet_NetPipeUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x28438);
		}
		static ::System::UriParser** StaticGet_HttpsUri()
		{
			return (::System::UriParser**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x28440);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UriParser*>** StaticGet_m_TempTable()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::UriParser*>**)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x28448);
		}
		static ::System::UriSyntaxFlags* StaticGet_FileSyntaxFlags()
		{
			return (::System::UriSyntaxFlags*)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x97F0);
		}
		static ::System::UriSyntaxFlags* StaticGet_HttpSyntaxFlags()
		{
			return (::System::UriSyntaxFlags*)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x97F4);
		}
		static ::System::UriParser_UriQuirksVersion* StaticGet_s_QuirksVersion()
		{
			return (::System::UriParser_UriQuirksVersion*)Il2CppClass::FromTypeDefinitionIndex(UriParser_TypeDefinitionIndex)->GetStaticField(0x97F8);
		}
		::System::String* m_Scheme; // 0x10
		::System::Boolean m_UpdatableFlagsUsed; // 0x18
		::System::Int32 m_Port; // 0x1C
		::System::UriSyntaxFlags m_Flags; // 0x20
		::System::UriSyntaxFlags m_UpdatableFlags; // 0x24

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::UriSyntaxFlags a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UriSyntaxFlags))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER__CTOR_OFFSET))(this, a1);
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

		::System::Void InitializeAndValidate(::System::Uri* a1, ::System::UriFormatException*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::UriFormatException*&))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_INITIALIZEANDVALIDATE_OFFSET))(this, a1, a2);
		}

		::System::String* Resolve(::System::Uri* a1, ::System::Uri* a2, ::System::UriFormatException*& a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::Uri*, ::System::Uri*, ::System::UriFormatException*&))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_RESOLVE_OFFSET))(this, a1, a2, a3);
		}

		::System::String* GetComponents(::System::Uri* a1, ::System::UriComponents a2, ::System::UriFormat a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::Uri*, ::System::UriComponents, ::System::UriFormat))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_GETCOMPONENTS_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IsWellFormedOriginalString(::System::Uri* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_ISWELLFORMEDORIGINALSTRING_OFFSET))(this, a1);
		}

		static ::System::Boolean get_ShouldUseLegacyV2Quirks()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_GET_SHOULDUSELEGACYV2QUIRKS_OFFSET))();
		}

		::System::UriSyntaxFlags get_Flags()
		{
			return ((::System::UriSyntaxFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_GET_FLAGS_OFFSET))(this);
		}

		::System::Boolean NotAny(::System::UriSyntaxFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UriSyntaxFlags))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_NOTANY_OFFSET))(this, a1);
		}

		::System::Boolean InFact(::System::UriSyntaxFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UriSyntaxFlags))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_INFACT_OFFSET))(this, a1);
		}

		::System::Boolean IsAllSet(::System::UriSyntaxFlags a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UriSyntaxFlags))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_ISALLSET_OFFSET))(this, a1);
		}

		::System::Boolean IsFullMatch(::System::UriSyntaxFlags a1, ::System::UriSyntaxFlags a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UriSyntaxFlags, ::System::UriSyntaxFlags))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_ISFULLMATCH_OFFSET))(this, a1, a2);
		}

		static ::System::UriParser* FindOrFetchAsUnknownV1Syntax(::System::String* a1)
		{
			return ((::System::UriParser*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_FINDORFETCHASUNKNOWNV1SYNTAX_OFFSET))(a1);
		}

		static ::System::UriParser* GetSyntax(::System::String* a1)
		{
			return ((::System::UriParser*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_GETSYNTAX_OFFSET))(a1);
		}

		::System::Boolean get_IsSimple()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_GET_ISSIMPLE_OFFSET))(this);
		}

		::System::UriParser* InternalOnNewUri()
		{
			return ((::System::UriParser*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_INTERNALONNEWURI_OFFSET))(this);
		}

		::System::Void InternalValidate(::System::Uri* a1, ::System::UriFormatException*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::UriFormatException*&))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_INTERNALVALIDATE_OFFSET))(this, a1, a2);
		}

		::System::String* InternalResolve(::System::Uri* a1, ::System::Uri* a2, ::System::UriFormatException*& a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::Uri*, ::System::Uri*, ::System::UriFormatException*&))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_INTERNALRESOLVE_OFFSET))(this, a1, a2, a3);
		}

		::System::String* InternalGetComponents(::System::Uri* a1, ::System::UriComponents a2, ::System::UriFormat a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::Uri*, ::System::UriComponents, ::System::UriFormat))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_INTERNALGETCOMPONENTS_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean InternalIsWellFormedOriginalString(::System::Uri* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_URIPARSER_INTERNALISWELLFORMEDORIGINALSTRING_OFFSET))(this, a1);
		}
	};
}
