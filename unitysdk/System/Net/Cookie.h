#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Net/CookieVariant.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections { class IComparer; }
namespace System::Net { class Comparer; }

#define SYSTEM_NET_COOKIE_CLONE_OFFSET UNITYSDK_OFFSET(0x1C016980)
#define SYSTEM_NET_COOKIE_DOMAINCHARSTEST_OFFSET UNITYSDK_OFFSET(0x1C017E60)
#define SYSTEM_NET_COOKIE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C0182A0)
#define SYSTEM_NET_COOKIE_GETCOMPARER_OFFSET UNITYSDK_OFFSET(0x1C018240)
#define SYSTEM_NET_COOKIE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C018360)
#define SYSTEM_NET_COOKIE_GET_COMMENTURI_OFFSET UNITYSDK_OFFSET(0x1C016600)
#define SYSTEM_NET_COOKIE_GET_COMMENT_OFFSET UNITYSDK_OFFSET(0x1C0165D0)
#define SYSTEM_NET_COOKIE_GET_DISCARD_OFFSET UNITYSDK_OFFSET(0x1C016640)
#define SYSTEM_NET_COOKIE_GET_DOMAINIMPLICIT_OFFSET UNITYSDK_OFFSET(0x1C016710)
#define SYSTEM_NET_COOKIE_GET_DOMAINKEY_OFFSET UNITYSDK_OFFSET(0x1C0180D0)
#define SYSTEM_NET_COOKIE_GET_DOMAIN_OFFSET UNITYSDK_OFFSET(0x1C016660)
#define SYSTEM_NET_COOKIE_GET_EXPIRED_OFFSET UNITYSDK_OFFSET(0x1C016730)
#define SYSTEM_NET_COOKIE_GET_EXPIRES_OFFSET UNITYSDK_OFFSET(0x1C0167A0)
#define SYSTEM_NET_COOKIE_GET_HTTPONLY_OFFSET UNITYSDK_OFFSET(0x1C016620)
#define SYSTEM_NET_COOKIE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C0167C0)
#define SYSTEM_NET_COOKIE_GET_PATH_OFFSET UNITYSDK_OFFSET(0x1C016900)
#define SYSTEM_NET_COOKIE_GET_PLAIN_OFFSET UNITYSDK_OFFSET(0x1C016700)
#define SYSTEM_NET_COOKIE_GET_PORTLIST_OFFSET UNITYSDK_OFFSET(0x1C017FA0)
#define SYSTEM_NET_COOKIE_GET_PORT_OFFSET UNITYSDK_OFFSET(0x1C017F90)
#define SYSTEM_NET_COOKIE_GET_SECURE_OFFSET UNITYSDK_OFFSET(0x1C018040)
#define SYSTEM_NET_COOKIE_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1C018060)
#define SYSTEM_NET_COOKIE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C018070)
#define SYSTEM_NET_COOKIE_GET_VARIANT_OFFSET UNITYSDK_OFFSET(0x1C0180B0)
#define SYSTEM_NET_COOKIE_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1C0180E0)
#define SYSTEM_NET_COOKIE_GET__DOMAIN_OFFSET UNITYSDK_OFFSET(0x1C016670)
#define SYSTEM_NET_COOKIE_GET__PATH_OFFSET UNITYSDK_OFFSET(0x1C016910)
#define SYSTEM_NET_COOKIE_GET__PORT_OFFSET UNITYSDK_OFFSET(0x1C017FB0)
#define SYSTEM_NET_COOKIE_GET__VERSION_OFFSET UNITYSDK_OFFSET(0x1C0180F0)
#define SYSTEM_NET_COOKIE_INTERNALSETNAME_OFFSET UNITYSDK_OFFSET(0x1C0167D0)
#define SYSTEM_NET_COOKIE_ISDOMAINEQUALTOHOST_OFFSET UNITYSDK_OFFSET(0x1C017080)
#define SYSTEM_NET_COOKIE_SET_COMMENTURI_OFFSET UNITYSDK_OFFSET(0x1C016610)
#define SYSTEM_NET_COOKIE_SET_COMMENT_OFFSET UNITYSDK_OFFSET(0x1C0165E0)
#define SYSTEM_NET_COOKIE_SET_DISCARD_OFFSET UNITYSDK_OFFSET(0x1C016650)
#define SYSTEM_NET_COOKIE_SET_DOMAINIMPLICIT_OFFSET UNITYSDK_OFFSET(0x1C016720)
#define SYSTEM_NET_COOKIE_SET_DOMAIN_OFFSET UNITYSDK_OFFSET(0x1C016590)
#define SYSTEM_NET_COOKIE_SET_EXPIRED_OFFSET UNITYSDK_OFFSET(0x1C016780)
#define SYSTEM_NET_COOKIE_SET_EXPIRES_OFFSET UNITYSDK_OFFSET(0x1C0167B0)
#define SYSTEM_NET_COOKIE_SET_HTTPONLY_OFFSET UNITYSDK_OFFSET(0x1C016630)
#define SYSTEM_NET_COOKIE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1C0162B0)
#define SYSTEM_NET_COOKIE_SET_PATH_OFFSET UNITYSDK_OFFSET(0x1C016480)
#define SYSTEM_NET_COOKIE_SET_PORT_OFFSET UNITYSDK_OFFSET(0x1C016B90)
#define SYSTEM_NET_COOKIE_SET_SECURE_OFFSET UNITYSDK_OFFSET(0x1C018050)
#define SYSTEM_NET_COOKIE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C018080)
#define SYSTEM_NET_COOKIE_SET_VARIANT_OFFSET UNITYSDK_OFFSET(0x1C0180C0)
#define SYSTEM_NET_COOKIE_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x1C017000)
#define SYSTEM_NET_COOKIE_TOSERVERSTRING_OFFSET UNITYSDK_OFFSET(0x1C018E00)
#define SYSTEM_NET_COOKIE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C018890)
#define SYSTEM_NET_COOKIE_VERIFYSETDEFAULTS_OFFSET UNITYSDK_OFFSET(0x1C0170E0)
#define SYSTEM_NET_COOKIE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C0191D0)
#define SYSTEM_NET_COOKIE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C016220)
#define SYSTEM_NET_COOKIE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C0163D0)
#define SYSTEM_NET_COOKIE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1C0164B0)
#define SYSTEM_NET_COOKIE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0161A0)

