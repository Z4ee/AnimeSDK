#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Uri; }

#define SYSTEM_URIBUILDER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1A1B1A40)
#define SYSTEM_URIBUILDER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1A1B1AA0)
#define SYSTEM_URIBUILDER_GET_QUERY_OFFSET UNITYSDK_OFFSET(0x1A1B1380)
#define SYSTEM_URIBUILDER_GET_URI_OFFSET UNITYSDK_OFFSET(0x1A1B1570)
#define SYSTEM_URIBUILDER_INIT_OFFSET UNITYSDK_OFFSET(0x1A1B0E60)
#define SYSTEM_URIBUILDER_SETFIELDSFROMURI_OFFSET UNITYSDK_OFFSET(0x1A1B10A0)
#define SYSTEM_URIBUILDER_SET_HOST_OFFSET UNITYSDK_OFFSET(0x1A1B11E0)
#define SYSTEM_URIBUILDER_SET_PATH_OFFSET UNITYSDK_OFFSET(0x1A1B1290)
#define SYSTEM_URIBUILDER_SET_QUERY_OFFSET UNITYSDK_OFFSET(0x1A1B1390)
#define SYSTEM_URIBUILDER_SET_SCHEME_OFFSET UNITYSDK_OFFSET(0x1A1B13E0)
#define SYSTEM_URIBUILDER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A1B1600)
#define SYSTEM_URIBUILDER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A1B0CC0)
#define SYSTEM_URIBUILDER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A1B0FB0)
#define SYSTEM_URIBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1B0C30)

namespace System
{
	inline static constexpr unsigned int UriBuilder_TypeDefinitionIndex = 2446;

	class UriBuilder : public ::System::Object
	{
	public:
		::System::String* _schemeDelimiter; // 0x10
		::System::String* _host; // 0x18
		::System::String* _username; // 0x20
		::System::String* _fragment; // 0x28
		::System::String* _password; // 0x30
		::System::String* _scheme; // 0x38
		::System::String* _path; // 0x40
		::System::String* _query; // 0x48
		::System::Uri* _uri; // 0x50
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
