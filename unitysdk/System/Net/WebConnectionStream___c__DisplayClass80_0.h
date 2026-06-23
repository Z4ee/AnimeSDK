#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System::Net { class SimpleAsyncResult; }
namespace System::Net { class WebConnectionStream; }

#define SYSTEM_NET_WEBCONNECTIONSTREAM___C__DISPLAYCLASS80_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8A5C50)
#define SYSTEM_NET_WEBCONNECTIONSTREAM___C__DISPLAYCLASS80_0__WRITEREQUESTASYNC_B__0_OFFSET UNITYSDK_OFFSET(0x1C8A5C60)
#define SYSTEM_NET_WEBCONNECTIONSTREAM___C__DISPLAYCLASS80_0__WRITEREQUESTASYNC_B__1_OFFSET UNITYSDK_OFFSET(0x1C8A5E20)

namespace System::Net
{
	inline static constexpr unsigned int WebConnectionStream___c__DisplayClass80_0_TypeDefinitionIndex = 3573;

	class WebConnectionStream___c__DisplayClass80_0 : public ::System::Object
	{
	public:
		::System::AsyncCallback* __9__1; // 0x10
		::Il2CppArray<::System::Byte>* bytes; // 0x18
		::System::Net::WebConnectionStream* __4__this; // 0x20
		::System::Net::SimpleAsyncResult* result; // 0x28
		::System::Int32 length; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM___C__DISPLAYCLASS80_0__CTOR_OFFSET))(this);
		}

		::System::Void _WriteRequestAsync_b__0(::System::Net::SimpleAsyncResult* inner)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::SimpleAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM___C__DISPLAYCLASS80_0__WRITEREQUESTASYNC_B__0_OFFSET))(this, inner);
		}

		::System::Void _WriteRequestAsync_b__1(::System::IAsyncResult* r)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBCONNECTIONSTREAM___C__DISPLAYCLASS80_0__WRITEREQUESTASYNC_B__1_OFFSET))(this, r);
		}
	};
}
