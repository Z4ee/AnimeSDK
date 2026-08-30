#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class ICanvasElement; }

#define TMPRO_TMP_UPDATEREGISTRY_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x13512400)
#define TMPRO_TMP_UPDATEREGISTRY_INTERNALREGISTERCANVASELEMENTFORGRAPHICREBUILD_OFFSET UNITYSDK_OFFSET(0x13512860)
#define TMPRO_TMP_UPDATEREGISTRY_INTERNALREGISTERCANVASELEMENTFORLAYOUTREBUILD_OFFSET UNITYSDK_OFFSET(0x13512670)
#define TMPRO_TMP_UPDATEREGISTRY_INTERNALUNREGISTERCANVASELEMENTFORGRAPHICREBUILD_OFFSET UNITYSDK_OFFSET(0x13513240)
#define TMPRO_TMP_UPDATEREGISTRY_INTERNALUNREGISTERCANVASELEMENTFORLAYOUTREBUILD_OFFSET UNITYSDK_OFFSET(0x135130D0)
#define TMPRO_TMP_UPDATEREGISTRY_PERFORMUPDATEFORCANVASRENDEREROBJECTS_OFFSET UNITYSDK_OFFSET(0x135129C0)
#define TMPRO_TMP_UPDATEREGISTRY_PERFORMUPDATEFORMESHRENDEREROBJECTS_OFFSET UNITYSDK_OFFSET(0x13512F00)
#define TMPRO_TMP_UPDATEREGISTRY_REGISTERCANVASELEMENTFORGRAPHICREBUILD_OFFSET UNITYSDK_OFFSET(0x135127D0)
#define TMPRO_TMP_UPDATEREGISTRY_REGISTERCANVASELEMENTFORLAYOUTREBUILD_OFFSET UNITYSDK_OFFSET(0x135125E0)
#define TMPRO_TMP_UPDATEREGISTRY_UNREGISTERCANVASELEMENTFORREBUILD_OFFSET UNITYSDK_OFFSET(0x13512FB0)
#define TMPRO_TMP_UPDATEREGISTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x13512480)

namespace TMPro
{
	inline static constexpr unsigned int TMP_UpdateRegistry_TypeDefinitionIndex = 43482;

	class TMP_UpdateRegistry : public ::System::Object
	{
	public:
		static ::TMPro::TMP_UpdateRegistry** StaticGet_s_Instance()
		{
			return (::TMPro::TMP_UpdateRegistry**)Il2CppClass::FromTypeDefinitionIndex(TMP_UpdateRegistry_TypeDefinitionIndex)->GetStaticField(0xB840);
		}
		::System::Collections::Generic::List_1<::UnityEngine::UI::ICanvasElement*>* m_LayoutRebuildQueue; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::UI::ICanvasElement*>* m_GraphicRebuildQueue; // 0x18
		::System::Collections::Generic::HashSet_1<::System::Int32>* m_LayoutQueueLookup; // 0x20
		::System::Collections::Generic::HashSet_1<::System::Int32>* m_GraphicQueueLookup; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEREGISTRY__CTOR_OFFSET))(this);
		}

		static ::TMPro::TMP_UpdateRegistry* get_instance()
		{
			return ((::TMPro::TMP_UpdateRegistry*(*)())((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEREGISTRY_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void RegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* a1)
		{
			return ((::System::Void(*)(::UnityEngine::UI::ICanvasElement*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEREGISTRY_REGISTERCANVASELEMENTFORLAYOUTREBUILD_OFFSET))(a1);
		}

		::System::Boolean InternalRegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::ICanvasElement*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEREGISTRY_INTERNALREGISTERCANVASELEMENTFORLAYOUTREBUILD_OFFSET))(this, a1);
		}

		static ::System::Void RegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* a1)
		{
			return ((::System::Void(*)(::UnityEngine::UI::ICanvasElement*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEREGISTRY_REGISTERCANVASELEMENTFORGRAPHICREBUILD_OFFSET))(a1);
		}

		::System::Boolean InternalRegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::ICanvasElement*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEREGISTRY_INTERNALREGISTERCANVASELEMENTFORGRAPHICREBUILD_OFFSET))(this, a1);
		}

		::System::Void PerformUpdateForCanvasRendererObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEREGISTRY_PERFORMUPDATEFORCANVASRENDEREROBJECTS_OFFSET))(this);
		}

		::System::Void PerformUpdateForMeshRendererObjects()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEREGISTRY_PERFORMUPDATEFORMESHRENDEREROBJECTS_OFFSET))(this);
		}

		static ::System::Void UnRegisterCanvasElementForRebuild(::UnityEngine::UI::ICanvasElement* a1)
		{
			return ((::System::Void(*)(::UnityEngine::UI::ICanvasElement*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEREGISTRY_UNREGISTERCANVASELEMENTFORREBUILD_OFFSET))(a1);
		}

		::System::Void InternalUnRegisterCanvasElementForLayoutRebuild(::UnityEngine::UI::ICanvasElement* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ICanvasElement*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEREGISTRY_INTERNALUNREGISTERCANVASELEMENTFORLAYOUTREBUILD_OFFSET))(this, a1);
		}

		::System::Void InternalUnRegisterCanvasElementForGraphicRebuild(::UnityEngine::UI::ICanvasElement* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ICanvasElement*))((::PBYTE)hIl2Cpp + TMPRO_TMP_UPDATEREGISTRY_INTERNALUNREGISTERCANVASELEMENTFORGRAPHICREBUILD_OFFSET))(this, a1);
		}
	};
}
