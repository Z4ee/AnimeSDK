#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Net/CookieVariant.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections { class IComparer; }
namespace System::Net { class Comparer; }

#define SYSTEM_NET_COOKIE_DOMAINCHARSTEST_OFFSET UNITYSDK_OFFSET(0x186B9A40)
#define SYSTEM_NET_COOKIE_EQUALS_OFFSET UNITYSDK_OFFSET(0x186BA180)
#define SYSTEM_NET_COOKIE_GETCOMPARER_OFFSET UNITYSDK_OFFSET(0x186BA150)
#define SYSTEM_NET_COOKIE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x186BA210)
#define SYSTEM_NET_COOKIE_GET_COMMENT_OFFSET UNITYSDK_OFFSET(0x186B8830)
#define SYSTEM_NET_COOKIE_GET_DOMAINKEY_OFFSET UNITYSDK_OFFSET(0x186BA010)
#define SYSTEM_NET_COOKIE_GET_DOMAIN_OFFSET UNITYSDK_OFFSET(0x186B8890)
#define SYSTEM_NET_COOKIE_GET_EXPIRED_OFFSET UNITYSDK_OFFSET(0x186B8980)
#define SYSTEM_NET_COOKIE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x186B8A30)
#define SYSTEM_NET_COOKIE_GET_PATH_OFFSET UNITYSDK_OFFSET(0x186B8C20)
#define SYSTEM_NET_COOKIE_GET_PLAIN_OFFSET UNITYSDK_OFFSET(0x186B8970)
#define SYSTEM_NET_COOKIE_GET_PORTLIST_OFFSET UNITYSDK_OFFSET(0x186B9F00)
#define SYSTEM_NET_COOKIE_GET_PORT_OFFSET UNITYSDK_OFFSET(0x186B9AA0)
#define SYSTEM_NET_COOKIE_GET_SECURE_OFFSET UNITYSDK_OFFSET(0x186B9FA0)
#define SYSTEM_NET_COOKIE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x186B9FC0)
#define SYSTEM_NET_COOKIE_GET_VARIANT_OFFSET UNITYSDK_OFFSET(0x186BA000)
#define SYSTEM_NET_COOKIE_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x186BA030)
#define SYSTEM_NET_COOKIE_GET__DOMAIN_OFFSET UNITYSDK_OFFSET(0x186B88E0)
#define SYSTEM_NET_COOKIE_GET__PATH_OFFSET UNITYSDK_OFFSET(0x186B8C60)
#define SYSTEM_NET_COOKIE_GET__PORT_OFFSET UNITYSDK_OFFSET(0x186B9F10)
#define SYSTEM_NET_COOKIE_GET__VERSION_OFFSET UNITYSDK_OFFSET(0x186BA0C0)
#define SYSTEM_NET_COOKIE_INTERNALSETNAME_OFFSET UNITYSDK_OFFSET(0x186B8B60)
#define SYSTEM_NET_COOKIE_ISDOMAINEQUALTOHOST_OFFSET UNITYSDK_OFFSET(0x186B8CD0)
#define SYSTEM_NET_COOKIE_SET_COMMENTURI_OFFSET UNITYSDK_OFFSET(0x186B8860)
#define SYSTEM_NET_COOKIE_SET_COMMENT_OFFSET UNITYSDK_OFFSET(0x186B8840)
#define SYSTEM_NET_COOKIE_SET_DISCARD_OFFSET UNITYSDK_OFFSET(0x186B8880)
#define SYSTEM_NET_COOKIE_SET_DOMAIN_OFFSET UNITYSDK_OFFSET(0x186B88A0)
#define SYSTEM_NET_COOKIE_SET_EXPIRES_OFFSET UNITYSDK_OFFSET(0x186B8A20)
#define SYSTEM_NET_COOKIE_SET_HTTPONLY_OFFSET UNITYSDK_OFFSET(0x186B8870)
#define SYSTEM_NET_COOKIE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x186B8A40)
#define SYSTEM_NET_COOKIE_SET_PATH_OFFSET UNITYSDK_OFFSET(0x186B8C30)
#define SYSTEM_NET_COOKIE_SET_PORT_OFFSET UNITYSDK_OFFSET(0x186B9AB0)
#define SYSTEM_NET_COOKIE_SET_SECURE_OFFSET UNITYSDK_OFFSET(0x186B9FB0)
#define SYSTEM_NET_COOKIE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x186B9FD0)
#define SYSTEM_NET_COOKIE_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x186BA040)
#define SYSTEM_NET_COOKIE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x186BA740)
#define SYSTEM_NET_COOKIE_VERIFYSETDEFAULTS_OFFSET UNITYSDK_OFFSET(0x186B8D30)
#define SYSTEM_NET_COOKIE__CCTOR_OFFSET UNITYSDK_OFFSET(0x186BABC0)
#define SYSTEM_NET_COOKIE__CTOR_OFFSET UNITYSDK_OFFSET(0x186B8730)

namespace System::Net
{
	inline static constexpr unsigned int Cookie_TypeDefinitionIndex = 2782;

	class Cookie : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_PortSplitDelimiters()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Cookie_TypeDefinitionIndex)->GetStaticField(0x11820);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_Reserved2Name()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Cookie_TypeDefinitionIndex)->GetStaticField(0x11828);
		}
		static ::System::Net::Comparer** StaticGet_staticComparer()
		{
			return (::System::Net::Comparer**)Il2CppClass::FromTypeDefinitionIndex(Cookie_TypeDefinitionIndex)->GetStaticField(0x11830);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_Reserved2Value()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Cookie_TypeDefinitionIndex)->GetStaticField(0x11838);
		}
		::System::String* m_comment; // 0x10
		::System::String* m_domain; // 0x18
		::System::String* m_port; // 0x20
		::System::Uri* m_commentUri; // 0x28
		::System::String* m_path; // 0x30
		::System::String* m_name; // 0x38
		::System::String* m_domainKey; // 0x40
		::System::String* m_value; // 0x48
		::Il2CppArray<::System::Int32>* m_port_list; // 0x50
		::System::DateTime m_expires; // 0x58
		::System::Boolean m_port_implicit; // 0x60
		::System::Boolean m_path_implicit; // 0x61
		::System::Boolean m_discard; // 0x62
		::System::Boolean IsQuotedDomain; // 0x63
		::System::Net::CookieVariant m_cookieVariant; // 0x64
		::System::Boolean m_domain_implicit; // 0x68
		::System::Boolean IsQuotedVersion; // 0x69
		::System::Boolean m_httpOnly; // 0x6A
		::System::Boolean m_secure; // 0x6B
		::System::Int32 m_version; // 0x6C
		::System::DateTime m_timeStamp; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE__CTOR_OFFSET))(this);
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

		::System::Void set_CommentUri(::System::Uri* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_SET_COMMENTURI_OFFSET))(this, value);
		}

		::System::Void set_HttpOnly(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_SET_HTTPONLY_OFFSET))(this, value);
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

		::System::Boolean get_Expired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_GET_EXPIRED_OFFSET))(this);
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
	};
}
