#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_HTTP_HTTPMETHOD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x18538800)
#define SYSTEM_NET_HTTP_HTTPMETHOD_EQUALS_OFFSET UNITYSDK_OFFSET(0x185387D0)
#define SYSTEM_NET_HTTP_HTTPMETHOD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x18538850)
#define SYSTEM_NET_HTTP_HTTPMETHOD_GET_GET_OFFSET UNITYSDK_OFFSET(0x18538730)
#define SYSTEM_NET_HTTP_HTTPMETHOD_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x18538760)
#define SYSTEM_NET_HTTP_HTTPMETHOD_GET_POST_OFFSET UNITYSDK_OFFSET(0x18538770)
#define SYSTEM_NET_HTTP_HTTPMETHOD_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x185387A0)
#define SYSTEM_NET_HTTP_HTTPMETHOD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x185388E0)
#define SYSTEM_NET_HTTP_HTTPMETHOD__CCTOR_OFFSET UNITYSDK_OFFSET(0x185388F0)
#define SYSTEM_NET_HTTP_HTTPMETHOD__CTOR_OFFSET UNITYSDK_OFFSET(0x185386D0)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpMethod_TypeDefinitionIndex = 4783;

	class HttpMethod : public ::System::Object
	{
	public:
		static ::System::Net::Http::HttpMethod** StaticGet_head_method()
		{
			return (::System::Net::Http::HttpMethod**)Il2CppClass::FromTypeDefinitionIndex(HttpMethod_TypeDefinitionIndex)->GetStaticField(0x15530);
		}
		static ::System::Net::Http::HttpMethod** StaticGet_delete_method()
		{
			return (::System::Net::Http::HttpMethod**)Il2CppClass::FromTypeDefinitionIndex(HttpMethod_TypeDefinitionIndex)->GetStaticField(0x15538);
		}
		static ::System::Net::Http::HttpMethod** StaticGet_get_method()
		{
			return (::System::Net::Http::HttpMethod**)Il2CppClass::FromTypeDefinitionIndex(HttpMethod_TypeDefinitionIndex)->GetStaticField(0x15540);
		}
		static ::System::Net::Http::HttpMethod** StaticGet_put_method()
		{
			return (::System::Net::Http::HttpMethod**)Il2CppClass::FromTypeDefinitionIndex(HttpMethod_TypeDefinitionIndex)->GetStaticField(0x15548);
		}
		static ::System::Net::Http::HttpMethod** StaticGet_options_method()
		{
			return (::System::Net::Http::HttpMethod**)Il2CppClass::FromTypeDefinitionIndex(HttpMethod_TypeDefinitionIndex)->GetStaticField(0x15550);
		}
		static ::System::Net::Http::HttpMethod** StaticGet_trace_method()
		{
			return (::System::Net::Http::HttpMethod**)Il2CppClass::FromTypeDefinitionIndex(HttpMethod_TypeDefinitionIndex)->GetStaticField(0x15558);
		}
		static ::System::Net::Http::HttpMethod** StaticGet_post_method()
		{
			return (::System::Net::Http::HttpMethod**)Il2CppClass::FromTypeDefinitionIndex(HttpMethod_TypeDefinitionIndex)->GetStaticField(0x15560);
		}
		::System::String* method; // 0x10

		::System::Void _ctor(::System::String* method)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMETHOD__CTOR_OFFSET))(this, method);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMETHOD__CCTOR_OFFSET))();
		}

		static ::System::Net::Http::HttpMethod* get_Get()
		{
			return ((::System::Net::Http::HttpMethod*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMETHOD_GET_GET_OFFSET))();
		}

		::System::String* get_Method()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMETHOD_GET_METHOD_OFFSET))(this);
		}

		static ::System::Net::Http::HttpMethod* get_Post()
		{
			return ((::System::Net::Http::HttpMethod*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMETHOD_GET_POST_OFFSET))();
		}

		static ::System::Boolean op_Equality(::System::Net::Http::HttpMethod* left, ::System::Net::Http::HttpMethod* right)
		{
			return ((::System::Boolean(*)(::System::Net::Http::HttpMethod*, ::System::Net::Http::HttpMethod*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMETHOD_OP_EQUALITY_OFFSET))(left, right);
		}

		::System::Boolean Equals(::System::Net::Http::HttpMethod* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::Http::HttpMethod*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMETHOD_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMETHOD_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMETHOD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMETHOD_TOSTRING_OFFSET))(this);
		}
	};
}
