#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Net/CookieVariant.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections { class IComparer; }
namespace System::Net { class Comparer; }

#define SYSTEM_NET_COOKIE_DOMAINCHARSTEST_OFFSET UNITYSDK_OFFSET(0x1AF5A3A0)
#define SYSTEM_NET_COOKIE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1AF5ABA0)
#define SYSTEM_NET_COOKIE_GETCOMPARER_OFFSET UNITYSDK_OFFSET(0x1AF5AB70)
#define SYSTEM_NET_COOKIE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1AF5AC30)
#define SYSTEM_NET_COOKIE_GET_COMMENT_OFFSET UNITYSDK_OFFSET(0x1AF59200)
#define SYSTEM_NET_COOKIE_GET_DOMAINKEY_OFFSET UNITYSDK_OFFSET(0x1AF5A9C0)
#define SYSTEM_NET_COOKIE_GET_DOMAIN_OFFSET UNITYSDK_OFFSET(0x1AF59260)
#define SYSTEM_NET_COOKIE_GET_EXPIRED_OFFSET UNITYSDK_OFFSET(0x1AF59350)
#define SYSTEM_NET_COOKIE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1AF59400)
#define SYSTEM_NET_COOKIE_GET_PATH_OFFSET UNITYSDK_OFFSET(0x1AF595F0)
#define SYSTEM_NET_COOKIE_GET_PLAIN_OFFSET UNITYSDK_OFFSET(0x1AF59340)
#define SYSTEM_NET_COOKIE_GET_PORTLIST_OFFSET UNITYSDK_OFFSET(0x1AF5A8B0)
#define SYSTEM_NET_COOKIE_GET_PORT_OFFSET UNITYSDK_OFFSET(0x1AF5A400)
#define SYSTEM_NET_COOKIE_GET_SECURE_OFFSET UNITYSDK_OFFSET(0x1AF5A950)
#define SYSTEM_NET_COOKIE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1AF5A970)
#define SYSTEM_NET_COOKIE_GET_VARIANT_OFFSET UNITYSDK_OFFSET(0x1AF5A9B0)
#define SYSTEM_NET_COOKIE_GET_VERSION_OFFSET UNITYSDK_OFFSET(0x1AF5A9E0)
#define SYSTEM_NET_COOKIE_GET__DOMAIN_OFFSET UNITYSDK_OFFSET(0x1AF592B0)
#define SYSTEM_NET_COOKIE_GET__PATH_OFFSET UNITYSDK_OFFSET(0x1AF59630)
#define SYSTEM_NET_COOKIE_GET__PORT_OFFSET UNITYSDK_OFFSET(0x1AF5A8C0)
#define SYSTEM_NET_COOKIE_GET__VERSION_OFFSET UNITYSDK_OFFSET(0x1AF5AA70)
#define SYSTEM_NET_COOKIE_INTERNALSETNAME_OFFSET UNITYSDK_OFFSET(0x1AF59530)
#define SYSTEM_NET_COOKIE_ISDOMAINEQUALTOHOST_OFFSET UNITYSDK_OFFSET(0x1AF596A0)
#define SYSTEM_NET_COOKIE_SET_COMMENTURI_OFFSET UNITYSDK_OFFSET(0x1AF59230)
#define SYSTEM_NET_COOKIE_SET_COMMENT_OFFSET UNITYSDK_OFFSET(0x1AF59210)
#define SYSTEM_NET_COOKIE_SET_DISCARD_OFFSET UNITYSDK_OFFSET(0x1AF59250)
#define SYSTEM_NET_COOKIE_SET_DOMAIN_OFFSET UNITYSDK_OFFSET(0x1AF59270)
#define SYSTEM_NET_COOKIE_SET_EXPIRES_OFFSET UNITYSDK_OFFSET(0x1AF593F0)
#define SYSTEM_NET_COOKIE_SET_HTTPONLY_OFFSET UNITYSDK_OFFSET(0x1AF59240)
#define SYSTEM_NET_COOKIE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1AF59410)
#define SYSTEM_NET_COOKIE_SET_PATH_OFFSET UNITYSDK_OFFSET(0x1AF59600)
#define SYSTEM_NET_COOKIE_SET_PORT_OFFSET UNITYSDK_OFFSET(0x1AF5A410)
#define SYSTEM_NET_COOKIE_SET_SECURE_OFFSET UNITYSDK_OFFSET(0x1AF5A960)
#define SYSTEM_NET_COOKIE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1AF5A980)
#define SYSTEM_NET_COOKIE_SET_VERSION_OFFSET UNITYSDK_OFFSET(0x1AF5A9F0)
#define SYSTEM_NET_COOKIE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1AF5B040)
#define SYSTEM_NET_COOKIE_VERIFYSETDEFAULTS_OFFSET UNITYSDK_OFFSET(0x1AF59700)
#define SYSTEM_NET_COOKIE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF5B4B0)
#define SYSTEM_NET_COOKIE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF59100)

