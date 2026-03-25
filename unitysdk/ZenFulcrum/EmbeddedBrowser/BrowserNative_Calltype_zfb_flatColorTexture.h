#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_FLATCOLORTEXTURE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18C73BE0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_FLATCOLORTEXTURE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18C73CA0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_FLATCOLORTEXTURE_INVOKE_OFFSET UNITYSDK_OFFSET(0x18C5E890)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_FLATCOLORTEXTURE__CTOR_OFFSET UNITYSDK_OFFSET(0x18C73BC0)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_Calltype_zfb_flatColorTexture_TypeDefinitionIndex = 30444;

	class BrowserNative_Calltype_zfb_flatColorTexture : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_FLATCOLORTEXTURE__CTOR_OFFSET))(this, object, method);
		}

		::System::IntPtr Invoke(::System::Int32 pixelCount, ::System::Int32 r, ::System::Int32 g, ::System::Int32 b, ::System::Int32 a)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_FLATCOLORTEXTURE_INVOKE_OFFSET))(this, pixelCount, r, g, b, a);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 pixelCount, ::System::Int32 r, ::System::Int32 g, ::System::Int32 b, ::System::Int32 a, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_FLATCOLORTEXTURE_BEGININVOKE_OFFSET))(this, pixelCount, r, g, b, a, callback, object);
		}

		::System::IntPtr EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::IntPtr(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_FLATCOLORTEXTURE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
