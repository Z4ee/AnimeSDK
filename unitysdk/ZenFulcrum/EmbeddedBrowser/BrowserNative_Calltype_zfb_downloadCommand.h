#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_DownloadAction.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_DOWNLOADCOMMAND_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B4EE300)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_DOWNLOADCOMMAND_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B4EE3C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_DOWNLOADCOMMAND_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B4E34B0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_DOWNLOADCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4EE290)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_Calltype_zfb_downloadCommand_TypeDefinitionIndex = 36522;

	class BrowserNative_Calltype_zfb_downloadCommand : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_DOWNLOADCOMMAND__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Int32 a1, ::System::Int32 a2, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_DownloadAction a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_DownloadAction, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_DOWNLOADCOMMAND_INVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 a1, ::System::Int32 a2, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_DownloadAction a3, ::System::String* a4, ::System::AsyncCallback* a5, ::System::Object* a6)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_DownloadAction, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_DOWNLOADCOMMAND_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_DOWNLOADCOMMAND_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
