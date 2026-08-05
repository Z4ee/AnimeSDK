#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Extension/LinkBoundsInfo.h"
#include "unitysdk/UnityEngine/UI/Extension/UITextFeatureBase.h"
#include "unitysdk/UnityEngine/UI/Extension/UITextFeatureRuntimeSwitchMask.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::UI::Extension { class NAP_TextInfo; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_BUILDLINEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1A6895F0)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_BUILDLINKBOUNDSINFOS_OFFSET UNITYSDK_OFFSET(0x1A688AB0)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_CLEARRUNTIMEDATA_OFFSET UNITYSDK_OFFSET(0x1A6889A0)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_DISABLEHANDLER_OFFSET UNITYSDK_OFFSET(0x1A688E80)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_ENSUREHANDLER_OFFSET UNITYSDK_OFFSET(0x1A6892F0)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_FINDLINKATLOCALPOSITION_1_OFFSET UNITYSDK_OFFSET(0x1A689A90)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_FINDLINKATLOCALPOSITION_OFFSET UNITYSDK_OFFSET(0x1A689A30)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_FINDLINKATSCREENPOSITION_1_OFFSET UNITYSDK_OFFSET(0x1A689E70)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_FINDLINKATSCREENPOSITION_OFFSET UNITYSDK_OFFSET(0x1A689E00)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_GETREQUIREDRICHTAGS_OFFSET UNITYSDK_OFFSET(0x1A6886F0)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_GET_HOST_OFFSET UNITYSDK_OFFSET(0x1A6886B0)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_GET_LINKS_OFFSET UNITYSDK_OFFSET(0x1A6886C0)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_GET_REVISION_OFFSET UNITYSDK_OFFSET(0x1A6886D0)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_GET_RUNTIMESWITCHMASK_OFFSET UNITYSDK_OFFSET(0x1A6891F0)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_ONAWAKECORE_OFFSET UNITYSDK_OFFSET(0x1A688D60)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_ONCONTENTLOST_OFFSET UNITYSDK_OFFSET(0x1A688770)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_ONDESTROYCORE_OFFSET UNITYSDK_OFFSET(0x1A689150)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_ONDISABLECORE_OFFSET UNITYSDK_OFFSET(0x1A688DF0)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_SET_REVISION_OFFSET UNITYSDK_OFFSET(0x1A6886E0)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_UNITYENGINE_UI_EXTENSION_IPOSTCANVASREBUILD_EXECUTEPOSTREBUILD_OFFSET UNITYSDK_OFFSET(0x1A689240)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_UNITYENGINE_UI_EXTENSION_IPOSTCANVASREBUILD_GET_CANEXECUTE_OFFSET UNITYSDK_OFFSET(0x1A689200)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTFEATUREDATABUILDER_REBUILDFEATUREDATA_OFFSET UNITYSDK_OFFSET(0x1A688870)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A68A110)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE___BASE_GETREQUIREDRICHTAGS_OFFSET UNITYSDK_OFFSET(0x1A68A180)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE___BASE_ONAWAKECORE_OFFSET UNITYSDK_OFFSET(0x1A68A210)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE___BASE_ONCONTENTLOST_OFFSET UNITYSDK_OFFSET(0x1A68A2A0)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE___BASE_ONDESTROYCORE_OFFSET UNITYSDK_OFFSET(0x1A68A330)
#define UNITYENGINE_UI_EXTENSION_LINKFEATURE___BASE_ONDISABLECORE_OFFSET UNITYSDK_OFFSET(0x1A68A3C0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int LinkFeature_TypeDefinitionIndex = 77780;

	class LinkFeature : public ::UnityEngine::UI::Extension::UITextFeatureBase
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::LinkBoundsInfo>* _links; // 0x20
		::System::Action_1<::System::String*>* onLinkClicked; // 0x28
		::System::Action_1<::System::String*>* onLinkHovered; // 0x30
		::System::Int32 _Revision_k__BackingField; // 0x38
		::System::Boolean _targetHandlerEnabled; // 0x3C
		::System::Boolean _pendingHandlerUpdate; // 0x3D

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

		::System::UInt32 GetRequiredRichTags()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_GETREQUIREDRICHTAGS_OFFSET))(this);
		}

		::System::Void OnContentLost()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_ONCONTENTLOST_OFFSET))(this);
		}

		::System::Void UnityEngine_UI_Extension_IUITextFeatureDataBuilder_RebuildFeatureData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_UNITYENGINE_UI_EXTENSION_IUITEXTFEATUREDATABUILDER_REBUILDFEATUREDATA_OFFSET))(this);
		}

		::System::Void OnAwakeCore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_ONAWAKECORE_OFFSET))(this);
		}

		::System::Void OnDisableCore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_ONDISABLECORE_OFFSET))(this);
		}

		::System::Void OnDestroyCore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_ONDESTROYCORE_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::UITextFeatureRuntimeSwitchMask get_RuntimeSwitchMask()
		{
			return ((::UnityEngine::UI::Extension::UITextFeatureRuntimeSwitchMask(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_GET_RUNTIMESWITCHMASK_OFFSET))(this);
		}

		::System::Boolean UnityEngine_UI_Extension_IPostCanvasRebuild_get_CanExecute()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_UNITYENGINE_UI_EXTENSION_IPOSTCANVASREBUILD_GET_CANEXECUTE_OFFSET))(this);
		}

		::System::Void UnityEngine_UI_Extension_IPostCanvasRebuild_ExecutePostRebuild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_UNITYENGINE_UI_EXTENSION_IPOSTCANVASREBUILD_EXECUTEPOSTREBUILD_OFFSET))(this);
		}

		::System::Void EnsureHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_ENSUREHANDLER_OFFSET))(this);
		}

		::System::Void DisableHandler()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_DISABLEHANDLER_OFFSET))(this);
		}

		::System::Void ClearRuntimeData(::System::Boolean disableImmediately)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_CLEARRUNTIMEDATA_OFFSET))(this, disableImmediately);
		}

		::System::Void BuildLinkBoundsInfos(::UnityEngine::UI::Extension::NAP_TextInfo* textInfo)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::NAP_TextInfo*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_BUILDLINKBOUNDSINFOS_OFFSET))(this, textInfo);
		}

		::System::Void BuildLineBounds(::UnityEngine::UI::Extension::LinkBoundsInfo& link, ::UnityEngine::UI::Extension::NAP_TextInfo* textInfo)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::LinkBoundsInfo&, ::UnityEngine::UI::Extension::NAP_TextInfo*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_BUILDLINEBOUNDS_OFFSET))(this, link, textInfo);
		}

		::System::String* FindLinkAtLocalPosition(::UnityEngine::Vector2 localPoint)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_FINDLINKATLOCALPOSITION_OFFSET))(this, localPoint);
		}

		::System::String* FindLinkAtLocalPosition_1(::UnityEngine::Vector2 localPoint, ::System::Int32& linkIndex)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Vector2, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_FINDLINKATLOCALPOSITION_1_OFFSET))(this, localPoint, linkIndex);
		}

		::System::String* FindLinkAtScreenPosition(::UnityEngine::Vector2 screenPos, ::UnityEngine::Camera* camera)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_FINDLINKATSCREENPOSITION_OFFSET))(this, screenPos, camera);
		}

		::System::String* FindLinkAtScreenPosition_1(::UnityEngine::Vector2 screenPos, ::UnityEngine::Camera* camera, ::System::Int32& linkIndex)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*, ::System::Int32&))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE_FINDLINKATSCREENPOSITION_1_OFFSET))(this, screenPos, camera, linkIndex);
		}

		::System::UInt32 __base_GetRequiredRichTags()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE___BASE_GETREQUIREDRICHTAGS_OFFSET))(this);
		}

		::System::Void __base_OnAwakeCore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE___BASE_ONAWAKECORE_OFFSET))(this);
		}

		::System::Void __base_OnContentLost()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE___BASE_ONCONTENTLOST_OFFSET))(this);
		}

		::System::Void __base_OnDestroyCore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE___BASE_ONDESTROYCORE_OFFSET))(this);
		}

		::System::Void __base_OnDisableCore()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_LINKFEATURE___BASE_ONDISABLECORE_OFFSET))(this);
		}
	};
}
