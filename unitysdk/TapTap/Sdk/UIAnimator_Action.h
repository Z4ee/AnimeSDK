#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define TAPTAP_SDK_UIANIMATOR_ACTION_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D1DE1A0)
#define TAPTAP_SDK_UIANIMATOR_ACTION_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D1DE1D0)
#define TAPTAP_SDK_UIANIMATOR_ACTION_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D1DDFF0)
#define TAPTAP_SDK_UIANIMATOR_ACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1DE130)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int UIAnimator_Action_TypeDefinitionIndex = 7077;

	class UIAnimator_Action : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR_ACTION__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR_ACTION_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* a1, ::System::Object* a2)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR_ACTION_BEGININVOKE_OFFSET))(this, a1, a2);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIANIMATOR_ACTION_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
