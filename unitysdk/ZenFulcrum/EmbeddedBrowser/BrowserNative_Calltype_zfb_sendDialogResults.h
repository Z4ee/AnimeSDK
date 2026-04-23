#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SENDDIALOGRESULTS_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6B1B50)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SENDDIALOGRESULTS_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6B1BF0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SENDDIALOGRESULTS_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6A10E0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SENDDIALOGRESULTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6B1B30)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_Calltype_zfb_sendDialogResults_TypeDefinitionIndex = 36214;

	class BrowserNative_Calltype_zfb_sendDialogResults : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SENDDIALOGRESULTS__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 id, ::System::Boolean affirmed, ::System::String* text1, ::System::String* text2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SENDDIALOGRESULTS_INVOKE_OFFSET))(this, id, affirmed, text1, text2);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 id, ::System::Boolean affirmed, ::System::String* text1, ::System::String* text2, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::String*, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SENDDIALOGRESULTS_BEGININVOKE_OFFSET))(this, id, affirmed, text1, text2, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SENDDIALOGRESULTS_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
