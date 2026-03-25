#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Uri; }

#define SYSTEM_URIBUILDER_EQUALS_OFFSET UNITYSDK_OFFSET(0x18777900)
#define SYSTEM_URIBUILDER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18777960)
#define SYSTEM_URIBUILDER_GET_QUERY_OFFSET UNITYSDK_OFFSET(0x18777240)
#define SYSTEM_URIBUILDER_GET_URI_OFFSET UNITYSDK_OFFSET(0x18777430)
#define SYSTEM_URIBUILDER_INIT_OFFSET UNITYSDK_OFFSET(0x18776C40)
#define SYSTEM_URIBUILDER_SETFIELDSFROMURI_OFFSET UNITYSDK_OFFSET(0x18776EF0)
#define SYSTEM_URIBUILDER_SET_HOST_OFFSET UNITYSDK_OFFSET(0x187770A0)
#define SYSTEM_URIBUILDER_SET_PATH_OFFSET UNITYSDK_OFFSET(0x18777150)
#define SYSTEM_URIBUILDER_SET_QUERY_OFFSET UNITYSDK_OFFSET(0x18777250)
#define SYSTEM_URIBUILDER_SET_SCHEME_OFFSET UNITYSDK_OFFSET(0x187772A0)
#define SYSTEM_URIBUILDER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x187774C0)
#define SYSTEM_URIBUILDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18776AA0)
#define SYSTEM_URIBUILDER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x18776E00)
#define SYSTEM_URIBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x18776A10)

namespace System
{
	inline static constexpr unsigned int UriBuilder_TypeDefinitionIndex = 2445;

	class UriBuilder : public ::System::Object
	{
	public:
		::System::String* _fragment; // 0x10
		::System::String* _username; // 0x18
		::System::String* _host; // 0x20
		::System::String* _password; // 0x28
		::System::String* _query; // 0x30
		::System::Uri* _uri; // 0x38
		::System::String* _schemeDelimiter; // 0x40
		::System::String* _path; // 0x48
		::System::String* _scheme; // 0x50
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

		::System::Void Init(::System::Uri* uri)
		{
			return ((::System::Void(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_INIT_OFFSET))(this, uri);
		}

		::System::Void set_Host(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_SET_HOST_OFFSET))(this, value);
		}

		::System::Void set_Path(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_SET_PATH_OFFSET))(this, value);
		}

		::System::String* get_Query()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_GET_QUERY_OFFSET))(this);
		}

		::System::Void set_Query(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_SET_QUERY_OFFSET))(this, value);
		}

		::System::Void set_Scheme(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_SET_SCHEME_OFFSET))(this, value);
		}

		::System::Uri* get_Uri()
		{
			return ((::System::Uri*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_URIBUILDER_GET_URI_OFFSET))(this);
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
