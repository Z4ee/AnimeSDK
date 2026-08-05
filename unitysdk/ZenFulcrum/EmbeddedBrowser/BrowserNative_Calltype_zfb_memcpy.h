#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_MEMCPY_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1FBF50D0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_MEMCPY_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1FBF5180)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_MEMCPY_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FBF4D90)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_MEMCPY__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBF4D70)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_Calltype_zfb_memcpy_TypeDefinitionIndex = 33221;

	class BrowserNative_Calltype_zfb_memcpy : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_MEMCPY__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::IntPtr dst, ::System::IntPtr src, ::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_MEMCPY_INVOKE_OFFSET))(this, dst, src, size);
		}

		::System::IAsyncResult* BeginInvoke(::System::IntPtr dst, ::System::IntPtr src, ::System::Int32 size, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::IntPtr, ::System::IntPtr, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_MEMCPY_BEGININVOKE_OFFSET))(this, dst, src, size, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_MEMCPY_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
