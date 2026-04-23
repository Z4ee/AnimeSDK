#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define TAPTAP_SDK_UIANIMATOR_ACTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A1C3C80)
#define TAPTAP_SDK_UIANIMATOR_ACTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A1C3CB0)
#define TAPTAP_SDK_UIANIMATOR_ACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A1C38C0)
#define TAPTAP_SDK_UIANIMATOR_ACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1C3840)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int UIAnimator_Action_TypeDefinitionIndex = 6455;

	class UIAnimator_Action : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR_ACTION__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR_ACTION_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR_ACTION_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR_ACTION_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
