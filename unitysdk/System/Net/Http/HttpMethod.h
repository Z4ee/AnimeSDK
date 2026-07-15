#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_HTTP_HTTPMETHOD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1CAA8A30)
#define SYSTEM_NET_HTTP_HTTPMETHOD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CAA8A00)
#define SYSTEM_NET_HTTP_HTTPMETHOD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1CAA8A80)
#define SYSTEM_NET_HTTP_HTTPMETHOD_GET_GET_OFFSET UNITYSDK_OFFSET(0x1CAA8960)
#define SYSTEM_NET_HTTP_HTTPMETHOD_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x1CAA8990)
#define SYSTEM_NET_HTTP_HTTPMETHOD_GET_POST_OFFSET UNITYSDK_OFFSET(0x1CAA89A0)
#define SYSTEM_NET_HTTP_HTTPMETHOD_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1CAA89D0)
#define SYSTEM_NET_HTTP_HTTPMETHOD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CAA8B10)
#define SYSTEM_NET_HTTP_HTTPMETHOD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CAA8B20)
#define SYSTEM_NET_HTTP_HTTPMETHOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAA8900)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpMethod_TypeDefinitionIndex = 3762;

	class HttpMethod : public ::System::Object
	{
	public:
		static ::System::Net::Http::HttpMethod** StaticGet_head_method()
		{
			return (::System::Net::Http::HttpMethod**)Il2CppClass::FromTypeDefinitionIndex(HttpMethod_TypeDefinitionIndex)->GetStaticField(0x27F70);
		}
		static ::System::Net::Http::HttpMethod** StaticGet_get_method()
		{
			return (::System::Net::Http::HttpMethod**)Il2CppClass::FromTypeDefinitionIndex(HttpMethod_TypeDefinitionIndex)->GetStaticField(0x27F78);
		}
		static ::System::Net::Http::HttpMethod** StaticGet_post_method()
		{
			return (::System::Net::Http::HttpMethod**)Il2CppClass::FromTypeDefinitionIndex(HttpMethod_TypeDefinitionIndex)->GetStaticField(0x27F80);
		}
		static ::System::Net::Http::HttpMethod** StaticGet_trace_method()
		{
			return (::System::Net::Http::HttpMethod**)Il2CppClass::FromTypeDefinitionIndex(HttpMethod_TypeDefinitionIndex)->GetStaticField(0x27F88);
		}
		static ::System::Net::Http::HttpMethod** StaticGet_delete_method()
		{
			return (::System::Net::Http::HttpMethod**)Il2CppClass::FromTypeDefinitionIndex(HttpMethod_TypeDefinitionIndex)->GetStaticField(0x27F90);
		}
		static ::System::Net::Http::HttpMethod** StaticGet_put_method()
		{
			return (::System::Net::Http::HttpMethod**)Il2CppClass::FromTypeDefinitionIndex(HttpMethod_TypeDefinitionIndex)->GetStaticField(0x27F98);
		}
		static ::System::Net::Http::HttpMethod** StaticGet_options_method()
		{
			return (::System::Net::Http::HttpMethod**)Il2CppClass::FromTypeDefinitionIndex(HttpMethod_TypeDefinitionIndex)->GetStaticField(0x27FA0);
		}
		::System::String* method; // 0x10

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMETHOD__CTOR_OFFSET))(this, a1);
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

		static ::System::Boolean op_Equality(::System::Net::Http::HttpMethod* a1, ::System::Net::Http::HttpMethod* a2)
		{
			return ((::System::Boolean(*)(::System::Net::Http::HttpMethod*, ::System::Net::Http::HttpMethod*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMETHOD_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::System::Net::Http::HttpMethod* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Net::Http::HttpMethod*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMETHOD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPMETHOD_EQUALS_1_OFFSET))(this, a1);
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
