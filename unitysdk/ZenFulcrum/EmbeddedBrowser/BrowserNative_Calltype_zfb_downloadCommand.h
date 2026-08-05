#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_DownloadAction.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_DOWNLOADCOMMAND_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1FB6C8C0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_DOWNLOADCOMMAND_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1FB6C980)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_DOWNLOADCOMMAND_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FB6C520)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_DOWNLOADCOMMAND__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB6C500)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_Calltype_zfb_downloadCommand_TypeDefinitionIndex = 33276;

	class BrowserNative_Calltype_zfb_downloadCommand : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_DOWNLOADCOMMAND__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 id, ::System::Int32 downloadId, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_DownloadAction command, ::System::String* fileName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_DownloadAction, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_DOWNLOADCOMMAND_INVOKE_OFFSET))(this, id, downloadId, command, fileName);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 id, ::System::Int32 downloadId, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_DownloadAction command, ::System::String* fileName, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32, ::ZenFulcrum::EmbeddedBrowser::BrowserNative_DownloadAction, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_DOWNLOADCOMMAND_BEGININVOKE_OFFSET))(this, id, downloadId, command, fileName, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_DOWNLOADCOMMAND_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
