#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngineInternal/Input/NativeInputEventBuffer.h"
#include "unitysdk/UnityEngineInternal/Input/NativeInputUpdateType.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINEINTERNAL_INPUT_NATIVEUPDATECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EDA9130)
#define UNITYENGINEINTERNAL_INPUT_NATIVEUPDATECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EDA91B0)
#define UNITYENGINEINTERNAL_INPUT_NATIVEUPDATECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EDA8FE0)
#define UNITYENGINEINTERNAL_INPUT_NATIVEUPDATECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDA90C0)

namespace UnityEngineInternal::Input
{
	inline static constexpr unsigned int NativeUpdateCallback_TypeDefinitionIndex = 5784;

	class NativeUpdateCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEUPDATECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::UnityEngineInternal::Input::NativeInputUpdateType a1, ::UnityEngineInternal::Input::NativeInputEventBuffer* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngineInternal::Input::NativeInputUpdateType, ::UnityEngineInternal::Input::NativeInputEventBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEUPDATECALLBACK_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngineInternal::Input::NativeInputUpdateType a1, ::UnityEngineInternal::Input::NativeInputEventBuffer* a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngineInternal::Input::NativeInputUpdateType, ::UnityEngineInternal::Input::NativeInputEventBuffer*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEUPDATECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINEINTERNAL_INPUT_NATIVEUPDATECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
