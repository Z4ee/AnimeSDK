#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define WELING_SDK_PIPEWRAPPER_ONRECEIVEDATA_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x15EAB1E0)
#define WELING_SDK_PIPEWRAPPER_ONRECEIVEDATA_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x15EAB250)
#define WELING_SDK_PIPEWRAPPER_ONRECEIVEDATA_INVOKE_OFFSET UNITYSDK_OFFSET(0x15EAAE90)
#define WELING_SDK_PIPEWRAPPER_ONRECEIVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x15EAABA0)

namespace WeLing::SDK
{
	inline static constexpr unsigned int PipeWrapper_OnReceiveData_TypeDefinitionIndex = 6555;

	class PipeWrapper_OnReceiveData : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + WELING_SDK_PIPEWRAPPER_ONRECEIVEDATA__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr data, ::System::Int32& size)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32&))((::PBYTE)hIl2Cpp + WELING_SDK_PIPEWRAPPER_ONRECEIVEDATA_INVOKE_OFFSET))(this, data, size);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr data, ::System::Int32& size, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::Int32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + WELING_SDK_PIPEWRAPPER_ONRECEIVEDATA_BEGININVOKE_OFFSET))(this, data, size, callback, object);
		}

		::System::Void EndInvoke(::System::Int32& size, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + WELING_SDK_PIPEWRAPPER_ONRECEIVEDATA_ENDINVOKE_OFFSET))(this, size, result);
		}
	};
}
