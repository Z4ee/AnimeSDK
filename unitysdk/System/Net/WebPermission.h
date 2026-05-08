#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/NetworkAccess.h"
#include "unitysdk/System/Security/CodeAccessPermission.h"
#include "unitysdk/System/Security/Permissions/PermissionState.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections { class ArrayList; }
namespace System::Collections { class IEnumerator; }
namespace System::Net { class DelayedRegex; }
namespace System::Security { class IPermission; }
namespace System::Security { class SecurityElement; }
namespace System::Text::RegularExpressions { class Regex; }

#define SYSTEM_NET_WEBPERMISSION_ADDASPATTERN_OFFSET UNITYSDK_OFFSET(0x19F08510)
#define SYSTEM_NET_WEBPERMISSION_ADDPERMISSION_1_OFFSET UNITYSDK_OFFSET(0x19F07E10)
#define SYSTEM_NET_WEBPERMISSION_ADDPERMISSION_2_OFFSET UNITYSDK_OFFSET(0x19F07280)
#define SYSTEM_NET_WEBPERMISSION_ADDPERMISSION_OFFSET UNITYSDK_OFFSET(0x19F07520)
#define SYSTEM_NET_WEBPERMISSION_COPY_OFFSET UNITYSDK_OFFSET(0x19F08C00)
#define SYSTEM_NET_WEBPERMISSION_FROMXML_OFFSET UNITYSDK_OFFSET(0x19F0C510)
#define SYSTEM_NET_WEBPERMISSION_GET_ACCEPTLIST_OFFSET UNITYSDK_OFFSET(0x19F06720)
#define SYSTEM_NET_WEBPERMISSION_GET_CONNECTLIST_OFFSET UNITYSDK_OFFSET(0x19F061B0)
#define SYSTEM_NET_WEBPERMISSION_GET_MATCHALLREGEX_OFFSET UNITYSDK_OFFSET(0x19F060C0)
#define SYSTEM_NET_WEBPERMISSION_INTERSECTLIST_OFFSET UNITYSDK_OFFSET(0x19F0AD40)
#define SYSTEM_NET_WEBPERMISSION_INTERSECTPAIR_OFFSET UNITYSDK_OFFSET(0x19F0E310)
#define SYSTEM_NET_WEBPERMISSION_INTERSECT_OFFSET UNITYSDK_OFFSET(0x19F0A9A0)
#define SYSTEM_NET_WEBPERMISSION_ISMATCHEDURI_OFFSET UNITYSDK_OFFSET(0x19F09BE0)
#define SYSTEM_NET_WEBPERMISSION_ISSPECIALSUBSETCASE_OFFSET UNITYSDK_OFFSET(0x19F09720)
#define SYSTEM_NET_WEBPERMISSION_ISSUBSETOF_OFFSET UNITYSDK_OFFSET(0x19F08FB0)
#define SYSTEM_NET_WEBPERMISSION_ISUNRESTRICTED_OFFSET UNITYSDK_OFFSET(0x19F08BF0)
#define SYSTEM_NET_WEBPERMISSION_TOXML_OFFSET UNITYSDK_OFFSET(0x19F0D340)
#define SYSTEM_NET_WEBPERMISSION_UNION_OFFSET UNITYSDK_OFFSET(0x19F0A150)
#define SYSTEM_NET_WEBPERMISSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19F06DC0)
#define SYSTEM_NET_WEBPERMISSION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x19F06EE0)
#define SYSTEM_NET_WEBPERMISSION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x19F07000)
#define SYSTEM_NET_WEBPERMISSION__CTOR_4_OFFSET UNITYSDK_OFFSET(0x19F07140)
#define SYSTEM_NET_WEBPERMISSION__CTOR_5_OFFSET UNITYSDK_OFFSET(0x19F073E0)
#define SYSTEM_NET_WEBPERMISSION__CTOR_6_OFFSET UNITYSDK_OFFSET(0x19F07CD0)
#define SYSTEM_NET_WEBPERMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x19F06C90)

namespace System::Net
{
	inline static constexpr unsigned int WebPermission_TypeDefinitionIndex = 3349;

