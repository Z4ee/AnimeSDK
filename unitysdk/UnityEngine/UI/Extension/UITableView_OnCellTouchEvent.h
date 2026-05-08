#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UITableView; }
namespace UnityEngine::UI::Extension { class UITableViewCell; }

#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONCELLTOUCHEVENT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x18AEB800)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONCELLTOUCHEVENT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x18AEB850)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONCELLTOUCHEVENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x18AEB150)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONCELLTOUCHEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x18AEB140)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITableView_OnCellTouchEvent_TypeDefinitionIndex = 63955;

	class UITableView_OnCellTouchEvent : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONCELLTOUCHEVENT__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::UI::Extension::UITableView* table, ::UnityEngine::UI::Extension::UITableViewCell* cell, ::UnityEngine::GameObject* target, ::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITableView*, ::UnityEngine::UI::Extension::UITableViewCell*, ::UnityEngine::GameObject*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONCELLTOUCHEVENT_INVOKE_OFFSET))(this, table, cell, target, data);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::UI::Extension::UITableView* table, ::UnityEngine::UI::Extension::UITableViewCell* cell, ::UnityEngine::GameObject* target, ::System::Object* data, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::UI::Extension::UITableView*, ::UnityEngine::UI::Extension::UITableViewCell*, ::UnityEngine::GameObject*, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONCELLTOUCHEVENT_BEGININVOKE_OFFSET))(this, table, cell, target, data, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONCELLTOUCHEVENT_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
