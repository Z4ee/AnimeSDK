#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UI/GraphicRaycastTargetCacheData.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine::UI::Collections { template <typename T1, typename T2> class IndexedTable_2; }
namespace UnityEngine::UI::Collections { template <typename T> class IndexedSet_1; }

#define UNITYENGINE_UI_GRAPHICREGISTRY_CLEARALLRAYCASTTARGETCACHEDATA_OFFSET UNITYSDK_OFFSET(0x1B84A2D0)
#define UNITYENGINE_UI_GRAPHICREGISTRY_GETALLRAYCASTTARGETGRAPHICS_OFFSET UNITYSDK_OFFSET(0x1B843DA0)
#define UNITYENGINE_UI_GRAPHICREGISTRY_GETGRAPHICSFORCANVAS_OFFSET UNITYSDK_OFFSET(0x1B84BB00)
#define UNITYENGINE_UI_GRAPHICREGISTRY_GETRAYCASTTARGETCACHEDATA_OFFSET UNITYSDK_OFFSET(0x1B842F40)
#define UNITYENGINE_UI_GRAPHICREGISTRY_GETRAYCASTTARGETGRAPHICSFORCANVAS_OFFSET UNITYSDK_OFFSET(0x1B84BC50)
#define UNITYENGINE_UI_GRAPHICREGISTRY_GET_ENABLECACHERAYCASTTARGET_OFFSET UNITYSDK_OFFSET(0x1B849B40)
#define UNITYENGINE_UI_GRAPHICREGISTRY_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1B849BD0)
#define UNITYENGINE_UI_GRAPHICREGISTRY_REFRESHALLRAYCASTTARGETCACHEDATA_OFFSET UNITYSDK_OFFSET(0x1B849C20)
#define UNITYENGINE_UI_GRAPHICREGISTRY_REFRESHRAYCASTGRAPHICCACHEDATA_OFFSET UNITYSDK_OFFSET(0x1B84B990)
#define UNITYENGINE_UI_GRAPHICREGISTRY_REFRESHRAYCASTGRAPHICFORCANVAS_OFFSET UNITYSDK_OFFSET(0x1B84B340)
#define UNITYENGINE_UI_GRAPHICREGISTRY_REGISTERGRAPHICFORCANVAS_OFFSET UNITYSDK_OFFSET(0x1B84A700)
#define UNITYENGINE_UI_GRAPHICREGISTRY_REGISTERGRAPHIC_OFFSET UNITYSDK_OFFSET(0x1B84AA50)
#define UNITYENGINE_UI_GRAPHICREGISTRY_SET_ENABLECACHERAYCASTTARGET_OFFSET UNITYSDK_OFFSET(0x1B840270)
#define UNITYENGINE_UI_GRAPHICREGISTRY_TRYADDRAYCASTTARGETGRAPHICCACHEDATA_OFFSET UNITYSDK_OFFSET(0x1B84AC00)
#define UNITYENGINE_UI_GRAPHICREGISTRY_UNREGISTERGRAPHICFORCANVAS_OFFSET UNITYSDK_OFFSET(0x1B84AE40)
#define UNITYENGINE_UI_GRAPHICREGISTRY_UNREGISTERGRAPHIC_OFFSET UNITYSDK_OFFSET(0x1B84B1B0)
#define UNITYENGINE_UI_GRAPHICREGISTRY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B84BDA0)
#define UNITYENGINE_UI_GRAPHICREGISTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B84A430)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int GraphicRegistry_TypeDefinitionIndex = 8366;

	class GraphicRegistry : public ::System::Object
	{
	public:
		static ::UnityEngine::UI::GraphicRegistry** StaticGet_s_Instance()
		{
			return (::UnityEngine::UI::GraphicRegistry**)Il2CppClass::FromTypeDefinitionIndex(GraphicRegistry_TypeDefinitionIndex)->GetStaticField(0x7730);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>** StaticGet_s_EmptyList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>**)Il2CppClass::FromTypeDefinitionIndex(GraphicRegistry_TypeDefinitionIndex)->GetStaticField(0x7738);
		}
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Canvas*, ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::Graphic*>*>* m_Graphics; // 0x10
		::System::Boolean m_EnableCacheRaycastTarget; // 0x18
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Canvas*, ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::Graphic*>*>* m_RaycastTargetGraphics; // 0x20
		::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::Graphic*>* m_AllRaycastTargetGraphics; // 0x28
		::UnityEngine::UI::Collections::IndexedTable_2<::UnityEngine::UI::Graphic*, ::UnityEngine::UI::GraphicRaycastTargetCacheData>* m_RaycastTargetCachedData; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY__CCTOR_OFFSET))();
		}

		static ::System::Boolean get_EnableCacheRaycastTarget()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY_GET_ENABLECACHERAYCASTTARGET_OFFSET))();
		}

		static ::System::Void set_EnableCacheRaycastTarget(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY_SET_ENABLECACHERAYCASTTARGET_OFFSET))(value);
		}

		static ::UnityEngine::UI::GraphicRegistry* get_instance()
		{
			return ((::UnityEngine::UI::GraphicRegistry*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void RegisterGraphicForCanvas(::UnityEngine::Canvas* c, ::UnityEngine::UI::Graphic* graphic)
		{
			return ((::System::Void(*)(::UnityEngine::Canvas*, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY_REGISTERGRAPHICFORCANVAS_OFFSET))(c, graphic);
		}

		static ::System::Void RegisterGraphic(::System::Collections::Generic::Dictionary_2<::UnityEngine::Canvas*, ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::Graphic*>*>* targetContainer, ::UnityEngine::Canvas* c, ::UnityEngine::UI::Graphic* graphic)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::UnityEngine::Canvas*, ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::Graphic*>*>*, ::UnityEngine::Canvas*, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY_REGISTERGRAPHIC_OFFSET))(targetContainer, c, graphic);
		}

		static ::System::Void UnregisterGraphicForCanvas(::UnityEngine::Canvas* c, ::UnityEngine::UI::Graphic* graphic)
		{
			return ((::System::Void(*)(::UnityEngine::Canvas*, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY_UNREGISTERGRAPHICFORCANVAS_OFFSET))(c, graphic);
		}

		static ::System::Void UnregisterGraphic(::System::Collections::Generic::Dictionary_2<::UnityEngine::Canvas*, ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::Graphic*>*>* targetContainer, ::UnityEngine::Canvas* c, ::UnityEngine::UI::Graphic* graphic)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::UnityEngine::Canvas*, ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::Graphic*>*>*, ::UnityEngine::Canvas*, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY_UNREGISTERGRAPHIC_OFFSET))(targetContainer, c, graphic);
		}

		static ::System::Void RefreshRaycastGraphicForCanvas(::UnityEngine::Canvas* c, ::UnityEngine::UI::Graphic* graphic)
		{
			return ((::System::Void(*)(::UnityEngine::Canvas*, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY_REFRESHRAYCASTGRAPHICFORCANVAS_OFFSET))(c, graphic);
		}

		static ::System::Void TryAddRaycastTargetGraphicCacheData(::UnityEngine::UI::Graphic* graphic)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY_TRYADDRAYCASTTARGETGRAPHICCACHEDATA_OFFSET))(graphic);
		}

		static ::System::Void RefreshAllRaycastTargetCacheData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY_REFRESHALLRAYCASTTARGETCACHEDATA_OFFSET))();
		}

		static ::System::Void ClearAllRaycastTargetCacheData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY_CLEARALLRAYCASTTARGETCACHEDATA_OFFSET))();
		}

		static ::System::Void RefreshRaycastGraphicCacheData(::UnityEngine::UI::Graphic* graphic)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY_REFRESHRAYCASTGRAPHICCACHEDATA_OFFSET))(graphic);
		}

		static ::System::Collections::Generic::IList_1<::UnityEngine::UI::Graphic*>* GetGraphicsForCanvas(::UnityEngine::Canvas* canvas)
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::UI::Graphic*>*(*)(::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY_GETGRAPHICSFORCANVAS_OFFSET))(canvas);
		}

		static ::System::Collections::Generic::IList_1<::UnityEngine::UI::Graphic*>* GetRaycastTargetGraphicsForCanvas(::UnityEngine::Canvas* canvas)
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::UI::Graphic*>*(*)(::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY_GETRAYCASTTARGETGRAPHICSFORCANVAS_OFFSET))(canvas);
		}

		static ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::Graphic*>* GetAllRaycastTargetGraphics()
		{
			return ((::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::Graphic*>*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY_GETALLRAYCASTTARGETGRAPHICS_OFFSET))();
		}

		static ::System::Void GetRaycastTargetCacheData(::Il2CppArray<::UnityEngine::UI::GraphicRaycastTargetCacheData>*& outCacheData, ::System::Int32& cahceDataCount)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::UI::GraphicRaycastTargetCacheData>*&, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY_GETRAYCASTTARGETCACHEDATA_OFFSET))(outCacheData, cahceDataCount);
		}
	};
}
