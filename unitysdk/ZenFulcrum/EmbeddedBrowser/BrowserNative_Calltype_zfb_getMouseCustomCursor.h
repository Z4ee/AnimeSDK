#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETMOUSECUSTOMCURSOR_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18C74770)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETMOUSECUSTOMCURSOR_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18C74860)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETMOUSECUSTOMCURSOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x18C63540)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETMOUSECUSTOMCURSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x18C74750)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_Calltype_zfb_getMouseCustomCursor_TypeDefinitionIndex = 30492;

	class BrowserNative_Calltype_zfb_getMouseCustomCursor : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETMOUSECUSTOMCURSOR__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 id, ::System::IntPtr buffer, ::System::Int32 width, ::System::Int32 height, ::System::Int32& hotX, ::System::Int32& hotY)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETMOUSECUSTOMCURSOR_INVOKE_OFFSET))(this, id, buffer, width, height, hotX, hotY);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 id, ::System::IntPtr buffer, ::System::Int32 width, ::System::Int32 height, ::System::Int32& hotX, ::System::Int32& hotY, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::IntPtr, ::System::Int32, ::System::Int32, ::System::Int32&, ::System::Int32&, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETMOUSECUSTOMCURSOR_BEGININVOKE_OFFSET))(this, id, buffer, width, height, hotX, hotY, callback, object);
		}

		::System::Void EndInvoke(::System::Int32& hotX, ::System::Int32& hotY, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32&, ::System::Int32&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_GETMOUSECUSTOMCURSOR_ENDINVOKE_OFFSET))(this, hotX, hotY, result);
		}
	};
}
