#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System::Net { class SimpleAsyncResult; }
namespace System::Net { class WebConnectionStream; }

#define SYSTEM_NET_WEBCONNECTIONSTREAM___C__DISPLAYCLASS80_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFC5880)
#define SYSTEM_NET_WEBCONNECTIONSTREAM___C__DISPLAYCLASS80_0__WRITEREQUESTASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1AFC6260)
#define SYSTEM_NET_WEBCONNECTIONSTREAM___C__DISPLAYCLASS80_0__WRITEREQUESTASYNC_B__1_OFFSET UNITYSDK_OFFSET(0x1AFC6430)

namespace System::Net
{
	inline static constexpr unsigned int WebConnectionStream___c__DisplayClass80_0_TypeDefinitionIndex = 2880;

	class WebConnectionStream___c__DisplayClass80_0 : public ::System::Object
	{
	public:
		::System::AsyncCallback* __9__1; // 0x10
		::System::Net::WebConnectionStream* __4__this; // 0x18
		::System::Net::SimpleAsyncResult* result; // 0x20
		::Il2CppArray<::System::Byte>* bytes; // 0x28
		::System::Int32 length; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM___C__DISPLAYCLASS80_0__CTOR_OFFSET))(this);
		}

		::System::Void _WriteRequestAsync_b__0(::System::Net::SimpleAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::SimpleAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM___C__DISPLAYCLASS80_0__WRITEREQUESTASYNC_B__0_OFFSET))(this, a1);
		}

		::System::Void _WriteRequestAsync_b__1(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM___C__DISPLAYCLASS80_0__WRITEREQUESTASYNC_B__1_OFFSET))(this, a1);
		}
	};
}
