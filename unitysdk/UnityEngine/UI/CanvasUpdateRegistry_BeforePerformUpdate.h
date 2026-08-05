#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_BEFOREPERFORMUPDATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1EF2B490)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_BEFOREPERFORMUPDATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1EF2B4C0)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_BEFOREPERFORMUPDATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EF2B200)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_BEFOREPERFORMUPDATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF2B1E0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int CanvasUpdateRegistry_BeforePerformUpdate_TypeDefinitionIndex = 19192;

	class CanvasUpdateRegistry_BeforePerformUpdate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_BEFOREPERFORMUPDATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_BEFOREPERFORMUPDATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_BEFOREPERFORMUPDATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_BEFOREPERFORMUPDATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
