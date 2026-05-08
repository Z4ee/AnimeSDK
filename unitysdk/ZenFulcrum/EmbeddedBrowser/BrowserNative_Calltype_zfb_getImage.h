#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/ZenFulcrum/EmbeddedBrowser/BrowserNative_RenderData.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETIMAGE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C2D4BB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETIMAGE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C2D4C40)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETIMAGE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C2D47E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C2D47D0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_Calltype_zfb_getImage_TypeDefinitionIndex = 31060;

	class BrowserNative_Calltype_zfb_getImage : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETIMAGE__CTOR_OFFSET))(this, object, method);
		}

		::ZenFulcrum::EmbeddedBrowser::BrowserNative_RenderData Invoke(::System::Int32 id, ::System::Boolean forceDirty)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::BrowserNative_RenderData(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETIMAGE_INVOKE_OFFSET))(this, id, forceDirty);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 id, ::System::Boolean forceDirty, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETIMAGE_BEGININVOKE_OFFSET))(this, id, forceDirty, callback, object);
		}

		::ZenFulcrum::EmbeddedBrowser::BrowserNative_RenderData EndInvoke(::System::IAsyncResult* result)
		{
			return ((::ZenFulcrum::EmbeddedBrowser::BrowserNative_RenderData(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETIMAGE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
