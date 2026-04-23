#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ParsingError.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"
#include "unitysdk/System/UriComponents.h"
#include "unitysdk/System/UriFormat.h"
#include "unitysdk/System/UriHostNameType.h"
#include "unitysdk/System/UriIdnScope.h"
#include "unitysdk/System/UriKind.h"
#include "unitysdk/System/UriPartial.h"
#include "unitysdk/System/Uri_Check.h"
#include "unitysdk/System/Uri_Flags.h"

namespace System { class String; }
namespace System { class UriFormatException; }
namespace System { class UriParser; }
namespace System { class Uri_UriInfo; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_URI_ALLOWIDNSTATIC_OFFSET UNITYSDK_OFFSET(0x1A19DFB0)
#define SYSTEM_URI_CALCULATECASEINSENSITIVEHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A1A52E0)
#define SYSTEM_URI_CHECKAUTHORITYHELPERHANDLEANYHOSTIRI_OFFSET UNITYSDK_OFFSET(0x1A1AD260)
#define SYSTEM_URI_CHECKAUTHORITYHELPERHANDLEDNSIRI_OFFSET UNITYSDK_OFFSET(0x1A1ACD50)
#define SYSTEM_URI_CHECKAUTHORITYHELPER_OFFSET UNITYSDK_OFFSET(0x1A1A7D60)
#define SYSTEM_URI_CHECKCANONICAL_OFFSET UNITYSDK_OFFSET(0x1A1A9790)
#define SYSTEM_URI_CHECKFORCOLONINFIRSTPATHSEGMENT_OFFSET UNITYSDK_OFFSET(0x1A1A6520)
#define SYSTEM_URI_CHECKFORCONFIGLOAD_OFFSET UNITYSDK_OFFSET(0x1A1AF2D0)
#define SYSTEM_URI_CHECKFORESCAPEDUNRESERVED_OFFSET UNITYSDK_OFFSET(0x1A1AF4B0)
#define SYSTEM_URI_CHECKFORUNICODE_OFFSET UNITYSDK_OFFSET(0x1A1AF390)
#define SYSTEM_URI_CHECKKNOWNSCHEMES_OFFSET UNITYSDK_OFFSET(0x1A1AC5B0)
#define SYSTEM_URI_CHECKSCHEMENAME_OFFSET UNITYSDK_OFFSET(0x1A1A4DE0)
#define SYSTEM_URI_CHECKSCHEMESYNTAX_OFFSET UNITYSDK_OFFSET(0x1A1A11C0)
#define SYSTEM_URI_COMBINEURI_OFFSET UNITYSDK_OFFSET(0x1A1A1360)
#define SYSTEM_URI_COMPRESS_OFFSET UNITYSDK_OFFSET(0x1A1A3CA0)
#define SYSTEM_URI_CREATEHELPER_OFFSET UNITYSDK_OFFSET(0x1A1AF7D0)
#define SYSTEM_URI_CREATEHOSTSTRINGHELPER_OFFSET UNITYSDK_OFFSET(0x1A1A9630)
#define SYSTEM_URI_CREATEHOSTSTRING_OFFSET UNITYSDK_OFFSET(0x1A19F970)
#define SYSTEM_URI_CREATETHISFROMURI_OFFSET UNITYSDK_OFFSET(0x1A1A0A20)
#define SYSTEM_URI_CREATETHIS_OFFSET UNITYSDK_OFFSET(0x1A19FE70)
#define SYSTEM_URI_CREATEURIINFO_OFFSET UNITYSDK_OFFSET(0x1A19E170)
#define SYSTEM_URI_CREATEURI_OFFSET UNITYSDK_OFFSET(0x1A1A0140)
#define SYSTEM_URI_ENSUREHOSTSTRING_OFFSET UNITYSDK_OFFSET(0x1A19F910)
#define SYSTEM_URI_ENSUREPARSEREMAINING_OFFSET UNITYSDK_OFFSET(0x1A19E850)
#define SYSTEM_URI_ENSUREURIINFO_OFFSET UNITYSDK_OFFSET(0x1A19E140)
#define SYSTEM_URI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A1A5650)
#define SYSTEM_URI_ESCAPEDATASTRING_OFFSET UNITYSDK_OFFSET(0x1A1B0670)
#define SYSTEM_URI_ESCAPEUNESCAPEIRI_OFFSET UNITYSDK_OFFSET(0x1A1AC590)
#define SYSTEM_URI_ESCAPEURISTRING_OFFSET UNITYSDK_OFFSET(0x1A1B0570)
#define SYSTEM_URI_FINDENDOFCOMPONENT_1_OFFSET UNITYSDK_OFFSET(0x1A1AD8B0)
#define SYSTEM_URI_FINDENDOFCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1A1AC500)
#define SYSTEM_URI_FROMHEX_OFFSET UNITYSDK_OFFSET(0x1A1A5010)
#define SYSTEM_URI_GETCANONICALPATH_OFFSET UNITYSDK_OFFSET(0x1A1ABB60)
#define SYSTEM_URI_GETCOMBINEDSTRING_OFFSET UNITYSDK_OFFSET(0x1A1A0EF0)
#define SYSTEM_URI_GETCOMPONENTSHELPER_OFFSET UNITYSDK_OFFSET(0x1A1A5410)
#define SYSTEM_URI_GETCOMPONENTS_OFFSET UNITYSDK_OFFSET(0x1A1A9CF0)
#define SYSTEM_URI_GETESCAPEDPARTS_OFFSET UNITYSDK_OFFSET(0x1A1A9E30)
#define SYSTEM_URI_GETEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1A1A2130)
#define SYSTEM_URI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A1A5090)
#define SYSTEM_URI_GETHOSTVIACUSTOMSYNTAX_OFFSET UNITYSDK_OFFSET(0x1A1A9180)
#define SYSTEM_URI_GETLEFTPART_OFFSET UNITYSDK_OFFSET(0x1A1A4B30)
#define SYSTEM_URI_GETLOCALPATH_OFFSET UNITYSDK_OFFSET(0x1A1A2910)
#define SYSTEM_URI_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1A1A23D0)
#define SYSTEM_URI_GETPARTS_OFFSET UNITYSDK_OFFSET(0x1A1A25B0)
#define SYSTEM_URI_GETRELATIVESERIALIZATIONSTRING_OFFSET UNITYSDK_OFFSET(0x1A1AFA90)
#define SYSTEM_URI_GETUNESCAPEDPARTS_OFFSET UNITYSDK_OFFSET(0x1A1A4190)
#define SYSTEM_URI_GETURIPARTSFROMUSERSTRING_OFFSET UNITYSDK_OFFSET(0x1A1A9F60)
#define SYSTEM_URI_GET_ABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x1A1A25C0)
#define SYSTEM_URI_GET_ABSOLUTEURI_OFFSET UNITYSDK_OFFSET(0x1A1A2770)
#define SYSTEM_URI_GET_ALLOWIDN_OFFSET UNITYSDK_OFFSET(0x1A19DF10)
#define SYSTEM_URI_GET_AUTHORITY_OFFSET UNITYSDK_OFFSET(0x1A1A33F0)
#define SYSTEM_URI_GET_DNSSAFEHOST_OFFSET UNITYSDK_OFFSET(0x1A1A4750)
#define SYSTEM_URI_GET_FRAGMENT_OFFSET UNITYSDK_OFFSET(0x1A1A4500)
#define SYSTEM_URI_GET_HASAUTHORITY_OFFSET UNITYSDK_OFFSET(0x1A1AEA20)
#define SYSTEM_URI_GET_HOSTNAMETYPE_OFFSET UNITYSDK_OFFSET(0x1A1A3480)
#define SYSTEM_URI_GET_HOSTTYPE_OFFSET UNITYSDK_OFFSET(0x1A19DE50)
#define SYSTEM_URI_GET_HOST_OFFSET UNITYSDK_OFFSET(0x1A1A38C0)
#define SYSTEM_URI_GET_INITIALIZELOCK_OFFSET UNITYSDK_OFFSET(0x1A1A3990)
#define SYSTEM_URI_GET_ISABSOLUTEURI_OFFSET UNITYSDK_OFFSET(0x1A1A0130)
#define SYSTEM_URI_GET_ISDEFAULTPORT_OFFSET UNITYSDK_OFFSET(0x1A1A3580)
#define SYSTEM_URI_GET_ISDOSPATH_OFFSET UNITYSDK_OFFSET(0x1A19DE30)
#define SYSTEM_URI_GET_ISFILE_OFFSET UNITYSDK_OFFSET(0x1A1A3640)
#define SYSTEM_URI_GET_ISIMPLICITFILE_OFFSET UNITYSDK_OFFSET(0x1A19DE10)
#define SYSTEM_URI_GET_ISLOOPBACK_OFFSET UNITYSDK_OFFSET(0x1A1A36C0)
#define SYSTEM_URI_GET_ISNOTABSOLUTEURI_OFFSET UNITYSDK_OFFSET(0x1A19DE70)
#define SYSTEM_URI_GET_ISUNCORDOSPATH_OFFSET UNITYSDK_OFFSET(0x1A19DE20)
#define SYSTEM_URI_GET_ISUNCPATH_OFFSET UNITYSDK_OFFSET(0x1A19DE40)
#define SYSTEM_URI_GET_ISUNC_OFFSET UNITYSDK_OFFSET(0x1A1A3840)
#define SYSTEM_URI_GET_LOCALPATH_OFFSET UNITYSDK_OFFSET(0x1A1A28A0)
#define SYSTEM_URI_GET_ORIGINALSTRINGSWITCHED_OFFSET UNITYSDK_OFFSET(0x1A1A4680)
#define SYSTEM_URI_GET_ORIGINALSTRING_OFFSET UNITYSDK_OFFSET(0x1A1A1290)
#define SYSTEM_URI_GET_PATHANDQUERY_OFFSET UNITYSDK_OFFSET(0x1A1A3750)
#define SYSTEM_URI_GET_PORT_OFFSET UNITYSDK_OFFSET(0x1A1A42B0)
#define SYSTEM_URI_GET_PRIVATEABSOLUTEPATH_OFFSET UNITYSDK_OFFSET(0x1A1A2670)
#define SYSTEM_URI_GET_QUERY_OFFSET UNITYSDK_OFFSET(0x1A1A43A0)
#define SYSTEM_URI_GET_SCHEME_OFFSET UNITYSDK_OFFSET(0x1A1A4630)
#define SYSTEM_URI_GET_SECUREDPATHINDEX_OFFSET UNITYSDK_OFFSET(0x1A19E0A0)
#define SYSTEM_URI_GET_SYNTAX_OFFSET UNITYSDK_OFFSET(0x1A19DE60)
#define SYSTEM_URI_GET_USERDRIVENPARSING_OFFSET UNITYSDK_OFFSET(0x1A19E070)
#define SYSTEM_URI_GET_USERESCAPED_OFFSET UNITYSDK_OFFSET(0x1A1A4A70)
#define SYSTEM_URI_GET_USERINFO_OFFSET UNITYSDK_OFFSET(0x1A1A4A80)
#define SYSTEM_URI_INFACT_OFFSET UNITYSDK_OFFSET(0x1A19E120)
#define SYSTEM_URI_INITIALIZEURICONFIG_OFFSET UNITYSDK_OFFSET(0x1A1A3A40)
#define SYSTEM_URI_INITIALIZEURI_OFFSET UNITYSDK_OFFSET(0x1A1AEA60)
#define SYSTEM_URI_INTERNALESCAPESTRING_OFFSET UNITYSDK_OFFSET(0x1A1A6600)
#define SYSTEM_URI_INTERNALISWELLFORMEDORIGINALSTRING_OFFSET UNITYSDK_OFFSET(0x1A1AFCF0)
#define SYSTEM_URI_IRIPARSINGSTATIC_OFFSET UNITYSDK_OFFSET(0x1A19DE80)
#define SYSTEM_URI_ISASCIILETTERORDIGIT_OFFSET UNITYSDK_OFFSET(0x1A1A4FB0)
#define SYSTEM_URI_ISASCIILETTER_OFFSET UNITYSDK_OFFSET(0x1A1A4FA0)
#define SYSTEM_URI_ISBIDICONTROLCHARACTER_OFFSET UNITYSDK_OFFSET(0x1A1AEA30)
#define SYSTEM_URI_ISGENDELIM_OFFSET UNITYSDK_OFFSET(0x1A1A4DC0)
#define SYSTEM_URI_ISHEXDIGIT_OFFSET UNITYSDK_OFFSET(0x1A1A4FF0)
#define SYSTEM_URI_ISINTRANET_OFFSET UNITYSDK_OFFSET(0x1A19E060)
#define SYSTEM_URI_ISLWS_OFFSET UNITYSDK_OFFSET(0x1A1A7CD0)
#define SYSTEM_URI_ISWELLFORMEDORIGINALSTRING_OFFSET UNITYSDK_OFFSET(0x1A1AFCC0)
#define SYSTEM_URI_ISWELLFORMEDURISTRING_OFFSET UNITYSDK_OFFSET(0x1A1B0330)
#define SYSTEM_URI_MAKERELATIVEURI_OFFSET UNITYSDK_OFFSET(0x1A1A5D10)
#define SYSTEM_URI_NOTANY_OFFSET UNITYSDK_OFFSET(0x1A19DFA0)
#define SYSTEM_URI_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1A1A5620)
#define SYSTEM_URI_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1A1A09E0)
#define SYSTEM_URI_PARSEMINIMAL_OFFSET UNITYSDK_OFFSET(0x1A1A7580)
#define SYSTEM_URI_PARSEREMAINING_OFFSET UNITYSDK_OFFSET(0x1A19E860)
#define SYSTEM_URI_PARSESCHEMECHECKIMPLICITFILE_OFFSET UNITYSDK_OFFSET(0x1A1A7060)
#define SYSTEM_URI_PARSESCHEME_OFFSET UNITYSDK_OFFSET(0x1A1A6FD0)
#define SYSTEM_URI_PATHDIFFERENCE_OFFSET UNITYSDK_OFFSET(0x1A1A60C0)
#define SYSTEM_URI_PRIVATEPARSEMINIMALIRI_OFFSET UNITYSDK_OFFSET(0x1A1A8F70)
#define SYSTEM_URI_PRIVATEPARSEMINIMAL_OFFSET UNITYSDK_OFFSET(0x1A1A75D0)
#define SYSTEM_URI_RECREATEPARTS_OFFSET UNITYSDK_OFFSET(0x1A1AA8C0)
#define SYSTEM_URI_RESOLVEHELPER_OFFSET UNITYSDK_OFFSET(0x1A1A02F0)
#define SYSTEM_URI_SETUSERDRIVENPARSING_OFFSET UNITYSDK_OFFSET(0x1A19E080)
#define SYSTEM_URI_STATICINFACT_OFFSET UNITYSDK_OFFSET(0x1A19E130)
#define SYSTEM_URI_STATICISFILE_OFFSET UNITYSDK_OFFSET(0x1A1A3970)
#define SYSTEM_URI_STATICNOTANY_OFFSET UNITYSDK_OFFSET(0x1A19E050)
#define SYSTEM_URI_STRIPBIDICONTROLCHARACTER_OFFSET UNITYSDK_OFFSET(0x1A1AD750)
#define SYSTEM_URI_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x1A1A23C0)
#define SYSTEM_URI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A1A5350)
#define SYSTEM_URI_TRYCREATE_OFFSET UNITYSDK_OFFSET(0x1A1A5C80)
#define SYSTEM_URI_UNESCAPEDATASTRING_OFFSET UNITYSDK_OFFSET(0x1A1B0400)
#define SYSTEM_URI_UNESCAPEONLY_OFFSET UNITYSDK_OFFSET(0x1A1AD9E0)
#define SYSTEM_URI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1B0780)
#define SYSTEM_URI__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A1A0030)
#define SYSTEM_URI__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A1A0080)
#define SYSTEM_URI__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1A1A0CE0)
#define SYSTEM_URI__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1A1A22F0)
#define SYSTEM_URI__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1A1B0770)
#define SYSTEM_URI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A19FE20)

namespace System
{
	inline static constexpr unsigned int Uri_TypeDefinitionIndex = 2450;

