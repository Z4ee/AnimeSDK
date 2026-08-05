#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace UnityEngine::UI::Extension { class UITableView; }

#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONSNAPCOMPLETED_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1BC49560)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONSNAPCOMPLETED_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1BC495E0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONSNAPCOMPLETED_INVOKE_OFFSET UNITYSDK_OFFSET(0x1BC48920)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONSNAPCOMPLETED__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC49540)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITableView_OnSnapCompleted_TypeDefinitionIndex = 65412;

	class UITableView_OnSnapCompleted : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONSNAPCOMPLETED__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::UnityEngine::UI::Extension::UITableView* table, ::System::Int32 lineIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITableView*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONSNAPCOMPLETED_INVOKE_OFFSET))(this, table, lineIndex);
		}

		::System::IAsyncResult* BeginInvoke(::UnityEngine::UI::Extension::UITableView* table, ::System::Int32 lineIndex, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::UnityEngine::UI::Extension::UITableView*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONSNAPCOMPLETED_BEGININVOKE_OFFSET))(this, table, lineIndex, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEW_ONSNAPCOMPLETED_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
