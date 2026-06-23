#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections { class Hashtable; }

#define SYSTEM_NET_UNSAFENCLNATIVEMETHODS_HTTPAPI_HTTP_RESPONSE_HEADER_ID_INDEXOFKNOWNHEADER_OFFSET UNITYSDK_OFFSET(0x1C07EAD0)
#define SYSTEM_NET_UNSAFENCLNATIVEMETHODS_HTTPAPI_HTTP_RESPONSE_HEADER_ID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C07EBE0)
#define SYSTEM_NET_UNSAFENCLNATIVEMETHODS_HTTPAPI_HTTP_RESPONSE_HEADER_ID__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C07E9A0)

namespace System::Net
{
	inline static constexpr unsigned int UnsafeNclNativeMethods_HttpApi_HTTP_RESPONSE_HEADER_ID_TypeDefinitionIndex = 3483;

	class UnsafeNclNativeMethods_HttpApi_HTTP_RESPONSE_HEADER_ID : public ::System::Object
	{
	public:
		static ::System::Collections::Hashtable** StaticGet_m_Hashtable()
		{
			return (::System::Collections::Hashtable**)Il2CppClass::FromTypeDefinitionIndex(UnsafeNclNativeMethods_HttpApi_HTTP_RESPONSE_HEADER_ID_TypeDefinitionIndex)->GetStaticField(0x3A50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_UNSAFENCLNATIVEMETHODS_HTTPAPI_HTTP_RESPONSE_HEADER_ID__CCTOR_OFFSET))();
		}

		static ::System::Int32 IndexOfKnownHeader(::System::String* HeaderName)
		{
			return ((::System::Int32(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_UNSAFENCLNATIVEMETHODS_HTTPAPI_HTTP_RESPONSE_HEADER_ID_INDEXOFKNOWNHEADER_OFFSET))(HeaderName);
		}

		static ::System::String* ToString(::System::Int32 position)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_UNSAFENCLNATIVEMETHODS_HTTPAPI_HTTP_RESPONSE_HEADER_ID_TOSTRING_OFFSET))(position);
		}
	};
}
