#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_NET_GENERALASYNCDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19A5F880)
#define SYSTEM_NET_GENERALASYNCDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19A5F8C0)
#define SYSTEM_NET_GENERALASYNCDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x19A5F300)
#define SYSTEM_NET_GENERALASYNCDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x19A5F2F0)

namespace System::Net
{
	inline static constexpr unsigned int GeneralAsyncDelegate_TypeDefinitionIndex = 3407;

	class GeneralAsyncDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_GENERALASYNCDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* request, ::System::Object* state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_GENERALASYNCDELEGATE_INVOKE_OFFSET))(this, request, state);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* request, ::System::Object* state, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_GENERALASYNCDELEGATE_BEGININVOKE_OFFSET))(this, request, state, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_GENERALASYNCDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
