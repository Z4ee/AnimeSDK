#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define WELING_SDK_PIPEWRAPPER_ONSENSORCALLBACKFUN_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18DFDD30)
#define WELING_SDK_PIPEWRAPPER_ONSENSORCALLBACKFUN_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18DFDDE0)
#define WELING_SDK_PIPEWRAPPER_ONSENSORCALLBACKFUN_INVOKE_OFFSET UNITYSDK_OFFSET(0x18DFD9B0)
#define WELING_SDK_PIPEWRAPPER_ONSENSORCALLBACKFUN__CTOR_OFFSET UNITYSDK_OFFSET(0x18DFD9A0)

namespace WeLing::SDK
{
	inline static constexpr unsigned int PipeWrapper_OnSensorCallbackFun_TypeDefinitionIndex = 18412;

	class PipeWrapper_OnSensorCallbackFun : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + WELING_SDK_PIPEWRAPPER_ONSENSORCALLBACKFUN__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32& type, ::System::IntPtr data, ::System::Int32& len)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::IntPtr, ::System::Int32&))((::PBYTE)hIl2Cpp + WELING_SDK_PIPEWRAPPER_ONSENSORCALLBACKFUN_INVOKE_OFFSET))(this, type, data, len);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32& type, ::System::IntPtr data, ::System::Int32& len, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32&, ::System::IntPtr, ::System::Int32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + WELING_SDK_PIPEWRAPPER_ONSENSORCALLBACKFUN_BEGININVOKE_OFFSET))(this, type, data, len, callback, object);
		}

		::System::Void EndInvoke(::System::Int32& type, ::System::Int32& len, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + WELING_SDK_PIPEWRAPPER_ONSENSORCALLBACKFUN_ENDINVOKE_OFFSET))(this, type, len, result);
		}
	};
}
