#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Comparison_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class ICanvasElement; }
namespace UnityEngine::UI { class LayoutRebuilder; }
namespace UnityEngine::UI { class SmoothMask; }
namespace UnityEngine::UI::Collections { template <typename T> class IndexedSet_1; }

#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_CLEANINVALIDITEMS_OFFSET UNITYSDK_OFFSET(0x1C311730)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C311550)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_INTERNALREBUILDLAYOUTIMMEDIATEIFNEED_OFFSET UNITYSDK_OFFSET(0x1C3132C0)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_INTERNALREGISTERCANVASELEMENTFORGRAPHICREBUILD_OFFSET UNITYSDK_OFFSET(0x1C3136E0)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_INTERNALREGISTERCANVASELEMENTFORLAYOUTREBUILD_OFFSET UNITYSDK_OFFSET(0x1C313490)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_INTERNALUNREGISTERCANVASELEMENTFORGRAPHICREBUILD_OFFSET UNITYSDK_OFFSET(0x1C313A30)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_INTERNALUNREGISTERCANVASELEMENTFORLAYOUTREBUILD_OFFSET UNITYSDK_OFFSET(0x1C313860)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_ISREBUILDINGGRAPHICS_OFFSET UNITYSDK_OFFSET(0x1C313C80)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_ISREBUILDINGLAYOUT_OFFSET UNITYSDK_OFFSET(0x1C313C00)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_OBJECTVALIDFORUPDATE_OFFSET UNITYSDK_OFFSET(0x1C3115A0)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_PARENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1C312E40)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_PERFORMUPDATE_OFFSET UNITYSDK_OFFSET(0x1C311C70)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_REBUILDLAYOUTIMMEDIATEIFNEED_OFFSET UNITYSDK_OFFSET(0x1C313230)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_REGISTERCANVASELEMENTFORGRAPHICREBUILD_OFFSET UNITYSDK_OFFSET(0x1C313650)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_REGISTERCANVASELEMENTFORLAYOUTREBUILD_OFFSET UNITYSDK_OFFSET(0x1C313400)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_REGISTERSMOOTHMASK_OFFSET UNITYSDK_OFFSET(0x1C313D00)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_SORTLAYOUTLIST_OFFSET UNITYSDK_OFFSET(0x1C313080)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_TRYREGISTERCANVASELEMENTFORLAYOUTREBUILD_OFFSET UNITYSDK_OFFSET(0x1C3135C0)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_UNREGISTERCANVASELEMENTFORREBUILD_OFFSET UNITYSDK_OFFSET(0x1C313780)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY_UNREGISTERSMOOTHMASK_OFFSET UNITYSDK_OFFSET(0x1C313DC0)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C313E80)
#define UNITYENGINE_UI_CANVASUPDATEREGISTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C311320)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int CanvasUpdateRegistry_TypeDefinitionIndex = 8342;

	class CanvasUpdateRegistry : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::UnityEngine::UI::ICanvasElement*>** StaticGet_s_SortLayoutFunction()
		{
			return (::System::Comparison_1<::UnityEngine::UI::ICanvasElement*>**)Il2CppClass::FromTypeDefinitionIndex(CanvasUpdateRegistry_TypeDefinitionIndex)->GetStaticField(0x7780);
		}
		static ::UnityEngine::UI::CanvasUpdateRegistry** StaticGet_s_Instance()
		{
			return (::UnityEngine::UI::CanvasUpdateRegistry**)Il2CppClass::FromTypeDefinitionIndex(CanvasUpdateRegistry_TypeDefinitionIndex)->GetStaticField(0x7788);
		}
		::System::Boolean m_PerformingLayoutUpdate; // 0x10
		::System::Boolean m_PerformingGraphicUpdate; // 0x11
		::Il2CppArray<::System::String*>* m_CanvasUpdateProfilerStrings; // 0x18
		::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>* m_LayoutRebuildQueue; // 0x20
		::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::ICanvasElement*>* m_GraphicRebuildQueue; // 0x28
		::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::SmoothMask*>* m_SmoothMaskQueue; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY__CCTOR_OFFSET))();
		}

		static ::UnityEngine::UI::CanvasUpdateRegistry* get_instance()
		{
			return ((::UnityEngine::UI::CanvasUpdateRegistry*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_GET_INSTANCE_OFFSET))();
		}

		::System::Boolean ObjectValidForUpdate(::UnityEngine::UI::ICanvasElement* element)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::ICanvasElement*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_OBJECTVALIDFORUPDATE_OFFSET))(this, element);
		}

		::System::Void CleanInvalidItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_CLEANINVALIDITEMS_OFFSET))(this);
		}

		::System::Void PerformUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_PERFORMUPDATE_OFFSET))(this);
		}

		static ::System::Int32 ParentCount(::UnityEngine::Transform* child)
		{
			return ((::System::Int32(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_PARENTCOUNT_OFFSET))(child);
		}

		static ::System::Int32 SortLayoutList(::UnityEngine::UI::ICanvasElement* x, ::UnityEngine::UI::ICanvasElement* y)
		{
			return ((::System::Int32(*)(::UnityEngine::UI::ICanvasElement*, ::UnityEngine::UI::ICanvasElement*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_SORTLAYOUTLIST_OFFSET))(x, y);
		}

		static ::System::Void RebuildLayoutImmediateIfNeed(::UnityEngine::UI::LayoutRebuilder* layoutRebuilder)
		{
			return ((::System::Void(*)(::UnityEngine::UI::LayoutRebuilder*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_REBUILDLAYOUTIMMEDIATEIFNEED_OFFSET))(layoutRebuilder);
		}

		::System::Void InternalRebuildLayoutImmediateIfNeed(::UnityEngine::UI::LayoutRebuilder* layoutRebuilder)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::LayoutRebuilder*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_INTERNALREBUILDLAYOUTIMMEDIATEIFNEED_OFFSET))(this, layoutRebuilder);
		}

		static ::System::Void RegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* element)
		{
			return ((::System::Void(*)(::UnityEngine::UI::ICanvasElement*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_REGISTERCANVASELEMENTFORLAYOUTREBUILD_OFFSET))(element);
		}

		static ::System::Boolean TryRegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* element)
		{
			return ((::System::Boolean(*)(::UnityEngine::UI::ICanvasElement*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_TRYREGISTERCANVASELEMENTFORLAYOUTREBUILD_OFFSET))(element);
		}

		::System::Boolean InternalRegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* element)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::ICanvasElement*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_INTERNALREGISTERCANVASELEMENTFORLAYOUTREBUILD_OFFSET))(this, element);
		}

		static ::System::Void RegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* element)
		{
			return ((::System::Void(*)(::UnityEngine::UI::ICanvasElement*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_REGISTERCANVASELEMENTFORGRAPHICREBUILD_OFFSET))(element);
		}

		::System::Boolean InternalRegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* element)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::ICanvasElement*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_INTERNALREGISTERCANVASELEMENTFORGRAPHICREBUILD_OFFSET))(this, element);
		}

		static ::System::Void UnRegisterCanvasElementForRebuild(::UnityEngine::UI::ICanvasElement* element)
		{
			return ((::System::Void(*)(::UnityEngine::UI::ICanvasElement*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_UNREGISTERCANVASELEMENTFORREBUILD_OFFSET))(element);
		}

		::System::Void InternalUnRegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* element)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ICanvasElement*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_INTERNALUNREGISTERCANVASELEMENTFORLAYOUTREBUILD_OFFSET))(this, element);
		}

		::System::Void InternalUnRegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* element)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ICanvasElement*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_INTERNALUNREGISTERCANVASELEMENTFORGRAPHICREBUILD_OFFSET))(this, element);
		}

		static ::System::Boolean IsRebuildingLayout()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_ISREBUILDINGLAYOUT_OFFSET))();
		}

		static ::System::Boolean IsRebuildingGraphics()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_ISREBUILDINGGRAPHICS_OFFSET))();
		}

		static ::System::Void RegisterSmoothMask(::UnityEngine::UI::SmoothMask* smoothMask)
		{
			return ((::System::Void(*)(::UnityEngine::UI::SmoothMask*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_REGISTERSMOOTHMASK_OFFSET))(smoothMask);
		}

		static ::System::Void UnRegisterSmoothMask(::UnityEngine::UI::SmoothMask* smoothMask)
		{
			return ((::System::Void(*)(::UnityEngine::UI::SmoothMask*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CANVASUPDATEREGISTRY_UNREGISTERSMOOTHMASK_OFFSET))(smoothMask);
		}
	};
}
