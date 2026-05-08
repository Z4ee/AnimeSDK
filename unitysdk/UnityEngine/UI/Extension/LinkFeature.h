#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/Extension/LinkBoundsInfo.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::UI { class VertexHelper; }
namespace UnityEngine::UI::Extension { class NAP_TextInfo; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_BUILDLINEBOUNDS_OFFSET UNITYSDK_OFFSET(0x18AE8750)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_BUILDLINKBOUNDSINFOS_OFFSET UNITYSDK_OFFSET(0x18AE8050)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_DISABLEHANDLER_OFFSET UNITYSDK_OFFSET(0x18AE7D80)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_ENSUREHANDLER_OFFSET UNITYSDK_OFFSET(0x18AE8320)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_FINDLINKATLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x18AE8DE0)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_FINDLINKATSCREENPOSITION_OFFSET UNITYSDK_OFFSET(0x18AE8EF0)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_GETREQUIREDRICHTAGS_OFFSET UNITYSDK_OFFSET(0x18AE7C40)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_GET_CONTENTACTIVE_OFFSET UNITYSDK_OFFSET(0x18AE7B30)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_GET_HOST_OFFSET UNITYSDK_OFFSET(0x18AE79E0)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_GET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0x18AE7A20)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_GET_LINKS_OFFSET UNITYSDK_OFFSET(0x18AE79F0)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_GET_PREPROCESSORDER_OFFSET UNITYSDK_OFFSET(0x18AE7B50)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_GET_REVISION_OFFSET UNITYSDK_OFFSET(0x18AE7A00)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_ONACTIVATE_OFFSET UNITYSDK_OFFSET(0x18AE7BB0)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18AE8700)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_ONINIT_OFFSET UNITYSDK_OFFSET(0x18AE7B60)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_ONPOSTPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x18AE7CC0)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_ONPOSTREBUILDADJUSTEDTEXT_OFFSET UNITYSDK_OFFSET(0x18AE8680)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_ONPREPROCESSTEXT_OFFSET UNITYSDK_OFFSET(0x18AE7BF0)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_ONREFRESH_OFFSET UNITYSDK_OFFSET(0x18AE86C0)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_SCANRAWQUADBOUNDS_OFFSET UNITYSDK_OFFSET(0x18AE8BB0)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_SET_CONTENTACTIVE_OFFSET UNITYSDK_OFFSET(0x18AE7B40)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_SET_REVISION_OFFSET UNITYSDK_OFFSET(0x18AE7A10)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE__CTOR_OFFSET UNITYSDK_OFFSET(0x18AE9180)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int LinkFeature_TypeDefinitionIndex = 47483;

	class LinkFeature : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::LinkBoundsInfo>* _links; // 0x10
		::System::Action_1<::System::String*>* onLinkClicked; // 0x18
		::System::Action_1<::System::String*>* onLinkHovered; // 0x20
		::UnityEngine::UI::Extension::UILocalizationText* _host; // 0x28
		::System::Boolean _ContentActive_k__BackingField; // 0x30
		::System::Int32 _Revision_k__BackingField; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE__CTOR_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UILocalizationText* get_Host()
		{
			return ((::UnityEngine::UI::Extension::UILocalizationText*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_GET_HOST_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UI::Extension::LinkBoundsInfo>* get_Links()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::UI::Extension::LinkBoundsInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_GET_LINKS_OFFSET))(this);
		}

		::System::Int32 get_Revision()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_GET_REVISION_OFFSET))(this);
		}

		::System::Void set_Revision(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_SET_REVISION_OFFSET))(this, value);
		}

		::System::Boolean get_IsActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_GET_ISACTIVATED_OFFSET))(this);
		}

		::System::Boolean get_ContentActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_GET_CONTENTACTIVE_OFFSET))(this);
		}

		::System::Void set_ContentActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_SET_CONTENTACTIVE_OFFSET))(this, value);
		}

		::System::Int32 get_PreprocessOrder()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_GET_PREPROCESSORDER_OFFSET))(this);
		}

		::System::Void OnInit(::UnityEngine::UI::Extension::UILocalizationText* host)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_ONINIT_OFFSET))(this, host);
		}

		::System::Void OnActivate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_ONACTIVATE_OFFSET))(this);
		}

		::System::String* OnPreprocessText(::System::String* rawText)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_ONPREPROCESSTEXT_OFFSET))(this, rawText);
		}

		::System::UInt32 GetRequiredRichTags()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_GETREQUIREDRICHTAGS_OFFSET))(this);
		}

		::System::Void OnPostPopulateMesh(::UnityEngine::UI::VertexHelper* toFill)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_ONPOSTPOPULATEMESH_OFFSET))(this, toFill);
		}

		::System::Boolean OnPostRebuildAdjustedText()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_ONPOSTREBUILDADJUSTEDTEXT_OFFSET))(this);
		}

		::System::Void OnRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_ONREFRESH_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_ONDESTROY_OFFSET))(this);
		}

		::System::Void EnsureHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_ENSUREHANDLER_OFFSET))(this);
		}

		::System::Void DisableHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_DISABLEHANDLER_OFFSET))(this);
		}

		::System::Void BuildLinkBoundsInfos(::UnityEngine::UI::VertexHelper* toFill)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_BUILDLINKBOUNDSINFOS_OFFSET))(this, toFill);
		}

		::System::Void BuildLineBounds(::UnityEngine::UI::Extension::LinkBoundsInfo& link, ::UnityEngine::UI::Extension::NAP_TextInfo* textInfo)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::LinkBoundsInfo&, ::UnityEngine::UI::Extension::NAP_TextInfo*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_BUILDLINEBOUNDS_OFFSET))(this, link, textInfo);
		}

		static ::System::Void ScanRawQuadBounds(::UnityEngine::UI::VertexHelper* vh, ::System::Collections::Generic::List_1<::UnityEngine::Rect>* output)
		{
			return ((::System::Void(*)(::UnityEngine::UI::VertexHelper*, ::System::Collections::Generic::List_1<::UnityEngine::Rect>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_SCANRAWQUADBOUNDS_OFFSET))(vh, output);
		}

		::System::String* FindLinkAtLocalPosition(::UnityEngine::Vector2 localPoint)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_FINDLINKATLOCALPOSITION_OFFSET))(this, localPoint);
		}

		::System::String* FindLinkAtScreenPosition(::UnityEngine::Vector2 screenPos, ::UnityEngine::Camera* camera)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_FINDLINKATSCREENPOSITION_OFFSET))(this, screenPos, camera);
		}
	};
}
