#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_UNSAFENCLNATIVEMETHODS_HTTPAPI_HTTP_REQUEST_HEADER_ID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A156590)
#define SYSTEM_NET_UNSAFENCLNATIVEMETHODS_HTTPAPI_HTTP_REQUEST_HEADER_ID__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A156630)

namespace System::Net
{
	inline static constexpr unsigned int UnsafeNclNativeMethods_HttpApi_HTTP_REQUEST_HEADER_ID_TypeDefinitionIndex = 2806;

	class UnsafeNclNativeMethods_HttpApi_HTTP_REQUEST_HEADER_ID : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_m_Strings()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UnsafeNclNativeMethods_HttpApi_HTTP_REQUEST_HEADER_ID_TypeDefinitionIndex)->GetStaticField(0x14C30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_UNSAFENCLNATIVEMETHODS_HTTPAPI_HTTP_REQUEST_HEADER_ID__CCTOR_OFFSET))();
		}

		static ::System::String* ToString(::System::Int32 position)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_UNSAFENCLNATIVEMETHODS_HTTPAPI_HTTP_REQUEST_HEADER_ID_TOSTRING_OFFSET))(position);
		}
	};
}
