#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class ICanvasElement; }

#define TMPRO_TMP_UPDATEREGISTRY_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1C549220)
#define TMPRO_TMP_UPDATEREGISTRY_INTERNALREGISTERCANVASELEMENTFORGRAPHICREBUILD_OFFSET UNITYSDK_OFFSET(0x1C549670)
#define TMPRO_TMP_UPDATEREGISTRY_INTERNALREGISTERCANVASELEMENTFORLAYOUTREBUILD_OFFSET UNITYSDK_OFFSET(0x1C549510)
#define TMPRO_TMP_UPDATEREGISTRY_INTERNALUNREGISTERCANVASELEMENTFORGRAPHICREBUILD_OFFSET UNITYSDK_OFFSET(0x1C549E70)
#define TMPRO_TMP_UPDATEREGISTRY_INTERNALUNREGISTERCANVASELEMENTFORLAYOUTREBUILD_OFFSET UNITYSDK_OFFSET(0x1C549D30)
#define TMPRO_TMP_UPDATEREGISTRY_PERFORMUPDATEFORCANVASRENDEREROBJECTS_OFFSET UNITYSDK_OFFSET(0x1C549740)
#define TMPRO_TMP_UPDATEREGISTRY_PERFORMUPDATEFORMESHRENDEREROBJECTS_OFFSET UNITYSDK_OFFSET(0x1C549BA0)
#define TMPRO_TMP_UPDATEREGISTRY_REGISTERCANVASELEMENTFORGRAPHICREBUILD_OFFSET UNITYSDK_OFFSET(0x1C5495E0)
#define TMPRO_TMP_UPDATEREGISTRY_REGISTERCANVASELEMENTFORLAYOUTREBUILD_OFFSET UNITYSDK_OFFSET(0x1C549480)
#define TMPRO_TMP_UPDATEREGISTRY_UNREGISTERCANVASELEMENTFORREBUILD_OFFSET UNITYSDK_OFFSET(0x1C549C10)
#define TMPRO_TMP_UPDATEREGISTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5492A0)

namespace TMPro
{
	inline static constexpr unsigned int TMP_UpdateRegistry_TypeDefinitionIndex = 37606;

	class TMP_UpdateRegistry : public ::System::Object
	{
	public:
		static ::TMPro::TMP_UpdateRegistry** StaticGet_s_Instance()
		{
			return (::TMPro::TMP_UpdateRegistry**)Il2CppClass::FromTypeDefinitionIndex(TMP_UpdateRegistry_TypeDefinitionIndex)->GetStaticField(0x291C0);
		}
		::System::Collections::Generic::HashSet_1<::System::Int32>* m_GraphicQueueLookup; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::UI::ICanvasElement*>* m_GraphicRebuildQueue; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::UI::ICanvasElement*>* m_LayoutRebuildQueue; // 0x20
		::System::Collections::Generic::HashSet_1<::System::Int32>* m_LayoutQueueLookup; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEREGISTRY__CTOR_OFFSET))(this);
		}

		static ::TMPro::TMP_UpdateRegistry* get_instance()
		{
			return ((::TMPro::TMP_UpdateRegistry*(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEREGISTRY_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void RegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* element)
		{
			return ((::System::Void(*)(::UnityEngine::UI::ICanvasElement*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEREGISTRY_REGISTERCANVASELEMENTFORLAYOUTREBUILD_OFFSET))(element);
		}

		::System::Boolean InternalRegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* element)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::ICanvasElement*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEREGISTRY_INTERNALREGISTERCANVASELEMENTFORLAYOUTREBUILD_OFFSET))(this, element);
		}

		static ::System::Void RegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* element)
		{
			return ((::System::Void(*)(::UnityEngine::UI::ICanvasElement*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEREGISTRY_REGISTERCANVASELEMENTFORGRAPHICREBUILD_OFFSET))(element);
		}

		::System::Boolean InternalRegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* element)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::ICanvasElement*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEREGISTRY_INTERNALREGISTERCANVASELEMENTFORGRAPHICREBUILD_OFFSET))(this, element);
		}

		::System::Void PerformUpdateForCanvasRendererObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEREGISTRY_PERFORMUPDATEFORCANVASRENDEREROBJECTS_OFFSET))(this);
		}

		::System::Void PerformUpdateForMeshRendererObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEREGISTRY_PERFORMUPDATEFORMESHRENDEREROBJECTS_OFFSET))(this);
		}

		static ::System::Void UnRegisterCanvasElementForRebuild(::UnityEngine::UI::ICanvasElement* element)
		{
			return ((::System::Void(*)(::UnityEngine::UI::ICanvasElement*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEREGISTRY_UNREGISTERCANVASELEMENTFORREBUILD_OFFSET))(element);
		}

		::System::Void InternalUnRegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* element)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ICanvasElement*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEREGISTRY_INTERNALUNREGISTERCANVASELEMENTFORLAYOUTREBUILD_OFFSET))(this, element);
		}

		::System::Void InternalUnRegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* element)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ICanvasElement*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEREGISTRY_INTERNALUNREGISTERCANVASELEMENTFORGRAPHICREBUILD_OFFSET))(this, element);
		}
	};
}
