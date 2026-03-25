#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net { class HttpListener; }

#define SYSTEM_NET_LISTENERPREFIX_CHECKURI_OFFSET UNITYSDK_OFFSET(0x186E6BD0)
#define SYSTEM_NET_LISTENERPREFIX_EQUALS_OFFSET UNITYSDK_OFFSET(0x186F8510)
#define SYSTEM_NET_LISTENERPREFIX_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x186F8590)
#define SYSTEM_NET_LISTENERPREFIX_GET_HOST_OFFSET UNITYSDK_OFFSET(0x186F84E0)
#define SYSTEM_NET_LISTENERPREFIX_GET_PATH_OFFSET UNITYSDK_OFFSET(0x186F8500)
#define SYSTEM_NET_LISTENERPREFIX_GET_PORT_OFFSET UNITYSDK_OFFSET(0x186F84F0)
#define SYSTEM_NET_LISTENERPREFIX_GET_SECURE_OFFSET UNITYSDK_OFFSET(0x186F84D0)
#define SYSTEM_NET_LISTENERPREFIX_PARSE_OFFSET UNITYSDK_OFFSET(0x186F8150)
#define SYSTEM_NET_LISTENERPREFIX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x186F84C0)
#define SYSTEM_NET_LISTENERPREFIX__CTOR_OFFSET UNITYSDK_OFFSET(0x186CE310)

namespace System::Net
{
	inline static constexpr unsigned int ListenerPrefix_TypeDefinitionIndex = 2854;

	class ListenerPrefix : public ::System::Object
	{
	public:
		::System::Net::HttpListener* Listener; // 0x10
		::System::String* path; // 0x18
		::System::String* host; // 0x20
		::System::String* original; // 0x28
		::System::Boolean secure; // 0x30
		::System::UInt16 port; // 0x32

		::System::Void _ctor(::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LISTENERPREFIX__CTOR_OFFSET))(this, prefix);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_LISTENERPREFIX_TOSTRING_OFFSET))(this);
		}

		::System::Boolean get_Secure()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_LISTENERPREFIX_GET_SECURE_OFFSET))(this);
		}

		::System::String* get_Host()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_LISTENERPREFIX_GET_HOST_OFFSET))(this);
		}

		::System::Int32 get_Port()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_LISTENERPREFIX_GET_PORT_OFFSET))(this);
		}

		::System::String* get_Path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_LISTENERPREFIX_GET_PATH_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LISTENERPREFIX_EQUALS_OFFSET))(this, o);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_LISTENERPREFIX_GETHASHCODE_OFFSET))(this);
		}

		::System::Void Parse(::System::String* uri)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LISTENERPREFIX_PARSE_OFFSET))(this, uri);
		}

		static ::System::Void CheckUri(::System::String* uri)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LISTENERPREFIX_CHECKURI_OFFSET))(uri);
		}
	};
}
