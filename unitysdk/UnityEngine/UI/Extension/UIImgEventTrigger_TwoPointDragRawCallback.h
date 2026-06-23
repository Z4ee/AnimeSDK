#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_TWOPOINTDRAGRAWCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1B5AD190)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_TWOPOINTDRAGRAWCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1B5AD240)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_TWOPOINTDRAGRAWCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1B5ACDA0)
#define UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_TWOPOINTDRAGRAWCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B5ACD80)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIImgEventTrigger_TwoPointDragRawCallback_TypeDefinitionIndex = 65762;

	class UIImgEventTrigger_TwoPointDragRawCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_TWOPOINTDRAGRAWCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::Vector2 screenPos1Old, ::UnityEngine::Vector2 screenPos2Old, ::UnityEngine::Vector2 screenPos1New, ::UnityEngine::Vector2 screenPos2New)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_TWOPOINTDRAGRAWCALLBACK_INVOKE_OFFSET))(this, screenPos1Old, screenPos2Old, screenPos1New, screenPos2New);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::Vector2 screenPos1Old, ::UnityEngine::Vector2 screenPos2Old, ::UnityEngine::Vector2 screenPos1New, ::UnityEngine::Vector2 screenPos2New, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_TWOPOINTDRAGRAWCALLBACK_BEGININVOKE_OFFSET))(this, screenPos1Old, screenPos2Old, screenPos1New, screenPos2New, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGEVENTTRIGGER_TWOPOINTDRAGRAWCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
