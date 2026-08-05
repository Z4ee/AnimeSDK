#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETZOOM_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1FA0A190)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETZOOM_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1FA0A220)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETZOOM_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FA09E60)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETZOOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA09E40)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_Calltype_zfb_setZoom_TypeDefinitionIndex = 33252;

	class BrowserNative_Calltype_zfb_setZoom : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETZOOM__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 id, ::System::Double zoom)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETZOOM_INVOKE_OFFSET))(this, id, zoom);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 id, ::System::Double zoom, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Double, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETZOOM_BEGININVOKE_OFFSET))(this, id, zoom, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SETZOOM_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
