#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine::UI { class Graphic; }
namespace UnityEngine::UI { class GraphicRegistry_CanvasGraphicsData; }

#define UNITYENGINE_UI_GRAPHICREGISTRY_GETGRAPHICSFORCANVAS_OFFSET UNITYSDK_OFFSET(0x18B16B80)
#define UNITYENGINE_UI_GRAPHICREGISTRY_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x18B18920)
#define UNITYENGINE_UI_GRAPHICREGISTRY_REGISTERCANVASGRAPHICSCHANGECALLBACK_OFFSET UNITYSDK_OFFSET(0x18B17ED0)
#define UNITYENGINE_UI_GRAPHICREGISTRY_REGISTERGRAPHICFORCANVAS_OFFSET UNITYSDK_OFFSET(0x18B111F0)
#define UNITYENGINE_UI_GRAPHICREGISTRY_UNREGISTERCANVASGRAPHICSCHANGECALLBACK_OFFSET UNITYSDK_OFFSET(0x18B180C0)
#define UNITYENGINE_UI_GRAPHICREGISTRY_UNREGISTERGRAPHICFORCANVAS_OFFSET UNITYSDK_OFFSET(0x18B10E00)
#define UNITYENGINE_UI_GRAPHICREGISTRY__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B189B0)
#define UNITYENGINE_UI_GRAPHICREGISTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x18B18730)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int GraphicRegistry_TypeDefinitionIndex = 5589;

	class GraphicRegistry : public ::System::Object
	{
	public:
		static ::UnityEngine::UI::GraphicRegistry** StaticGet_s_Instance()
		{
			return (::UnityEngine::UI::GraphicRegistry**)Il2CppClass::FromTypeDefinitionIndex(GraphicRegistry_TypeDefinitionIndex)->GetStaticField(0x5000);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>** StaticGet_s_EmptyList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::UI::Graphic*>**)Il2CppClass::FromTypeDefinitionIndex(GraphicRegistry_TypeDefinitionIndex)->GetStaticField(0x5008);
		}
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Canvas*, ::UnityEngine::UI::GraphicRegistry_CanvasGraphicsData*>* m_Graphics; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY__CCTOR_OFFSET))();
		}

		static ::UnityEngine::UI::GraphicRegistry* get_instance()
		{
			return ((::UnityEngine::UI::GraphicRegistry*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void RegisterGraphicForCanvas(::UnityEngine::Canvas* c, ::UnityEngine::UI::Graphic* graphic)
		{
			return ((::System::Void(*)(::UnityEngine::Canvas*, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY_REGISTERGRAPHICFORCANVAS_OFFSET))(c, graphic);
		}

		static ::System::Void UnregisterGraphicForCanvas(::UnityEngine::Canvas* c, ::UnityEngine::UI::Graphic* graphic)
		{
			return ((::System::Void(*)(::UnityEngine::Canvas*, ::UnityEngine::UI::Graphic*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY_UNREGISTERGRAPHICFORCANVAS_OFFSET))(c, graphic);
		}

		static ::System::Collections::Generic::IList_1<::UnityEngine::UI::Graphic*>* GetGraphicsForCanvas(::UnityEngine::Canvas* canvas)
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::UI::Graphic*>*(*)(::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY_GETGRAPHICSFORCANVAS_OFFSET))(canvas);
		}

		static ::System::Void RegisterCanvasGraphicsChangeCallback(::UnityEngine::Canvas* canvas, ::System::Action_2<::UnityEngine::UI::Graphic*, ::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::UnityEngine::Canvas*, ::System::Action_2<::UnityEngine::UI::Graphic*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY_REGISTERCANVASGRAPHICSCHANGECALLBACK_OFFSET))(canvas, callback);
		}

		static ::System::Void UnregisterCanvasGraphicsChangeCallback(::UnityEngine::Canvas* canvas, ::System::Action_2<::UnityEngine::UI::Graphic*, ::System::Boolean>* callback)
		{
			return ((::System::Void(*)(::UnityEngine::Canvas*, ::System::Action_2<::UnityEngine::UI::Graphic*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_GRAPHICREGISTRY_UNREGISTERCANVASGRAPHICSCHANGECALLBACK_OFFSET))(canvas, callback);
		}
	};
}
