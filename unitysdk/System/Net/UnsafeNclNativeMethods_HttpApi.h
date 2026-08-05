#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_UNSAFENCLNATIVEMETHODS_HTTPAPI__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2935F0)

namespace System::Net
{
	inline static constexpr unsigned int UnsafeNclNativeMethods_HttpApi_TypeDefinitionIndex = 3481;

	class UnsafeNclNativeMethods_HttpApi : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_m_Strings()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UnsafeNclNativeMethods_HttpApi_TypeDefinitionIndex)->GetStaticField(0x3A60);
		}
		// static const ::System::Int32 HttpHeaderRequestMaximum = 0x29; // 0x0
		// static const ::System::Int32 HttpHeaderResponseMaximum = 0x1E; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_UNSAFENCLNATIVEMETHODS_HTTPAPI__CCTOR_OFFSET))();
		}
	};
}
