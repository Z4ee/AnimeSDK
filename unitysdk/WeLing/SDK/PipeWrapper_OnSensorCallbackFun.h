#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define WELING_SDK_PIPEWRAPPER_ONSENSORCALLBACKFUN_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D112890)
#define WELING_SDK_PIPEWRAPPER_ONSENSORCALLBACKFUN_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D112920)
#define WELING_SDK_PIPEWRAPPER_ONSENSORCALLBACKFUN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D112870)
#define WELING_SDK_PIPEWRAPPER_ONSENSORCALLBACKFUN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1127F0)

namespace WeLing::SDK
{
	inline static constexpr unsigned int PipeWrapper_OnSensorCallbackFun_TypeDefinitionIndex = 7499;

	class PipeWrapper_OnSensorCallbackFun : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + WELING_SDK_PIPEWRAPPER_ONSENSORCALLBACKFUN__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32& a1, ::System::IntPtr a2, ::System::Int32& a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::IntPtr, ::System::Int32&))((::PBYTE)hIl2Cpp + WELING_SDK_PIPEWRAPPER_ONSENSORCALLBACKFUN_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32& a1, ::System::IntPtr a2, ::System::Int32& a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32&, ::System::IntPtr, ::System::Int32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + WELING_SDK_PIPEWRAPPER_ONSENSORCALLBACKFUN_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::Int32& a1, ::System::Int32& a2, ::System::IAsyncResult* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + WELING_SDK_PIPEWRAPPER_ONSENSORCALLBACKFUN_ENDINVOKE_OFFSET))(this, a1, a2, a3);
		}
	};
}
