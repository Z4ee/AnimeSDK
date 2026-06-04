#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIElements/VisualTreeUpdatePhase.h"

namespace UnityEngine::UIElements { class IVisualTreeUpdater; }

#define UNITYENGINE_UIELEMENTS_VISUALTREEUPDATER_UPDATERARRAY_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1B36CA70)
#define UNITYENGINE_UIELEMENTS_VISUALTREEUPDATER_UPDATERARRAY_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1B36CA40)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int VisualTreeUpdater_UpdaterArray_TypeDefinitionIndex = 6162;

	class VisualTreeUpdater_UpdaterArray : public ::System::Object
	{
	public:
		::Il2CppArray<::UnityEngine::UIElements::IVisualTreeUpdater*>* m_VisualTreeUpdaters; // 0x10

		::UnityEngine::UIElements::IVisualTreeUpdater* get_Item(::UnityEngine::UIElements::VisualTreeUpdatePhase a1)
		{
			return ((::UnityEngine::UIElements::IVisualTreeUpdater*(*)(::PVOID, ::UnityEngine::UIElements::VisualTreeUpdatePhase))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEUPDATER_UPDATERARRAY_GET_ITEM_OFFSET))(this, a1);
		}

		::UnityEngine::UIElements::IVisualTreeUpdater* get_Item_1(::System::Int32 a1)
		{
			return ((::UnityEngine::UIElements::IVisualTreeUpdater*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_VISUALTREEUPDATER_UPDATERARRAY_GET_ITEM_1_OFFSET))(this, a1);
		}
	};
}