	class Uri : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_UriSchemeWs()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x10D40);
		}
		static ::System::String** StaticGet_UriSchemeHttp()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x10D48);
		}
		static ::System::String** StaticGet_UriSchemeHttps()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x10D50);
		}
		static ::System::String** StaticGet_UriSchemeNntp()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x10D58);
		}
		static ::Il2CppArray<::System::Char>** StaticGet__WSchars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x10D60);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_HexLowerChars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x10D68);
		}
		static ::System::String** StaticGet_UriSchemeFile()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x10D70);
		}
		static ::System::String** StaticGet_SchemeDelimiter()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x10D78);
		}
		static ::System::Object** StaticGet_s_initLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x10D80);
		}
		static ::System::String** StaticGet_UriSchemeNews()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x10D88);
		}
		static ::System::String** StaticGet_UriSchemeWss()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x10D90);
		}
		static ::System::String** StaticGet_UriSchemeNetPipe()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x10D98);
		}
		static ::System::String** StaticGet_UriSchemeGopher()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x10DA0);
		}
		static ::System::String** StaticGet_UriSchemeMailto()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x10DA8);
		}
		static ::System::String** StaticGet_UriSchemeNetTcp()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x10DB0);
		}
		static ::System::String** StaticGet_UriSchemeFtp()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x10DB8);
		}
		static ::System::Boolean* StaticGet_s_ConfigInitializing()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x5300);
		}
		static ::System::Boolean* StaticGet_useDotNetRelativeOrAbsolute()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x5301);
		}
		static ::System::Boolean* StaticGet_IsWindowsFileSystem()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x5302);
		}
		static ::System::Boolean* StaticGet_s_ConfigInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x5303);
		}
		static ::System::UriIdnScope* StaticGet_s_IdnScope()
		{
			return (::System::UriIdnScope*)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x5304);
		}
		static ::System::Boolean* StaticGet_s_IriParsing()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Uri_TypeDefinitionIndex)->GetStaticField(0x5308);
		}
		::System::Uri_UriInfo* m_Info; // 0x10
		::System::UriParser* m_Syntax; // 0x18
		::System::String* m_originalUnicodeString; // 0x20
		::System::String* m_DnsSafeHost; // 0x28
		::System::String* m_String; // 0x30
		::System::Uri_Flags m_Flags; // 0x38
		::System::Boolean m_iriParsing; // 0x40

		::System::Void _ctor(::System::String* uriString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI__CTOR_OFFSET))(this, uriString);
		}

		::System::Void _ctor_1(::System::String* uriString, ::System::UriKind uriKind)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UriKind))((::PBYTE)hIl2Cpp + SYSTEM_URI__CTOR_1_OFFSET))(this, uriString, uriKind);
		}

		::System::Void _ctor_2(::System::Uri* baseUri, ::System::String* relativeUri)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI__CTOR_2_OFFSET))(this, baseUri, relativeUri);
		}

		::System::Void _ctor_3(::System::Uri* baseUri, ::System::Uri* relativeUri)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_URI__CTOR_3_OFFSET))(this, baseUri, relativeUri);
		}

		::System::Void _ctor_4(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_URI__CTOR_4_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void _ctor_5(::System::Uri_Flags flags, ::System::UriParser* uriParser, ::System::String* uri)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri_Flags, ::System::UriParser*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI__CTOR_5_OFFSET))(this, flags, uriParser, uri);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_URI__CCTOR_OFFSET))();
		}

		::System::Boolean get_IsImplicitFile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ISIMPLICITFILE_OFFSET))(this);
		}

		::System::Boolean get_IsUncOrDosPath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ISUNCORDOSPATH_OFFSET))(this);
		}

		::System::Boolean get_IsDosPath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ISDOSPATH_OFFSET))(this);
		}

		::System::Boolean get_IsUncPath()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ISUNCPATH_OFFSET))(this);
		}

		::System::Uri_Flags get_HostType()
		{
			return ((::System::Uri_Flags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_HOSTTYPE_OFFSET))(this);
		}

		::System::UriParser* get_Syntax()
		{
			return ((::System::UriParser*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_SYNTAX_OFFSET))(this);
		}

		::System::Boolean get_IsNotAbsoluteUri()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ISNOTABSOLUTEURI_OFFSET))(this);
		}

		static ::System::Boolean IriParsingStatic(::System::UriParser* syntax)
		{
			return ((::System::Boolean(*)(::System::UriParser*))((::PBYTE)hIl2Cpp + SYSTEM_URI_IRIPARSINGSTATIC_OFFSET))(syntax);
		}

		::System::Boolean get_AllowIdn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ALLOWIDN_OFFSET))(this);
		}

		::System::Boolean AllowIdnStatic(::System::UriParser* syntax, ::System::Uri_Flags flags)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UriParser*, ::System::Uri_Flags))((::PBYTE)hIl2Cpp + SYSTEM_URI_ALLOWIDNSTATIC_OFFSET))(this, syntax, flags);
		}

		::System::Boolean IsIntranet(::System::String* schemeHost)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_ISINTRANET_OFFSET))(this, schemeHost);
		}

		::System::Boolean get_UserDrivenParsing()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_USERDRIVENPARSING_OFFSET))(this);
		}

		::System::Void SetUserDrivenParsing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_SETUSERDRIVENPARSING_OFFSET))(this);
		}

		::System::UInt16 get_SecuredPathIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_SECUREDPATHINDEX_OFFSET))(this);
		}

		::System::Boolean NotAny(::System::Uri_Flags flags)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri_Flags))((::PBYTE)hIl2Cpp + SYSTEM_URI_NOTANY_OFFSET))(this, flags);
		}

		::System::Boolean InFact(::System::Uri_Flags flags)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri_Flags))((::PBYTE)hIl2Cpp + SYSTEM_URI_INFACT_OFFSET))(this, flags);
		}

		static ::System::Boolean StaticNotAny(::System::Uri_Flags allFlags, ::System::Uri_Flags checkFlags)
		{
			return ((::System::Boolean(*)(::System::Uri_Flags, ::System::Uri_Flags))((::PBYTE)hIl2Cpp + SYSTEM_URI_STATICNOTANY_OFFSET))(allFlags, checkFlags);
		}

		static ::System::Boolean StaticInFact(::System::Uri_Flags allFlags, ::System::Uri_Flags checkFlags)
		{
			return ((::System::Boolean(*)(::System::Uri_Flags, ::System::Uri_Flags))((::PBYTE)hIl2Cpp + SYSTEM_URI_STATICINFACT_OFFSET))(allFlags, checkFlags);
		}

		::System::Uri_UriInfo* EnsureUriInfo()
		{
			return ((::System::Uri_UriInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_ENSUREURIINFO_OFFSET))(this);
		}

		::System::Void EnsureParseRemaining()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_ENSUREPARSEREMAINING_OFFSET))(this);
		}

		::System::Void EnsureHostString(::System::Boolean allowDnsOptimization)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_URI_ENSUREHOSTSTRING_OFFSET))(this, allowDnsOptimization);
		}

		::System::Void CreateUri(::System::Uri* baseUri, ::System::String* relativeUri, ::System::Boolean dontEscape)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_URI_CREATEURI_OFFSET))(this, baseUri, relativeUri, dontEscape);
		}

		static ::System::ParsingError GetCombinedString(::System::Uri* baseUri, ::System::String* relativeStr, ::System::Boolean dontEscape, ::System::String*& result)
		{
			return ((::System::ParsingError(*)(::System::Uri*, ::System::String*, ::System::Boolean, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETCOMBINEDSTRING_OFFSET))(baseUri, relativeStr, dontEscape, result);
		}

		static ::System::UriFormatException* GetException(::System::ParsingError err)
		{
			return ((::System::UriFormatException*(*)(::System::ParsingError))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETEXCEPTION_OFFSET))(err);
		}

		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_URI_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::Void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETOBJECTDATA_OFFSET))(this, serializationInfo, streamingContext);
		}

		::System::String* get_AbsolutePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ABSOLUTEPATH_OFFSET))(this);
		}

		::System::String* get_PrivateAbsolutePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_PRIVATEABSOLUTEPATH_OFFSET))(this);
		}

		::System::String* get_AbsoluteUri()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ABSOLUTEURI_OFFSET))(this);
		}

		::System::String* get_LocalPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_LOCALPATH_OFFSET))(this);
		}

		::System::String* get_Authority()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_AUTHORITY_OFFSET))(this);
		}

		::System::UriHostNameType get_HostNameType()
		{
			return ((::System::UriHostNameType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_HOSTNAMETYPE_OFFSET))(this);
		}

		::System::Boolean get_IsDefaultPort()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ISDEFAULTPORT_OFFSET))(this);
		}

		::System::Boolean get_IsFile()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ISFILE_OFFSET))(this);
		}

		::System::Boolean get_IsLoopback()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ISLOOPBACK_OFFSET))(this);
		}

		::System::String* get_PathAndQuery()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_PATHANDQUERY_OFFSET))(this);
		}

		::System::Boolean get_IsUnc()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ISUNC_OFFSET))(this);
		}

		::System::String* get_Host()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_HOST_OFFSET))(this);
		}

		static ::System::Boolean StaticIsFile(::System::UriParser* syntax)
		{
			return ((::System::Boolean(*)(::System::UriParser*))((::PBYTE)hIl2Cpp + SYSTEM_URI_STATICISFILE_OFFSET))(syntax);
		}

		static ::System::Object* get_InitializeLock()
		{
			return ((::System::Object*(*)())((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_INITIALIZELOCK_OFFSET))();
		}

		static ::System::Void InitializeUriConfig()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_URI_INITIALIZEURICONFIG_OFFSET))();
		}

		::System::String* GetLocalPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETLOCALPATH_OFFSET))(this);
		}

		::System::Int32 get_Port()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_PORT_OFFSET))(this);
		}

		::System::String* get_Query()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_QUERY_OFFSET))(this);
		}

		::System::String* get_Fragment()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_FRAGMENT_OFFSET))(this);
		}

		::System::String* get_Scheme()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_SCHEME_OFFSET))(this);
		}

		::System::Boolean get_OriginalStringSwitched()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ORIGINALSTRINGSWITCHED_OFFSET))(this);
		}

		::System::String* get_OriginalString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ORIGINALSTRING_OFFSET))(this);
		}

		::System::String* get_DnsSafeHost()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_DNSSAFEHOST_OFFSET))(this);
		}

		::System::Boolean get_IsAbsoluteUri()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_ISABSOLUTEURI_OFFSET))(this);
		}

		::System::Boolean get_UserEscaped()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_USERESCAPED_OFFSET))(this);
		}

		::System::String* get_UserInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_USERINFO_OFFSET))(this);
		}

		::System::String* GetLeftPart(::System::UriPartial part)
		{
			return ((::System::String*(*)(::PVOID, ::System::UriPartial))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETLEFTPART_OFFSET))(this, part);
		}

		static ::System::Boolean IsGenDelim(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URI_ISGENDELIM_OFFSET))(ch);
		}

		static ::System::Boolean CheckSchemeName(::System::String* schemeName)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_CHECKSCHEMENAME_OFFSET))(schemeName);
		}

		static ::System::Boolean IsHexDigit(::System::Char character)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URI_ISHEXDIGIT_OFFSET))(character);
		}

		static ::System::Int32 FromHex(::System::Char digit)
		{
			return ((::System::Int32(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URI_FROMHEX_OFFSET))(digit);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::System::Uri* uri1, ::System::Uri* uri2)
		{
			return ((::System::Boolean(*)(::System::Uri*, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_URI_OP_EQUALITY_OFFSET))(uri1, uri2);
		}

		static ::System::Boolean op_Inequality(::System::Uri* uri1, ::System::Uri* uri2)
		{
			return ((::System::Boolean(*)(::System::Uri*, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_URI_OP_INEQUALITY_OFFSET))(uri1, uri2);
		}

		::System::Boolean Equals(::System::Object* comparand)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_URI_EQUALS_OFFSET))(this, comparand);
		}

		::System::Uri* MakeRelativeUri(::System::Uri* uri)
		{
			return ((::System::Uri*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_URI_MAKERELATIVEURI_OFFSET))(this, uri);
		}

		static ::System::Boolean CheckForColonInFirstPathSegment(::System::String* uriString)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_CHECKFORCOLONINFIRSTPATHSEGMENT_OFFSET))(uriString);
		}

		static ::System::String* InternalEscapeString(::System::String* rawString)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_INTERNALESCAPESTRING_OFFSET))(rawString);
		}

		static ::System::ParsingError ParseScheme(::System::String* uriString, ::System::Uri_Flags& flags, ::System::UriParser*& syntax)
		{
			return ((::System::ParsingError(*)(::System::String*, ::System::Uri_Flags&, ::System::UriParser*&))((::PBYTE)hIl2Cpp + SYSTEM_URI_PARSESCHEME_OFFSET))(uriString, flags, syntax);
		}

		::System::UriFormatException* ParseMinimal()
		{
			return ((::System::UriFormatException*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_PARSEMINIMAL_OFFSET))(this);
		}

		::System::ParsingError PrivateParseMinimal()
		{
			return ((::System::ParsingError(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_PRIVATEPARSEMINIMAL_OFFSET))(this);
		}

		::System::Void PrivateParseMinimalIri(::System::String* newHost, ::System::UInt16 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt16))((::PBYTE)hIl2Cpp + SYSTEM_URI_PRIVATEPARSEMINIMALIRI_OFFSET))(this, newHost, idx);
		}

		::System::Void CreateUriInfo(::System::Uri_Flags cF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri_Flags))((::PBYTE)hIl2Cpp + SYSTEM_URI_CREATEURIINFO_OFFSET))(this, cF);
		}

		::System::Void CreateHostString()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_CREATEHOSTSTRING_OFFSET))(this);
		}

		static ::System::String* CreateHostStringHelper(::System::String* str, ::System::UInt16 idx, ::System::UInt16 end, ::System::Uri_Flags& flags, ::System::String*& scopeId)
		{
			return ((::System::String*(*)(::System::String*, ::System::UInt16, ::System::UInt16, ::System::Uri_Flags&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_URI_CREATEHOSTSTRINGHELPER_OFFSET))(str, idx, end, flags, scopeId);
		}

		::System::Void GetHostViaCustomSyntax()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETHOSTVIACUSTOMSYNTAX_OFFSET))(this);
		}

		::System::String* GetParts(::System::UriComponents uriParts, ::System::UriFormat formatAs)
		{
			return ((::System::String*(*)(::PVOID, ::System::UriComponents, ::System::UriFormat))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETPARTS_OFFSET))(this, uriParts, formatAs);
		}

		::System::String* GetEscapedParts(::System::UriComponents uriParts)
		{
			return ((::System::String*(*)(::PVOID, ::System::UriComponents))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETESCAPEDPARTS_OFFSET))(this, uriParts);
		}

		::System::String* GetUnescapedParts(::System::UriComponents uriParts, ::System::UriFormat formatAs)
		{
			return ((::System::String*(*)(::PVOID, ::System::UriComponents, ::System::UriFormat))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETUNESCAPEDPARTS_OFFSET))(this, uriParts, formatAs);
		}

		::System::String* ReCreateParts(::System::UriComponents parts, ::System::UInt16 nonCanonical, ::System::UriFormat formatAs)
		{
			return ((::System::String*(*)(::PVOID, ::System::UriComponents, ::System::UInt16, ::System::UriFormat))((::PBYTE)hIl2Cpp + SYSTEM_URI_RECREATEPARTS_OFFSET))(this, parts, nonCanonical, formatAs);
		}

		::System::String* GetUriPartsFromUserString(::System::UriComponents uriParts)
		{
			return ((::System::String*(*)(::PVOID, ::System::UriComponents))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETURIPARTSFROMUSERSTRING_OFFSET))(this, uriParts);
		}

		::System::Void ParseRemaining()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_PARSEREMAINING_OFFSET))(this);
		}

		static ::System::UInt16 ParseSchemeCheckImplicitFile(::System::Char* uriString, ::System::UInt16 length, ::System::ParsingError& err, ::System::Uri_Flags& flags, ::System::UriParser*& syntax)
		{
			return ((::System::UInt16(*)(::System::Char*, ::System::UInt16, ::System::ParsingError&, ::System::Uri_Flags&, ::System::UriParser*&))((::PBYTE)hIl2Cpp + SYSTEM_URI_PARSESCHEMECHECKIMPLICITFILE_OFFSET))(uriString, length, err, flags, syntax);
		}

		static ::System::Boolean CheckKnownSchemes(::System::Int64* lptr, ::System::UInt16 nChars, ::System::UriParser*& syntax)
		{
			return ((::System::Boolean(*)(::System::Int64*, ::System::UInt16, ::System::UriParser*&))((::PBYTE)hIl2Cpp + SYSTEM_URI_CHECKKNOWNSCHEMES_OFFSET))(lptr, nChars, syntax);
		}

		static ::System::ParsingError CheckSchemeSyntax(::System::Char* ptr, ::System::UInt16 length, ::System::UriParser*& syntax)
		{
			return ((::System::ParsingError(*)(::System::Char*, ::System::UInt16, ::System::UriParser*&))((::PBYTE)hIl2Cpp + SYSTEM_URI_CHECKSCHEMESYNTAX_OFFSET))(ptr, length, syntax);
		}

		::System::UInt16 CheckAuthorityHelper(::System::Char* pString, ::System::UInt16 idx, ::System::UInt16 length, ::System::ParsingError& err, ::System::Uri_Flags& flags, ::System::UriParser* syntax, ::System::String*& newHost)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::Char*, ::System::UInt16, ::System::UInt16, ::System::ParsingError&, ::System::Uri_Flags&, ::System::UriParser*, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_URI_CHECKAUTHORITYHELPER_OFFSET))(this, pString, idx, length, err, flags, syntax, newHost);
		}

		::System::Void CheckAuthorityHelperHandleDnsIri(::System::Char* pString, ::System::UInt16 start, ::System::Int32 end, ::System::Int32 startInput, ::System::Boolean iriParsing, ::System::Boolean hasUnicode, ::System::UriParser* syntax, ::System::String* userInfoString, ::System::Uri_Flags& flags, ::System::Boolean& justNormalized, ::System::String*& newHost, ::System::ParsingError& err)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::UInt16, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::UriParser*, ::System::String*, ::System::Uri_Flags&, ::System::Boolean&, ::System::String*&, ::System::ParsingError&))((::PBYTE)hIl2Cpp + SYSTEM_URI_CHECKAUTHORITYHELPERHANDLEDNSIRI_OFFSET))(this, pString, start, end, startInput, iriParsing, hasUnicode, syntax, userInfoString, flags, justNormalized, newHost, err);
		}

		::System::Void CheckAuthorityHelperHandleAnyHostIri(::System::Char* pString, ::System::Int32 startInput, ::System::Int32 end, ::System::Boolean iriParsing, ::System::Boolean hasUnicode, ::System::UriParser* syntax, ::System::Uri_Flags& flags, ::System::String*& newHost, ::System::ParsingError& err)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::UriParser*, ::System::Uri_Flags&, ::System::String*&, ::System::ParsingError&))((::PBYTE)hIl2Cpp + SYSTEM_URI_CHECKAUTHORITYHELPERHANDLEANYHOSTIRI_OFFSET))(this, pString, startInput, end, iriParsing, hasUnicode, syntax, flags, newHost, err);
		}

		::System::Void FindEndOfComponent(::System::String* input, ::System::UInt16& idx, ::System::UInt16 end, ::System::Char delim)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::UInt16&, ::System::UInt16, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URI_FINDENDOFCOMPONENT_OFFSET))(this, input, idx, end, delim);
		}

		::System::Void FindEndOfComponent_1(::System::Char* str, ::System::UInt16& idx, ::System::UInt16 end, ::System::Char delim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char*, ::System::UInt16&, ::System::UInt16, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URI_FINDENDOFCOMPONENT_1_OFFSET))(this, str, idx, end, delim);
		}

		::System::Uri_Check CheckCanonical(::System::Char* str, ::System::UInt16& idx, ::System::UInt16 end, ::System::Char delim)
		{
			return ((::System::Uri_Check(*)(::PVOID, ::System::Char*, ::System::UInt16&, ::System::UInt16, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URI_CHECKCANONICAL_OFFSET))(this, str, idx, end, delim);
		}

		::Il2CppArray<::System::Char>* GetCanonicalPath(::Il2CppArray<::System::Char>* dest, ::System::Int32& pos, ::System::UriFormat formatAs)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::PVOID, ::Il2CppArray<::System::Char>*, ::System::Int32&, ::System::UriFormat))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETCANONICALPATH_OFFSET))(this, dest, pos, formatAs);
		}

		static ::System::Void UnescapeOnly(::System::Char* pch, ::System::Int32 start, ::System::Int32& end, ::System::Char ch1, ::System::Char ch2, ::System::Char ch3)
		{
			return ((::System::Void(*)(::System::Char*, ::System::Int32, ::System::Int32&, ::System::Char, ::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URI_UNESCAPEONLY_OFFSET))(pch, start, end, ch1, ch2, ch3);
		}

		static ::Il2CppArray<::System::Char>* Compress(::Il2CppArray<::System::Char>* dest, ::System::UInt16 start, ::System::Int32& destLength, ::System::UriParser* syntax)
		{
			return ((::Il2CppArray<::System::Char>*(*)(::Il2CppArray<::System::Char>*, ::System::UInt16, ::System::Int32&, ::System::UriParser*))((::PBYTE)hIl2Cpp + SYSTEM_URI_COMPRESS_OFFSET))(dest, start, destLength, syntax);
		}

		static ::System::Int32 CalculateCaseInsensitiveHashCode(::System::String* text)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_CALCULATECASEINSENSITIVEHASHCODE_OFFSET))(text);
		}

		static ::System::String* CombineUri(::System::Uri* basePart, ::System::String* relativePart, ::System::UriFormat uriFormat)
		{
			return ((::System::String*(*)(::System::Uri*, ::System::String*, ::System::UriFormat))((::PBYTE)hIl2Cpp + SYSTEM_URI_COMBINEURI_OFFSET))(basePart, relativePart, uriFormat);
		}

		static ::System::String* PathDifference(::System::String* path1, ::System::String* path2, ::System::Boolean compareCase)
		{
			return ((::System::String*(*)(::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_URI_PATHDIFFERENCE_OFFSET))(path1, path2, compareCase);
		}

		::System::Boolean get_HasAuthority()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_GET_HASAUTHORITY_OFFSET))(this);
		}

		static ::System::Boolean IsLWS(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URI_ISLWS_OFFSET))(ch);
		}

		static ::System::Boolean IsAsciiLetter(::System::Char character)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URI_ISASCIILETTER_OFFSET))(character);
		}

		static ::System::Boolean IsAsciiLetterOrDigit(::System::Char character)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URI_ISASCIILETTERORDIGIT_OFFSET))(character);
		}

		static ::System::Boolean IsBidiControlCharacter(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_URI_ISBIDICONTROLCHARACTER_OFFSET))(ch);
		}

		static ::System::String* StripBidiControlCharacter(::System::Char* strToClean, ::System::Int32 start, ::System::Int32 length)
		{
			return ((::System::String*(*)(::System::Char*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_URI_STRIPBIDICONTROLCHARACTER_OFFSET))(strToClean, start, length);
		}

		::System::Void CreateThis(::System::String* uri, ::System::Boolean dontEscape, ::System::UriKind uriKind)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::UriKind))((::PBYTE)hIl2Cpp + SYSTEM_URI_CREATETHIS_OFFSET))(this, uri, dontEscape, uriKind);
		}

		::System::Void InitializeUri(::System::ParsingError err, ::System::UriKind uriKind, ::System::UriFormatException*& e)
		{
			return ((::System::Void(*)(::PVOID, ::System::ParsingError, ::System::UriKind, ::System::UriFormatException*&))((::PBYTE)hIl2Cpp + SYSTEM_URI_INITIALIZEURI_OFFSET))(this, err, uriKind, e);
		}

		::System::Boolean CheckForConfigLoad(::System::String* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_CHECKFORCONFIGLOAD_OFFSET))(this, data);
		}

		::System::Boolean CheckForUnicode(::System::String* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_CHECKFORUNICODE_OFFSET))(this, data);
		}

		::System::Boolean CheckForEscapedUnreserved(::System::String* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_CHECKFORESCAPEDUNRESERVED_OFFSET))(this, data);
		}

		static ::System::Boolean TryCreate(::System::String* uriString, ::System::UriKind uriKind, ::System::Uri*& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::UriKind, ::System::Uri*&))((::PBYTE)hIl2Cpp + SYSTEM_URI_TRYCREATE_OFFSET))(uriString, uriKind, result);
		}

		::System::String* GetComponents(::System::UriComponents components, ::System::UriFormat format)
		{
			return ((::System::String*(*)(::PVOID, ::System::UriComponents, ::System::UriFormat))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETCOMPONENTS_OFFSET))(this, components, format);
		}

		::System::Boolean IsWellFormedOriginalString()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_ISWELLFORMEDORIGINALSTRING_OFFSET))(this);
		}

		static ::System::Boolean IsWellFormedUriString(::System::String* uriString, ::System::UriKind uriKind)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::UriKind))((::PBYTE)hIl2Cpp + SYSTEM_URI_ISWELLFORMEDURISTRING_OFFSET))(uriString, uriKind);
		}

		::System::Boolean InternalIsWellFormedOriginalString()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URI_INTERNALISWELLFORMEDORIGINALSTRING_OFFSET))(this);
		}

		static ::System::String* UnescapeDataString(::System::String* stringToUnescape)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_UNESCAPEDATASTRING_OFFSET))(stringToUnescape);
		}

		static ::System::String* EscapeUriString(::System::String* stringToEscape)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_ESCAPEURISTRING_OFFSET))(stringToEscape);
		}

		static ::System::String* EscapeDataString(::System::String* stringToEscape)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URI_ESCAPEDATASTRING_OFFSET))(stringToEscape);
		}

		::System::String* EscapeUnescapeIri(::System::String* input, ::System::Int32 start, ::System::Int32 end, ::System::UriComponents component)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32, ::System::UriComponents))((::PBYTE)hIl2Cpp + SYSTEM_URI_ESCAPEUNESCAPEIRI_OFFSET))(this, input, start, end, component);
		}

		static ::System::Uri* CreateHelper(::System::String* uriString, ::System::Boolean dontEscape, ::System::UriKind uriKind, ::System::UriFormatException*& e)
		{
			return ((::System::Uri*(*)(::System::String*, ::System::Boolean, ::System::UriKind, ::System::UriFormatException*&))((::PBYTE)hIl2Cpp + SYSTEM_URI_CREATEHELPER_OFFSET))(uriString, dontEscape, uriKind, e);
		}

		static ::System::Uri* ResolveHelper(::System::Uri* baseUri, ::System::Uri* relativeUri, ::System::String*& newUriString, ::System::Boolean& userEscaped, ::System::UriFormatException*& e)
		{
			return ((::System::Uri*(*)(::System::Uri*, ::System::Uri*, ::System::String*&, ::System::Boolean&, ::System::UriFormatException*&))((::PBYTE)hIl2Cpp + SYSTEM_URI_RESOLVEHELPER_OFFSET))(baseUri, relativeUri, newUriString, userEscaped, e);
		}

		::System::String* GetRelativeSerializationString(::System::UriFormat format)
		{
			return ((::System::String*(*)(::PVOID, ::System::UriFormat))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETRELATIVESERIALIZATIONSTRING_OFFSET))(this, format);
		}

		::System::String* GetComponentsHelper(::System::UriComponents uriComponents, ::System::UriFormat uriFormat)
		{
			return ((::System::String*(*)(::PVOID, ::System::UriComponents, ::System::UriFormat))((::PBYTE)hIl2Cpp + SYSTEM_URI_GETCOMPONENTSHELPER_OFFSET))(this, uriComponents, uriFormat);
		}

		::System::Void CreateThisFromUri(::System::Uri* otherUri)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_URI_CREATETHISFROMURI_OFFSET))(this, otherUri);
		}
	};
}
