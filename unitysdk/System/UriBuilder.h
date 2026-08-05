#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Uri; }

#define SYSTEM_URIBUILDER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DB9C4D0)
#define SYSTEM_URIBUILDER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DB9C600)
#define SYSTEM_URIBUILDER_GET_FRAGMENT_OFFSET UNITYSDK_OFFSET(0x1DB9BEB0)
#define SYSTEM_URIBUILDER_GET_HOST_OFFSET UNITYSDK_OFFSET(0x1DB9BEC0)
#define SYSTEM_URIBUILDER_GET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1DB9BED0)
#define SYSTEM_URIBUILDER_GET_PATH_OFFSET UNITYSDK_OFFSET(0x1DB9BF10)
#define SYSTEM_URIBUILDER_GET_PORT_OFFSET UNITYSDK_OFFSET(0x1DB9BF20)
#define SYSTEM_URIBUILDER_GET_QUERY_OFFSET UNITYSDK_OFFSET(0x1DB9BF30)
#define SYSTEM_URIBUILDER_GET_SCHEME_OFFSET UNITYSDK_OFFSET(0x1DB9BF40)
#define SYSTEM_URIBUILDER_GET_URI_OFFSET UNITYSDK_OFFSET(0x1DB9BF50)
#define SYSTEM_URIBUILDER_GET_USERNAME_OFFSET UNITYSDK_OFFSET(0x1DB9C490)
#define SYSTEM_URIBUILDER_INIT_OFFSET UNITYSDK_OFFSET(0x1DB9A9D0)
#define SYSTEM_URIBUILDER_SETFIELDSFROMURI_OFFSET UNITYSDK_OFFSET(0x1DB9AD40)
#define SYSTEM_URIBUILDER_SET_EXTRA_OFFSET UNITYSDK_OFFSET(0x1DB9B810)
#define SYSTEM_URIBUILDER_SET_FRAGMENT_OFFSET UNITYSDK_OFFSET(0x1DB9BD30)
#define SYSTEM_URIBUILDER_SET_HOST_OFFSET UNITYSDK_OFFSET(0x1DB9B1B0)
#define SYSTEM_URIBUILDER_SET_PASSWORD_OFFSET UNITYSDK_OFFSET(0x1DB9BEE0)
#define SYSTEM_URIBUILDER_SET_PATH_OFFSET UNITYSDK_OFFSET(0x1DB9B650)
#define SYSTEM_URIBUILDER_SET_PORT_OFFSET UNITYSDK_OFFSET(0x1DB9B3F0)
#define SYSTEM_URIBUILDER_SET_QUERY_OFFSET UNITYSDK_OFFSET(0x1DB9BDF0)
#define SYSTEM_URIBUILDER_SET_SCHEME_OFFSET UNITYSDK_OFFSET(0x1DB9B090)
#define SYSTEM_URIBUILDER_SET_USERNAME_OFFSET UNITYSDK_OFFSET(0x1DB9C4A0)
#define SYSTEM_URIBUILDER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DB9C030)
#define SYSTEM_URIBUILDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DB9A7B0)
#define SYSTEM_URIBUILDER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1DB9AC50)
#define SYSTEM_URIBUILDER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1DB9AFC0)
#define SYSTEM_URIBUILDER__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1DB9B2B0)
#define SYSTEM_URIBUILDER__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1DB9B470)
#define SYSTEM_URIBUILDER__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1DB9B6E0)
#define SYSTEM_URIBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB9A700)

namespace System
{
	inline static constexpr unsigned int UriBuilder_TypeDefinitionIndex = 2656;

	class UriBuilder : public ::System::Object
	{
	public:
		::System::String* _password; // 0x10
		::System::String* _host; // 0x18
		::System::Uri* _uri; // 0x20
		::System::String* _schemeDelimiter; // 0x28
		::System::String* _scheme; // 0x30
		::System::String* _path; // 0x38
		::System::String* _query; // 0x40
		::System::String* _username; // 0x48
		::System::String* _fragment; // 0x50
		::System::Int32 _port; // 0x58
		::System::Boolean _changed; // 0x5C

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