namespace System::Net
{
	inline static constexpr unsigned int Cookie_TypeDefinitionIndex = 2783;

	class Cookie : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_Reserved2Value()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Cookie_TypeDefinitionIndex)->GetStaticField(0x23E70);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_PortSplitDelimiters()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Cookie_TypeDefinitionIndex)->GetStaticField(0x23E78);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_Reserved2Name()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(Cookie_TypeDefinitionIndex)->GetStaticField(0x23E80);
		}
		static ::System::Net::Comparer** StaticGet_staticComparer()
		{
			return (::System::Net::Comparer**)Il2CppClass::FromTypeDefinitionIndex(Cookie_TypeDefinitionIndex)->GetStaticField(0x23E88);
		}
		::System::Uri* m_commentUri; // 0x10
		::System::String* m_domainKey; // 0x18
		::System::String* m_value; // 0x20
		::Il2CppArray<::System::Int32>* m_port_list; // 0x28
		::System::String* m_comment; // 0x30
		::System::String* m_name; // 0x38
		::System::String* m_path; // 0x40
		::System::String* m_domain; // 0x48
		::System::String* m_port; // 0x50
		::System::DateTime m_expires; // 0x58
		::System::Net::CookieVariant m_cookieVariant; // 0x60
		::System::Int32 m_version; // 0x64
		::System::DateTime m_timeStamp; // 0x68
		::System::Boolean m_domain_implicit; // 0x70
		::System::Boolean m_secure; // 0x71
		::System::Boolean IsQuotedVersion; // 0x72
		::System::Boolean IsQuotedDomain; // 0x73
		::System::Boolean m_discard; // 0x74
		::System::Boolean m_httpOnly; // 0x75
		::System::Boolean m_path_implicit; // 0x76
		::System::Boolean m_port_implicit; // 0x77

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

		::System::Void set_Comment(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_SET_COMMENT_OFFSET))(this, a1);
		}

		::System::Void set_CommentUri(::System::Uri* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_SET_COMMENTURI_OFFSET))(this, a1);
		}

		::System::Void set_HttpOnly(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_SET_HTTPONLY_OFFSET))(this, a1);
		}

		::System::Void set_Discard(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_SET_DISCARD_OFFSET))(this, a1);
		}

		::System::String* get_Domain()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_GET_DOMAIN_OFFSET))(this);
		}

		::System::Void set_Domain(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_SET_DOMAIN_OFFSET))(this, a1);
		}

		::System::String* get__Domain()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_GET__DOMAIN_OFFSET))(this);
		}

		::System::Boolean get_Expired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_GET_EXPIRED_OFFSET))(this);
		}

		::System::Void set_Expires(::System::DateTime a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_SET_EXPIRES_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_SET_NAME_OFFSET))(this, a1);
		}

		::System::Boolean InternalSetName(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_INTERNALSETNAME_OFFSET))(this, a1);
		}

		::System::String* get_Path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_GET_PATH_OFFSET))(this);
		}

		::System::Void set_Path(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_SET_PATH_OFFSET))(this, a1);
		}

		::System::String* get__Path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_GET__PATH_OFFSET))(this);
		}

		::System::Boolean get_Plain()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_GET_PLAIN_OFFSET))(this);
		}

		static ::System::Boolean IsDomainEqualToHost(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_ISDOMAINEQUALTOHOST_OFFSET))(a1, a2);
		}

		::System::Boolean VerifySetDefaults(::System::Net::CookieVariant a1, ::System::Uri* a2, ::System::Boolean a3, ::System::String* a4, ::System::Boolean a5, ::System::Boolean a6)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::CookieVariant, ::System::Uri*, ::System::Boolean, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_VERIFYSETDEFAULTS_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean DomainCharsTest(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_DOMAINCHARSTEST_OFFSET))(a1);
		}

		::System::String* get_Port()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_GET_PORT_OFFSET))(this);
		}

		::System::Void set_Port(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_SET_PORT_OFFSET))(this, a1);
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

		::System::Void set_Secure(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_SET_SECURE_OFFSET))(this, a1);
		}

		::System::String* get_Value()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_SET_VALUE_OFFSET))(this, a1);
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

		::System::Void set_Version(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_SET_VERSION_OFFSET))(this, a1);
		}

		::System::String* get__Version()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_GET__VERSION_OFFSET))(this);
		}

		static ::System::Collections::IComparer* GetComparer()
		{
			return ((::System::Collections::IComparer*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_GETCOMPARER_OFFSET))();
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_COOKIE_EQUALS_OFFSET))(this, a1);
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
