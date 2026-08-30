#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define WELING_SDK_PIPEWRAPPER_ONRECEIVEDATA_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B917450)
#define WELING_SDK_PIPEWRAPPER_ONRECEIVEDATA_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B9174C0)
#define WELING_SDK_PIPEWRAPPER_ONRECEIVEDATA_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B917440)
#define WELING_SDK_PIPEWRAPPER_ONRECEIVEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9173D0)

namespace WeLing::SDK
{
	inline static constexpr unsigned int PipeWrapper_OnReceiveData_TypeDefinitionIndex = 7484;

	class PipeWrapper_OnReceiveData : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + WELING_SDK_PIPEWRAPPER_ONRECEIVEDATA__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::IntPtr a1, ::System::Int32& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Int32&))((::PBYTE)hIl2Cpp + WELING_SDK_PIPEWRAPPER_ONRECEIVEDATA_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr a1, ::System::Int32& a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::Int32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + WELING_SDK_PIPEWRAPPER_ONRECEIVEDATA_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::Int32& a1, ::System::IAsyncResult* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + WELING_SDK_PIPEWRAPPER_ONRECEIVEDATA_ENDINVOKE_OFFSET))(this, a1, a2);
		}
	};
}
