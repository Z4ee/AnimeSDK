#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }

#define SYSTEM_NET_HTTP_HTTPCLIENTHANDLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18534A70)
#define SYSTEM_NET_HTTP_HTTPCLIENTHANDLER___C__CREATEWEBREQUEST_B__61_0_OFFSET UNITYSDK_OFFSET(0x18534AB0)
#define SYSTEM_NET_HTTP_HTTPCLIENTHANDLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18534AA0)
#define SYSTEM_NET_HTTP_HTTPCLIENTHANDLER___C__SENDASYNC_B__64_0_OFFSET UNITYSDK_OFFSET(0x18534AF0)

namespace System::Net::Http
{
	inline static constexpr unsigned int HttpClientHandler___c_TypeDefinitionIndex = 4774;

	class HttpClientHandler___c : public ::System::Object
	{
	public:
		static ::System::Net::Http::HttpClientHandler___c** StaticGet___9()
		{
			return (::System::Net::Http::HttpClientHandler___c**)Il2CppClass::FromTypeDefinitionIndex(HttpClientHandler___c_TypeDefinitionIndex)->GetStaticField(0x154F0);
		}
		static ::System::Action_1<::System::Object*>** StaticGet___9__64_0()
		{
			return (::System::Action_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(HttpClientHandler___c_TypeDefinitionIndex)->GetStaticField(0x154F8);
		}
		static ::System::Func_2<::System::String*, ::System::Boolean>** StaticGet___9__61_0()
		{
			return (::System::Func_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(HttpClientHandler___c_TypeDefinitionIndex)->GetStaticField(0x15500);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENTHANDLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENTHANDLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _CreateWebRequest_b__61_0(::System::String* l)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENTHANDLER___C__CREATEWEBREQUEST_B__61_0_OFFSET))(this, l);
		}

		::System::Void _SendAsync_b__64_0(::System::Object* l)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HTTPCLIENTHANDLER___C__SENDASYNC_B__64_0_OFFSET))(this, l);
		}
	};
}