namespace System::Net
{
	inline static constexpr unsigned int Cookie_TypeDefinitionIndex = 3413;

	class Cookie : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_Reserved2Value()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Cookie_TypeDefinitionIndex)->GetStaticField(0x2E50);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_PortSplitDelimiters()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Cookie_TypeDefinitionIndex)->GetStaticField(0x2E58);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_Reserved2Name()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Cookie_TypeDefinitionIndex)->GetStaticField(0x2E60);
		}
		static ::System::Net::Comparer** StaticGet_staticComparer()
		{
			return (::System::Net::Comparer**)Il2CppClass::FromTypeDefinitionIndex(Cookie_TypeDefinitionIndex)->GetStaticField(0x2E68);
		}
		// static const ::System::Int32 MaxSupportedVersion = 0x1; // 0x0
		// static const ::System::String* CommentAttributeName; // 0x0
		// static const ::System::String* CommentUrlAttributeName; // 0x0
		// static const ::System::String* DiscardAttributeName; // 0x0
		// static const ::System::String* DomainAttributeName; // 0x0
		// static const ::System::String* ExpiresAttributeName; // 0x0
		// static const ::System::String* MaxAgeAttributeName; // 0x0
		// static const ::System::String* PathAttributeName; // 0x0
		// static const ::System::String* PortAttributeName; // 0x0
		// static const ::System::String* SecureAttributeName; // 0x0
		// static const ::System::String* VersionAttributeName; // 0x0
		// static const ::System::String* HttpOnlyAttributeName; // 0x0
		// static const ::System::String* SeparatorLiteral; // 0x0
		// static const ::System::String* EqualsLiteral; // 0x0
		// static const ::System::String* QuotesLiteral; // 0x0
		// static const ::System::String* SpecialAttributeLiteral; // 0x0
		::System::String* m_domain; // 0x10
		::System::String* m_domainKey; // 0x18
		::System::String* m_value; // 0x20
		::System::Uri* m_commentUri; // 0x28
		::System::String* m_comment; // 0x30
		::System::String* m_port; // 0x38
		::Il2CppArray<::System::Int32>* m_port_list; // 0x40
		::System::String* m_name; // 0x48
		::System::String* m_path; // 0x50
		::System::Boolean m_discard; // 0x58
		::System::Boolean m_httpOnly; // 0x59
		::System::Boolean IsQuotedDomain; // 0x5A
		::System::Boolean m_port_implicit; // 0x5B
		::System::Boolean IsQuotedVersion; // 0x5C
		::System::Boolean m_domain_implicit; // 0x5D
		::System::Boolean m_secure; // 0x5E
		::System::Boolean m_path_implicit; // 0x5F
		::System::DateTime m_timeStamp; // 0x60
		::System::Net::CookieVariant m_cookieVariant; // 0x68
		::System::Int32 m_version; // 0x6C
		::System::DateTime m_expires; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* name, ::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE__CTOR_1_OFFSET))(this, name, value);
		}

		::System::Void _ctor_2(::System::String* name, ::System::String* value, ::System::String* path)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE__CTOR_2_OFFSET))(this, name, value, path);
		}

		::System::Void _ctor_3(::System::String* name, ::System::String* value, ::System::String* path, ::System::String* domain)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE__CTOR_3_OFFSET))(this, name, value, path, domain);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE__CCTOR_OFFSET))();
		}

		::System::String* get_Comment()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_GET_COMMENT_OFFSET))(this);
		}

		::System::Void set_Comment(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_SET_COMMENT_OFFSET))(this, value);
		}

		::System::Uri* get_CommentUri()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_GET_COMMENTURI_OFFSET))(this);
		}

		::System::Void set_CommentUri(::System::Uri* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_SET_COMMENTURI_OFFSET))(this, value);
		}

		::System::Boolean get_HttpOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_GET_HTTPONLY_OFFSET))(this);
		}

		::System::Void set_HttpOnly(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_SET_HTTPONLY_OFFSET))(this, value);
		}

		::System::Boolean get_Discard()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_GET_DISCARD_OFFSET))(this);
		}

		::System::Void set_Discard(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_SET_DISCARD_OFFSET))(this, value);
		}

		::System::String* get_Domain()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_GET_DOMAIN_OFFSET))(this);
		}

		::System::Void set_Domain(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_SET_DOMAIN_OFFSET))(this, value);
		}

		::System::String* get__Domain()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_GET__DOMAIN_OFFSET))(this);
		}

		::System::Boolean get_DomainImplicit()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_GET_DOMAINIMPLICIT_OFFSET))(this);
		}

		::System::Void set_DomainImplicit(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_SET_DOMAINIMPLICIT_OFFSET))(this, value);
		}

		::System::Boolean get_Expired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_GET_EXPIRED_OFFSET))(this);
		}

		::System::Void set_Expired(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_SET_EXPIRED_OFFSET))(this, value);
		}

		::System::DateTime get_Expires()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_GET_EXPIRES_OFFSET))(this);
		}

		::System::Void set_Expires(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_SET_EXPIRES_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_SET_NAME_OFFSET))(this, value);
		}

		::System::Boolean InternalSetName(::System::String* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_INTERNALSETNAME_OFFSET))(this, value);
		}

		::System::String* get_Path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_GET_PATH_OFFSET))(this);
		}

		::System::Void set_Path(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_SET_PATH_OFFSET))(this, value);
		}

		::System::String* get__Path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_GET__PATH_OFFSET))(this);
		}

		::System::Boolean get_Plain()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_GET_PLAIN_OFFSET))(this);
		}

		::System::Net::Cookie* Clone()
		{
			return ((::System::Net::Cookie*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_CLONE_OFFSET))(this);
		}

		static ::System::Boolean IsDomainEqualToHost(::System::String* domain, ::System::String* host)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_ISDOMAINEQUALTOHOST_OFFSET))(domain, host);
		}

		::System::Boolean VerifySetDefaults(::System::Net::CookieVariant variant, ::System::Uri* uri, ::System::Boolean isLocalDomain, ::System::String* localDomain, ::System::Boolean set_default, ::System::Boolean isThrow)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::CookieVariant, ::System::Uri*, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_VERIFYSETDEFAULTS_OFFSET))(this, variant, uri, isLocalDomain, localDomain, set_default, isThrow);
		}

		static ::System::Boolean DomainCharsTest(::System::String* name)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_DOMAINCHARSTEST_OFFSET))(name);
		}

		::System::String* get_Port()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_GET_PORT_OFFSET))(this);
		}

		::System::Void set_Port(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_SET_PORT_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Int32>* get_PortList()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_GET_PORTLIST_OFFSET))(this);
		}

		::System::String* get__Port()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_GET__PORT_OFFSET))(this);
		}

		::System::Boolean get_Secure()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_GET_SECURE_OFFSET))(this);
		}

		::System::Void set_Secure(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_SET_SECURE_OFFSET))(this, value);
		}

		::System::DateTime get_TimeStamp()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_GET_TIMESTAMP_OFFSET))(this);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_SET_VALUE_OFFSET))(this, value);
		}

		::System::Net::CookieVariant get_Variant()
		{
			return ((::System::Net::CookieVariant(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_GET_VARIANT_OFFSET))(this);
		}

		::System::Void set_Variant(::System::Net::CookieVariant value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::CookieVariant))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_SET_VARIANT_OFFSET))(this, value);
		}

		::System::String* get_DomainKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_GET_DOMAINKEY_OFFSET))(this);
		}

		::System::Int32 get_Version()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_GET_VERSION_OFFSET))(this);
		}

		::System::Void set_Version(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_SET_VERSION_OFFSET))(this, value);
		}

		::System::String* get__Version()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_GET__VERSION_OFFSET))(this);
		}

		static ::System::Collections::IComparer* GetComparer()
		{
			return ((::System::Collections::IComparer*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_GETCOMPARER_OFFSET))();
		}

		::System::Boolean Equals(::System::Object* comparand)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_EQUALS_OFFSET))(this, comparand);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_TOSTRING_OFFSET))(this);
		}

		::System::String* ToServerString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_TOSERVERSTRING_OFFSET))(this);
		}
	};
}
