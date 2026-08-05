#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_COPYTOCOLOR32_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1FA08750)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_COPYTOCOLOR32_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1FA08800)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_COPYTOCOLOR32_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FA08410)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_COPYTOCOLOR32__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA083F0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_Calltype_zfb_copyToColor32_TypeDefinitionIndex = 33219;

	class BrowserNative_Calltype_zfb_copyToColor32 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_COPYTOCOLOR32__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr src, ::System::IntPtr dest, ::System::Int32 pixelCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_COPYTOCOLOR32_INVOKE_OFFSET))(this, src, dest, pixelCount);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr src, ::System::IntPtr dest, ::System::Int32 pixelCount, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_COPYTOCOLOR32_BEGININVOKE_OFFSET))(this, src, dest, pixelCount, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_COPYTOCOLOR32_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
