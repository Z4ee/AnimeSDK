#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_DialogType.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_DISPLAYDIALOGFUNC_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6B3B40)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_DISPLAYDIALOGFUNC_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6B3C30)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_DISPLAYDIALOGFUNC_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6B3700)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_DISPLAYDIALOGFUNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6917F0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_DisplayDialogFunc_TypeDefinitionIndex = 36141;

	class BrowserNative_DisplayDialogFunc : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_DISPLAYDIALOGFUNC__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 browserId, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_DialogType dialogType, ::System::IntPtr dialogText, ::System::IntPtr initialPromptText, ::System::IntPtr sourceURL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_DialogType, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_DISPLAYDIALOGFUNC_INVOKE_OFFSET))(this, browserId, dialogType, dialogText, initialPromptText, sourceURL);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 browserId, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_DialogType dialogType, ::System::IntPtr dialogText, ::System::IntPtr initialPromptText, ::System::IntPtr sourceURL, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_DialogType, ::System::IntPtr, ::System::IntPtr, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_DISPLAYDIALOGFUNC_BEGININVOKE_OFFSET))(this, browserId, dialogType, dialogText, initialPromptText, sourceURL, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_DISPLAYDIALOGFUNC_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
