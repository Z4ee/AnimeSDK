#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIElements/VisualTreeUpdatePhase.h"

namespace UnityEngine::UIElements { class IVisualTreeUpdater; }

#define UNITYENGINE_UIELEMENTS_VISUALTREEUPDATER_UPDATERARRAY_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x197C67C0)
#define UNITYENGINE_UIELEMENTS_VISUALTREEUPDATER_UPDATERARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x197C6780)
#define UNITYENGINE_UIELEMENTS_VISUALTREEUPDATER_UPDATERARRAY__CTOR_OFFSET UNITYSDK_OFFSET(0x197C6800)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualTreeUpdater_UpdaterArray_TypeDefinitionIndex = 24980;

	class VisualTreeUpdater_UpdaterArray : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::UIElements::IVisualTreeUpdater*>* m_VisualTreeUpdaters; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEUPDATER_UPDATERARRAY__CTOR_OFFSET))(this);
		}

		::UnityEngine::UIElements::IVisualTreeUpdater* get_Item(::UnityEngine::UIElements::VisualTreeUpdatePhase phase)
		{
			return ((::UnityEngine::UIElements::IVisualTreeUpdater*(*)(::PVOID, ::UnityEngine::UIElements::VisualTreeUpdatePhase))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEUPDATER_UPDATERARRAY_GET_ITEM_OFFSET))(this, phase);
		}

		::UnityEngine::UIElements::IVisualTreeUpdater* get_Item_1(::System::Int32 index)
		{
			return ((::UnityEngine::UIElements::IVisualTreeUpdater*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEUPDATER_UPDATERARRAY_GET_ITEM_1_OFFSET))(this, index);
		}
	};
}
