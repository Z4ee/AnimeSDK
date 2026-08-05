#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Net/CookieVariant.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections { class IComparer; }
namespace System::Net { class Comparer; }

#define SYSTEM_NET_COOKIE_CLONE_OFFSET UNITYSDK_OFFSET(0x1D3FD160)
#define SYSTEM_NET_COOKIE_DOMAINCHARSTEST_OFFSET UNITYSDK_OFFSET(0x1D3FE6D0)
#define SYSTEM_NET_COOKIE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1D3FEB10)
#define SYSTEM_NET_COOKIE_GETCOMPARER_OFFSET UNITYSDK_OFFSET(0x1D3FEAB0)
#define SYSTEM_NET_COOKIE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1D3FEBD0)
#define SYSTEM_NET_COOKIE_GET_COMMENTURI_OFFSET UNITYSDK_OFFSET(0x1D3FCDE0)
#define SYSTEM_NET_COOKIE_GET_COMMENT_OFFSET UNITYSDK_OFFSET(0x1D3FCDB0)
#define SYSTEM_NET_COOKIE_GET_DISCARD_OFFSET UNITYSDK_OFFSET(0x1D3FCE20)
#define SYSTEM_NET_COOKIE_GET_DOMAINIMPLICIT_OFFSET UNITYSDK_OFFSET(0x1D3FCEF0)
#define SYSTEM_NET_COOKIE_GET_DOMAINKEY_OFFSET UNITYSDK_OFFSET(0x1D3FE940)
#define SYSTEM_NET_COOKIE_GET_DOMAIN_OFFSET UNITYSDK_OFFSET(0x1D3FCE40)
#define SYSTEM_NET_COOKIE_GET_EXPIRED_OFFSET UNITYSDK_OFFSET(0x1D3FCF10)
#define SYSTEM_NET_COOKIE_GET_EXPIRES_OFFSET UNITYSDK_OFFSET(0x1D3FCF80)
#define SYSTEM_NET_COOKIE_GET_HTTPONLY_OFFSET UNITYSDK_OFFSET(0x1D3FCE00)
#define SYSTEM_NET_COOKIE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1D3FCFA0)
#define SYSTEM_NET_COOKIE_GET_PATH_OFFSET UNITYSDK_OFFSET(0x1D3FD0E0)
#define SYSTEM_NET_COOKIE_GET_PLAIN_OFFSET UNITYSDK_OFFSET(0x1D3FCEE0)
#define SYSTEM_NET_COOKIE_GET_PORTLIST_OFFSET UNITYSDK_OFFSET(0x1D3FE810)
#define SYSTEM_NET_COOKIE_GET_PORT_OFFSET UNITYSDK_OFFSET(0x1D3FE800)
#define SYSTEM_NET_COOKIE_GET_SECURE_OFFSET UNITYSDK_OFFSET(0x1D3FE8B0)
#define SYSTEM_NET_COOKIE_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1D3FE8D0)
#define SYSTEM_NET_COOKIE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D3FE8E0)
#define SYSTEM_NET_COOKIE_GET_VARIANT_OFFSET UNITYSDK_OFFSET(0x1D3FE920)
#define SYSTEM_NET_COOKIE_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1D3FE950)
#define SYSTEM_NET_COOKIE_GET__DOMAIN_OFFSET UNITYSDK_OFFSET(0x1D3FCE50)
#define SYSTEM_NET_COOKIE_GET__PATH_OFFSET UNITYSDK_OFFSET(0x1D3FD0F0)
#define SYSTEM_NET_COOKIE_GET__PORT_OFFSET UNITYSDK_OFFSET(0x1D3FE820)
#define SYSTEM_NET_COOKIE_GET__VERSION_OFFSET UNITYSDK_OFFSET(0x1D3FE960)
#define SYSTEM_NET_COOKIE_INTERNALSETNAME_OFFSET UNITYSDK_OFFSET(0x1D3FCFB0)
#define SYSTEM_NET_COOKIE_ISDOMAINEQUALTOHOST_OFFSET UNITYSDK_OFFSET(0x1D3FD870)
#define SYSTEM_NET_COOKIE_SET_COMMENTURI_OFFSET UNITYSDK_OFFSET(0x1D3FCDF0)
#define SYSTEM_NET_COOKIE_SET_COMMENT_OFFSET UNITYSDK_OFFSET(0x1D3FCDC0)
#define SYSTEM_NET_COOKIE_SET_DISCARD_OFFSET UNITYSDK_OFFSET(0x1D3FCE30)
#define SYSTEM_NET_COOKIE_SET_DOMAINIMPLICIT_OFFSET UNITYSDK_OFFSET(0x1D3FCF00)
#define SYSTEM_NET_COOKIE_SET_DOMAIN_OFFSET UNITYSDK_OFFSET(0x1D3FCD70)
#define SYSTEM_NET_COOKIE_SET_EXPIRED_OFFSET UNITYSDK_OFFSET(0x1D3FCF60)
#define SYSTEM_NET_COOKIE_SET_EXPIRES_OFFSET UNITYSDK_OFFSET(0x1D3FCF90)
#define SYSTEM_NET_COOKIE_SET_HTTPONLY_OFFSET UNITYSDK_OFFSET(0x1D3FCE10)
#define SYSTEM_NET_COOKIE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1D3FCA90)
#define SYSTEM_NET_COOKIE_SET_PATH_OFFSET UNITYSDK_OFFSET(0x1D3FCC60)
#define SYSTEM_NET_COOKIE_SET_PORT_OFFSET UNITYSDK_OFFSET(0x1D3FD370)
#define SYSTEM_NET_COOKIE_SET_SECURE_OFFSET UNITYSDK_OFFSET(0x1D3FE8C0)
#define SYSTEM_NET_COOKIE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D3FE8F0)
#define SYSTEM_NET_COOKIE_SET_VARIANT_OFFSET UNITYSDK_OFFSET(0x1D3FE930)
#define SYSTEM_NET_COOKIE_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x1D3FD7F0)
#define SYSTEM_NET_COOKIE_TOSERVERSTRING_OFFSET UNITYSDK_OFFSET(0x1D3FF6A0)
#define SYSTEM_NET_COOKIE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1D3FF120)
#define SYSTEM_NET_COOKIE_VERIFYSETDEFAULTS_OFFSET UNITYSDK_OFFSET(0x1D3FD8D0)
#define SYSTEM_NET_COOKIE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3FFA80)
#define SYSTEM_NET_COOKIE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D3FCA00)
#define SYSTEM_NET_COOKIE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1D3FCBB0)
#define SYSTEM_NET_COOKIE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1D3FCC90)
#define SYSTEM_NET_COOKIE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3FC980)

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
		::System::String* m_name; // 0x10
		::System::Uri* m_commentUri; // 0x18
		::System::String* m_comment; // 0x20
		::System::String* m_path; // 0x28
		::System::String* m_port; // 0x30
		::System::String* m_domainKey; // 0x38
		::System::String* m_domain; // 0x40
		::Il2CppArray<::System::Int32>* m_port_list; // 0x48
		::System::String* m_value; // 0x50
		::System::Int32 m_version; // 0x58
		::System::Boolean m_domain_implicit; // 0x5C
		::System::Boolean IsQuotedDomain; // 0x5D
		::System::Boolean IsQuotedVersion; // 0x5E
		::System::Boolean m_secure; // 0x5F
		::System::DateTime m_expires; // 0x60
		::System::DateTime m_timeStamp; // 0x68
		::System::Net::CookieVariant m_cookieVariant; // 0x70
		::System::Boolean m_path_implicit; // 0x74
		::System::Boolean m_discard; // 0x75
		::System::Boolean m_port_implicit; // 0x76
		::System::Boolean m_httpOnly; // 0x77

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
