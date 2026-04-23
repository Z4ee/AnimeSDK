#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SENDREQUESTDATA_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A6B1FB0)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SENDREQUESTDATA_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A6B2040)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SENDREQUESTDATA_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A6B1C20)
#define ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SENDREQUESTDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6B1C00)

namespace ZenFulcrum::EmbeddedBrowser
{
	inline static constexpr unsigned int BrowserNative_Calltype_zfb_sendRequestData_TypeDefinitionIndex = 36172;

	class BrowserNative_Calltype_zfb_sendRequestData : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SENDREQUESTDATA__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Int32 requestId, ::System::IntPtr data, ::System::Int32 dataSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::IntPtr, ::System::Int32))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SENDREQUESTDATA_INVOKE_OFFSET))(this, requestId, data, dataSize);
		}

		::System::IAsyncResult* BeginInvoke(::System::Int32 requestId, ::System::IntPtr data, ::System::Int32 dataSize, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Int32, ::System::IntPtr, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SENDREQUESTDATA_BEGININVOKE_OFFSET))(this, requestId, data, dataSize, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + ZENFULCRUM_EMBEDDEDBROWSER_BROWSERNATIVE_CALLTYPE_ZFB_SENDREQUESTDATA_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
