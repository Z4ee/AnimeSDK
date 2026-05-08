#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Uri; }

#define SYSTEM_URIBUILDER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A33CB90)
#define SYSTEM_URIBUILDER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A33CCC0)
#define SYSTEM_URIBUILDER_GET_FRAGMENT_OFFSET UNITYSDK_OFFSET(0x1A33C560)
#define SYSTEM_URIBUILDER_GET_HOST_OFFSET UNITYSDK_OFFSET(0x1A33C570)
#define SYSTEM_URIBUILDER_GET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1A33C580)
#define SYSTEM_URIBUILDER_GET_PATH_OFFSET UNITYSDK_OFFSET(0x1A33C5C0)
#define SYSTEM_URIBUILDER_GET_PORT_OFFSET UNITYSDK_OFFSET(0x1A33C5D0)
#define SYSTEM_URIBUILDER_GET_QUERY_OFFSET UNITYSDK_OFFSET(0x1A33C5E0)
#define SYSTEM_URIBUILDER_GET_SCHEME_OFFSET UNITYSDK_OFFSET(0x1A33C5F0)
#define SYSTEM_URIBUILDER_GET_URI_OFFSET UNITYSDK_OFFSET(0x1A33C600)
#define SYSTEM_URIBUILDER_GET_USERNAME_OFFSET UNITYSDK_OFFSET(0x1A33CB50)
#define SYSTEM_URIBUILDER_INIT_OFFSET UNITYSDK_OFFSET(0x1A33B080)
#define SYSTEM_URIBUILDER_SETFIELDSFROMURI_OFFSET UNITYSDK_OFFSET(0x1A33B3F0)
#define SYSTEM_URIBUILDER_SET_EXTRA_OFFSET UNITYSDK_OFFSET(0x1A33BEC0)
#define SYSTEM_URIBUILDER_SET_FRAGMENT_OFFSET UNITYSDK_OFFSET(0x1A33C3E0)
#define SYSTEM_URIBUILDER_SET_HOST_OFFSET UNITYSDK_OFFSET(0x1A33B860)
#define SYSTEM_URIBUILDER_SET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1A33C590)
#define SYSTEM_URIBUILDER_SET_PATH_OFFSET UNITYSDK_OFFSET(0x1A33BD00)
#define SYSTEM_URIBUILDER_SET_PORT_OFFSET UNITYSDK_OFFSET(0x1A33BAA0)
#define SYSTEM_URIBUILDER_SET_QUERY_OFFSET UNITYSDK_OFFSET(0x1A33C4A0)
#define SYSTEM_URIBUILDER_SET_SCHEME_OFFSET UNITYSDK_OFFSET(0x1A33B740)
#define SYSTEM_URIBUILDER_SET_USERNAME_OFFSET UNITYSDK_OFFSET(0x1A33CB60)
#define SYSTEM_URIBUILDER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A33C6E0)
#define SYSTEM_URIBUILDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A33AE60)
#define SYSTEM_URIBUILDER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A33B300)
#define SYSTEM_URIBUILDER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1A33B670)
#define SYSTEM_URIBUILDER__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1A33B960)
#define SYSTEM_URIBUILDER__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1A33BB20)
#define SYSTEM_URIBUILDER__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1A33BD90)
#define SYSTEM_URIBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A33ADB0)

namespace System
{
	inline static constexpr unsigned int UriBuilder_TypeDefinitionIndex = 2657;

	class UriBuilder : public ::System::Object
	{
	public:
		::System::String* _fragment; // 0x10
		::System::String* _query; // 0x18
		::System::String* _password; // 0x20
		::System::String* _schemeDelimiter; // 0x28
		::System::String* _scheme; // 0x30
		::System::String* _host; // 0x38
		::System::String* _username; // 0x40
		::System::String* _path; // 0x48
		::System::Uri* _uri; // 0x50
		::System::Boolean _changed; // 0x58
		::System::Int32 _port; // 0x5C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* uri)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER__CTOR_1_OFFSET))(this, uri);
		}

		::System::Void _ctor_2(::System::Uri* uri)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER__CTOR_2_OFFSET))(this, uri);
		}

		::System::Void _ctor_3(::System::String* schemeName, ::System::String* hostName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER__CTOR_3_OFFSET))(this, schemeName, hostName);
		}

		::System::Void _ctor_4(::System::String* scheme, ::System::String* host, ::System::Int32 portNumber)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER__CTOR_4_OFFSET))(this, scheme, host, portNumber);
		}

		::System::Void _ctor_5(::System::String* scheme, ::System::String* host, ::System::Int32 port, ::System::String* pathValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER__CTOR_5_OFFSET))(this, scheme, host, port, pathValue);
		}

		::System::Void _ctor_6(::System::String* scheme, ::System::String* host, ::System::Int32 port, ::System::String* path, ::System::String* extraValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER__CTOR_6_OFFSET))(this, scheme, host, port, path, extraValue);
		}

		::System::Void Init(::System::Uri* uri)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_INIT_OFFSET))(this, uri);
		}

		::System::Void set_Extra(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_SET_EXTRA_OFFSET))(this, value);
		}

		::System::String* get_Fragment()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_GET_FRAGMENT_OFFSET))(this);
		}

		::System::Void set_Fragment(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_SET_FRAGMENT_OFFSET))(this, value);
		}

		::System::String* get_Host()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_GET_HOST_OFFSET))(this);
		}

		::System::Void set_Host(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_SET_HOST_OFFSET))(this, value);
		}

		::System::String* get_Password()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_GET_PASSWORD_OFFSET))(this);
		}

		::System::Void set_Password(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_SET_PASSWORD_OFFSET))(this, value);
		}

		::System::String* get_Path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_GET_PATH_OFFSET))(this);
		}

		::System::Void set_Path(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_SET_PATH_OFFSET))(this, value);
		}

		::System::Int32 get_Port()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_GET_PORT_OFFSET))(this);
		}

		::System::Void set_Port(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_SET_PORT_OFFSET))(this, value);
		}

		::System::String* get_Query()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_GET_QUERY_OFFSET))(this);
		}

		::System::Void set_Query(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_SET_QUERY_OFFSET))(this, value);
		}

		::System::String* get_Scheme()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_GET_SCHEME_OFFSET))(this);
		}

		::System::Void set_Scheme(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_SET_SCHEME_OFFSET))(this, value);
		}

		::System::Uri* get_Uri()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_GET_URI_OFFSET))(this);
		}

		::System::String* get_UserName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_GET_USERNAME_OFFSET))(this);
		}

		::System::Void set_UserName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_SET_USERNAME_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* rparam)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_EQUALS_OFFSET))(this, rparam);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_GETHASHCODE_OFFSET))(this);
		}

		::System::Void SetFieldsFromUri(::System::Uri* uri)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_SETFIELDSFROMURI_OFFSET))(this, uri);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_TOSTRING_OFFSET))(this);
		}
	};
}