	class WebPermission : public ::System::Security::CodeAccessPermission
	{
	public:
		static ::System::Text::RegularExpressions::Regex** StaticGet_s_MatchAllRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)Il2CppClass::FromTypeDefinitionIndex(WebPermission_TypeDefinitionIndex)->GetStaticField(0x34A0);
		}
		// static const ::System::String* MatchAll; // 0x0
		::System::Collections::ArrayList* m_acceptList; // 0x10
		::System::Collections::ArrayList* m_connectList; // 0x18
		::System::Boolean m_UnrestrictedConnect; // 0x20
		::System::Boolean m_noRestriction; // 0x21
		::System::Boolean m_UnrestrictedAccept; // 0x22

		::System::Void _ctor(::System::Security::Permissions::PermissionState state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::PermissionState))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPERMISSION__CTOR_OFFSET))(this, state);
		}

		::System::Void _ctor_1(::System::Boolean unrestricted)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPERMISSION__CTOR_1_OFFSET))(this, unrestricted);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPERMISSION__CTOR_2_OFFSET))(this);
		}

		::System::Void _ctor_3(::System::Net::NetworkAccess access)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkAccess))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPERMISSION__CTOR_3_OFFSET))(this, access);
		}

		::System::Void _ctor_4(::System::Net::NetworkAccess access, ::System::Text::RegularExpressions::Regex* uriRegex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkAccess, ::System::Text::RegularExpressions::Regex*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPERMISSION__CTOR_4_OFFSET))(this, access, uriRegex);
		}

		::System::Void _ctor_5(::System::Net::NetworkAccess access, ::System::String* uriString)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkAccess, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPERMISSION__CTOR_5_OFFSET))(this, access, uriString);
		}

		::System::Void _ctor_6(::System::Net::NetworkAccess access, ::System::Uri* uri)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkAccess, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPERMISSION__CTOR_6_OFFSET))(this, access, uri);
		}

		static ::System::Text::RegularExpressions::Regex* get_MatchAllRegex()
		{
			return ((::System::Text::RegularExpressions::Regex*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPERMISSION_GET_MATCHALLREGEX_OFFSET))();
		}

		::System::Collections::IEnumerator* get_ConnectList()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPERMISSION_GET_CONNECTLIST_OFFSET))(this);
		}

		::System::Collections::IEnumerator* get_AcceptList()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPERMISSION_GET_ACCEPTLIST_OFFSET))(this);
		}

		::System::Void AddPermission(::System::Net::NetworkAccess access, ::System::String* uriString)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkAccess, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPERMISSION_ADDPERMISSION_OFFSET))(this, access, uriString);
		}

		::System::Void AddPermission_1(::System::Net::NetworkAccess access, ::System::Uri* uri)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkAccess, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPERMISSION_ADDPERMISSION_1_OFFSET))(this, access, uri);
		}

		::System::Void AddPermission_2(::System::Net::NetworkAccess access, ::System::Text::RegularExpressions::Regex* uriRegex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkAccess, ::System::Text::RegularExpressions::Regex*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPERMISSION_ADDPERMISSION_2_OFFSET))(this, access, uriRegex);
		}

		::System::Void AddAsPattern(::System::Net::NetworkAccess access, ::System::Net::DelayedRegex* uriRegexPattern)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::NetworkAccess, ::System::Net::DelayedRegex*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPERMISSION_ADDASPATTERN_OFFSET))(this, access, uriRegexPattern);
		}

		::System::Boolean IsUnrestricted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPERMISSION_ISUNRESTRICTED_OFFSET))(this);
		}

		::System::Security::IPermission* Copy()
		{
			return ((::System::Security::IPermission*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPERMISSION_COPY_OFFSET))(this);
		}

		::System::Boolean IsSubsetOf(::System::Security::IPermission* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::IPermission*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPERMISSION_ISSUBSETOF_OFFSET))(this, target);
		}

		static ::System::Boolean isSpecialSubsetCase(::System::String* regexToCheck, ::System::Collections::ArrayList* permList)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPERMISSION_ISSPECIALSUBSETCASE_OFFSET))(regexToCheck, permList);
		}

		::System::Security::IPermission* Union(::System::Security::IPermission* target)
		{
			return ((::System::Security::IPermission*(*)(::PVOID, ::System::Security::IPermission*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPERMISSION_UNION_OFFSET))(this, target);
		}

		::System::Security::IPermission* Intersect(::System::Security::IPermission* target)
		{
			return ((::System::Security::IPermission*(*)(::PVOID, ::System::Security::IPermission*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPERMISSION_INTERSECT_OFFSET))(this, target);
		}

		::System::Void FromXml(::System::Security::SecurityElement* securityElement)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::SecurityElement*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPERMISSION_FROMXML_OFFSET))(this, securityElement);
		}

		::System::Security::SecurityElement* ToXml()
		{
			return ((::System::Security::SecurityElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPERMISSION_TOXML_OFFSET))(this);
		}

		static ::System::Boolean isMatchedURI(::System::Object* uriToCheck, ::System::Collections::ArrayList* uriPatternList)
		{
			return ((::System::Boolean(*)(::System::Object*, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPERMISSION_ISMATCHEDURI_OFFSET))(uriToCheck, uriPatternList);
		}

		static ::System::Void intersectList(::System::Collections::ArrayList* A, ::System::Collections::ArrayList* B, ::System::Collections::ArrayList* result)
		{
			return ((::System::Void(*)(::System::Collections::ArrayList*, ::System::Collections::ArrayList*, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPERMISSION_INTERSECTLIST_OFFSET))(A, B, result);
		}

		static ::System::Object* intersectPair(::System::Object* L, ::System::Object* R, ::System::Boolean& isUri)
		{
			return ((::System::Object*(*)(::System::Object*, ::System::Object*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBPERMISSION_INTERSECTPAIR_OFFSET))(L, R, isUri);
		}
	};
}
