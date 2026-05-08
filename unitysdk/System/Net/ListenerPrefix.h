#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Net { class HttpListener; }
namespace System::Net { class IPAddress; }

#define SYSTEM_NET_LISTENERPREFIX_CHECKURI_OFFSET UNITYSDK_OFFSET(0x1B1EBDF0)
#define SYSTEM_NET_LISTENERPREFIX_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B1EBCE0)
#define SYSTEM_NET_LISTENERPREFIX_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B1EBD60)
#define SYSTEM_NET_LISTENERPREFIX_GET_ADDRESSES_OFFSET UNITYSDK_OFFSET(0x1B1EBC80)
#define SYSTEM_NET_LISTENERPREFIX_GET_HOST_OFFSET UNITYSDK_OFFSET(0x1B1EBCB0)
#define SYSTEM_NET_LISTENERPREFIX_GET_PATH_OFFSET UNITYSDK_OFFSET(0x1B1EBCD0)
#define SYSTEM_NET_LISTENERPREFIX_GET_PORT_OFFSET UNITYSDK_OFFSET(0x1B1EBCC0)
#define SYSTEM_NET_LISTENERPREFIX_GET_SECURE_OFFSET UNITYSDK_OFFSET(0x1B1EBCA0)
#define SYSTEM_NET_LISTENERPREFIX_PARSE_OFFSET UNITYSDK_OFFSET(0x1B1EB8E0)
#define SYSTEM_NET_LISTENERPREFIX_SET_ADDRESSES_OFFSET UNITYSDK_OFFSET(0x1B1EBC90)
#define SYSTEM_NET_LISTENERPREFIX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B1EBC70)
#define SYSTEM_NET_LISTENERPREFIX__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1EB8D0)

namespace System::Net
{
	inline static constexpr unsigned int ListenerPrefix_TypeDefinitionIndex = 3545;

	class ListenerPrefix : public ::System::Object
	{
	public:
		::System::String* original; // 0x10
		::System::String* path; // 0x18
		::System::String* host; // 0x20
		::Il2CppArray<::System::Net::IPAddress*>* addresses; // 0x28
		::System::Net::HttpListener* Listener; // 0x30
		::System::Boolean secure; // 0x38
		::System::UInt16 port; // 0x3A

		::System::Void _ctor(::System::String* prefix)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LISTENERPREFIX__CTOR_OFFSET))(this, prefix);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_LISTENERPREFIX_TOSTRING_OFFSET))(this);
		}

		::Il2CppArray<::System::Net::IPAddress*>* get_Addresses()
		{
			return ((::Il2CppArray<::System::Net::IPAddress*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_LISTENERPREFIX_GET_ADDRESSES_OFFSET))(this);
		}

		::System::Void set_Addresses(::Il2CppArray<::System::Net::IPAddress*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Net::IPAddress*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_LISTENERPREFIX_SET_ADDRESSES_OFFSET))(this, value);
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
