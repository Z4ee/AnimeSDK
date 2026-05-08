#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class Image; }

#define UNITYENGINE_UI_EXTENSION_UISPRITENUMPANEL_CALLPLAYACTION_OFFSET UNITYSDK_OFFSET(0x18D5F3B0)
#define UNITYENGINE_UI_EXTENSION_UISPRITENUMPANEL_CALLSTOPACTION_OFFSET UNITYSDK_OFFSET(0x18D5F400)
#define UNITYENGINE_UI_EXTENSION_UISPRITENUMPANEL_INITACTION_OFFSET UNITYSDK_OFFSET(0x18D5F350)
#define UNITYENGINE_UI_EXTENSION_UISPRITENUMPANEL_REFRESH_OFFSET UNITYSDK_OFFSET(0x18D5EDA0)
#define UNITYENGINE_UI_EXTENSION_UISPRITENUMPANEL_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x18D5F5F0)
#define UNITYENGINE_UI_EXTENSION_UISPRITENUMPANEL_SETNUM_OFFSET UNITYSDK_OFFSET(0x18D5F450)
#define UNITYENGINE_UI_EXTENSION_UISPRITENUMPANEL_UPDATE_OFFSET UNITYSDK_OFFSET(0x18D5F800)
#define UNITYENGINE_UI_EXTENSION_UISPRITENUMPANEL__CTOR_OFFSET UNITYSDK_OFFSET(0x18D5F980)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UISpriteNumPanel_TypeDefinitionIndex = 55395;

	class UISpriteNumPanel : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single flowDuration; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::UI::Image*>* images; // 0x20
		::System::Boolean hasInit; // 0x28
		::System::Boolean hideHeadZero; // 0x29
		::System::Action* playAction; // 0x30
		::System::Action* stopAction; // 0x38
		::System::Collections::Generic::List_1<::Foundation::AssetPath>* spriteName; // 0x40
		::System::Collections::Generic::List_1<::System::Int32>* Nums; // 0x48
		::System::UInt64 num; // 0x50
		::Il2CppArray<::System::UInt64>* exponential; // 0x58
		::System::Func_2<::Foundation::AssetPath, ::UnityEngine::Sprite*>* loadFunc; // 0x60
		::System::Boolean start; // 0x68
		::System::Single passTime; // 0x6C
		::System::UInt64 flowStartNum; // 0x70
		::System::UInt64 flowEndNum; // 0x78
		::System::UInt64 flowNum; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISPRITENUMPANEL__CTOR_OFFSET))(this);
		}

		::System::Void Refresh(::System::UInt64 flowNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISPRITENUMPANEL_REFRESH_OFFSET))(this, flowNum);
		}

		::UnityEngine::UI::Extension::UISpriteNumPanel* InitAction(::System::Action* playCallback, ::System::Action* stopCallback)
		{
			return ((::UnityEngine::UI::Extension::UISpriteNumPanel*(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISPRITENUMPANEL_INITACTION_OFFSET))(this, playCallback, stopCallback);
		}

		::System::Void CallPlayAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISPRITENUMPANEL_CALLPLAYACTION_OFFSET))(this);
		}

		::System::Void CallStopAction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISPRITENUMPANEL_CALLSTOPACTION_OFFSET))(this);
		}

		::System::Void SetNum(::System::UInt64 num, ::System::Func_2<::Foundation::AssetPath, ::UnityEngine::Sprite*>* GetSprite, ::System::Boolean forceRefresh)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Func_2<::Foundation::AssetPath, ::UnityEngine::Sprite*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISPRITENUMPANEL_SETNUM_OFFSET))(this, num, GetSprite, forceRefresh);
		}

		::System::Void SetColor(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISPRITENUMPANEL_SETCOLOR_OFFSET))(this, color);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UISPRITENUMPANEL_UPDATE_OFFSET))(this);
		}
	};
}
