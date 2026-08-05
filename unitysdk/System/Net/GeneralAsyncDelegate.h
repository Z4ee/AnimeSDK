#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_NET_GENERALASYNCDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D242B50)
#define SYSTEM_NET_GENERALASYNCDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D242B90)
#define SYSTEM_NET_GENERALASYNCDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D2425C0)
#define SYSTEM_NET_GENERALASYNCDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2425A0)

namespace System::Net
{
	inline static constexpr unsigned int GeneralAsyncDelegate_TypeDefinitionIndex = 3406;

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
