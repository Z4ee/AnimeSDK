#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UITableView; }

#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONDATAEVENT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D344530)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONDATAEVENT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D344570)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONDATAEVENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D343FA0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONDATAEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D343F80)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITableView_OnDataEvent_TypeDefinitionIndex = 65407;

	class UITableView_OnDataEvent : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONDATAEVENT__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::UI::Extension::UITableView* tableView, ::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITableView*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONDATAEVENT_INVOKE_OFFSET))(this, tableView, data);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::UI::Extension::UITableView* tableView, ::System::Object* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::UI::Extension::UITableView*, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONDATAEVENT_BEGININVOKE_OFFSET))(this, tableView, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONDATAEVENT_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
