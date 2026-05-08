#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Extension/UITableViewCellTrigger.h"
#include "unitysdk/UnityEngine/UI/Extension/UITableViewCell_Mode.h"
#include "unitysdk/UnityEngine/UI/Extension/UITableViewCell_State.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UITableView; }

#define UNITYENGINE_UI_EXTENSION_UITABLEVIEWCELL_ATTACHTOTABLEVIEW_OFFSET UNITYSDK_OFFSET(0x12AA75D0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEWCELL_AWAKE_OFFSET UNITYSDK_OFFSET(0x12AA7000)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEWCELL_GET_ASSETPATH_OFFSET UNITYSDK_OFFSET(0x12AA6DB0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEWCELL_GET_STATE_OFFSET UNITYSDK_OFFSET(0x12AA6DD0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEWCELL_RELEASECACHE_OFFSET UNITYSDK_OFFSET(0x12AA7900)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEWCELL_SETSTATEACTIVE_OFFSET UNITYSDK_OFFSET(0x12AA6E50)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEWCELL_SET_ASSETPATH_OFFSET UNITYSDK_OFFSET(0x12AA6DC0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEWCELL_SET_STATE_OFFSET UNITYSDK_OFFSET(0x12AA6DE0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEWCELL_START_OFFSET UNITYSDK_OFFSET(0x12AA70F0)
#define UNITYENGINE_UI_EXTENSION_UITABLEVIEWCELL__CTOR_OFFSET UNITYSDK_OFFSET(0x12AA7940)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITableViewCell_TypeDefinitionIndex = 71996;

	class UITableViewCell : public ::UnityEngine::UI::Extension::UITableViewCellTrigger
	{
	public:
		::System::String* identifier; // 0x30
		::UnityEngine::UI::Extension::UITableViewCell_Mode mode; // 0x38
		::System::Int32 dataIndex; // 0x3C
		::System::Int32 cellIndex; // 0x40
		::System::Boolean active; // 0x44
		::UnityEngine::GameObject* m_NormalState; // 0x48
		::UnityEngine::GameObject* m_DimmedState; // 0x50
		::UnityEngine::GameObject* m_SelectedState; // 0x58
		::UnityEngine::GameObject* m_DisabledState; // 0x60
		::UnityEngine::UI::Extension::UITableViewCell_State m_State; // 0x68
		::Il2CppArray<::UnityEngine::GameObject*>* m_StateObjects; // 0x70
		::System::String* _AssetPath_k__BackingField; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEWCELL__CTOR_OFFSET))(this);
		}

		::System::String* get_AssetPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEWCELL_GET_ASSETPATH_OFFSET))(this);
		}

		::System::Void set_AssetPath(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEWCELL_SET_ASSETPATH_OFFSET))(this, value);
		}

		::UnityEngine::UI::Extension::UITableViewCell_State get_state()
		{
			return ((::UnityEngine::UI::Extension::UITableViewCell_State(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEWCELL_GET_STATE_OFFSET))(this);
		}

		::System::Void set_state(::UnityEngine::UI::Extension::UITableViewCell_State value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITableViewCell_State))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEWCELL_SET_STATE_OFFSET))(this, value);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEWCELL_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEWCELL_START_OFFSET))(this);
		}

		::System::Void SetStateActive(::UnityEngine::UI::Extension::UITableViewCell_State state, ::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITableViewCell_State, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEWCELL_SETSTATEACTIVE_OFFSET))(this, state, active);
		}

		::System::Void ReleaseCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEWCELL_RELEASECACHE_OFFSET))(this);
		}

		::System::Void AttachToTableView(::UnityEngine::UI::Extension::UITableView* tableview, ::UnityEngine::UI::Extension::UITableViewCell* cell)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITableView*, ::UnityEngine::UI::Extension::UITableViewCell*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITABLEVIEWCELL_ATTACHTOTABLEVIEW_OFFSET))(this, tableview, cell);
		}
	};
}
