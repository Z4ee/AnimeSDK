#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UITableView; }
namespace UnityEngine::UI::Extension { class UITableViewCell; }

#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONCELLEVENT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BC494F0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONCELLEVENT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BC49530)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONCELLEVENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BC48F30)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONCELLEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC48F10)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITableView_OnCellEvent_TypeDefinitionIndex = 65415;

	class UITableView_OnCellEvent : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONCELLEVENT__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::UI::Extension::UITableView* table, ::UnityEngine::UI::Extension::UITableViewCell* cell, ::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITableView*, ::UnityEngine::UI::Extension::UITableViewCell*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONCELLEVENT_INVOKE_OFFSET))(this, table, cell, data);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::UI::Extension::UITableView* table, ::UnityEngine::UI::Extension::UITableViewCell* cell, ::System::Object* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::UI::Extension::UITableView*, ::UnityEngine::UI::Extension::UITableViewCell*, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONCELLEVENT_BEGININVOKE_OFFSET))(this, table, cell, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONCELLEVENT_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
