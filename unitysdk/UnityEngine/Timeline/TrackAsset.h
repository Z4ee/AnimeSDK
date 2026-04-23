#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableBinding.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/DiscreteTime.h"
#include "unitysdk/UnityEngine/Timeline/MarkerList.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset_TransientBuildData.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Playables { class IPlayableAsset; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class IMarker; }
namespace UnityEngine::Timeline { class IPropertyCollector; }
namespace UnityEngine::Timeline { class RuntimeElement; }
namespace UnityEngine::Timeline { class TimelineAsset; }
namespace UnityEngine::Timeline { class TimelineClip; }
namespace UnityEngine::Timeline { class TrackBindingTypeAttribute; }
namespace UnityEngine::Timeline { template <typename T> class IntervalTree_1; }

#define UNITYENGINE_TIMELINE_TRACKASSET_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x1A3F2A40)
#define UNITYENGINE_TIMELINE_TRACKASSET_ADDCLIP_OFFSET UNITYSDK_OFFSET(0x1A3F3F40)
#define UNITYENGINE_TIMELINE_TRACKASSET_ADDMARKER_OFFSET UNITYSDK_OFFSET(0x1A3FAC70)
#define UNITYENGINE_TIMELINE_TRACKASSET_ADD_ONCLIPPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x1A3F8EF0)
#define UNITYENGINE_TIMELINE_TRACKASSET_ADD_ONTRACKANIMATIONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x1A3F90B0)
#define UNITYENGINE_TIMELINE_TRACKASSET_CALCULATEITEMSHASH_OFFSET UNITYSDK_OFFSET(0x1A3D9A90)
#define UNITYENGINE_TIMELINE_TRACKASSET_CANCOMPILECLIPSRECURSIVE_OFFSET UNITYSDK_OFFSET(0x1A3FB570)
#define UNITYENGINE_TIMELINE_TRACKASSET_CANCOMPILECLIPS_OFFSET UNITYSDK_OFFSET(0x1A3D5C10)
#define UNITYENGINE_TIMELINE_TRACKASSET_CANCOMPILENOTIFICATIONS_OFFSET UNITYSDK_OFFSET(0x1A3FC200)
#define UNITYENGINE_TIMELINE_TRACKASSET_CLEARCLIPSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A3FCDE0)
#define UNITYENGINE_TIMELINE_TRACKASSET_CLEARMARKERS_OFFSET UNITYSDK_OFFSET(0x1A3FAC20)
#define UNITYENGINE_TIMELINE_TRACKASSET_CLEARSUBTRACKSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A3FCE20)
#define UNITYENGINE_TIMELINE_TRACKASSET_COMPILECLIPS_OFFSET UNITYSDK_OFFSET(0x1A3FB8E0)
#define UNITYENGINE_TIMELINE_TRACKASSET_COMPILETRACKS_OFFSET UNITYSDK_OFFSET(0x1A3F9E10)
#define UNITYENGINE_TIMELINE_TRACKASSET_CONFIGURETRACKANIMATION_OFFSET UNITYSDK_OFFSET(0x1A3DEF70)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATEANDADDNEWCLIPOFTYPE_OFFSET UNITYSDK_OFFSET(0x1A3F9E20)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATECLIPFROMASSET_OFFSET UNITYSDK_OFFSET(0x1A3FA460)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATECLIPFROMPLAYABLEASSET_OFFSET UNITYSDK_OFFSET(0x1A3FA730)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATECLIPOFTYPE_OFFSET UNITYSDK_OFFSET(0x1A3FA280)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATECLIP_OFFSET UNITYSDK_OFFSET(0x1A3F9F20)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATECURVES_OFFSET UNITYSDK_OFFSET(0x1A3F9CB0)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATEDEFAULTCLIP_OFFSET UNITYSDK_OFFSET(0x1A3DE130)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATEMARKER_OFFSET UNITYSDK_OFFSET(0x1A3F9EB0)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATENEWCLIPCONTAINERINTERNAL_OFFSET UNITYSDK_OFFSET(0x1A3FA910)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATENOTIFICATIONSPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1A3FAE20)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATEPLAYABLEGRAPH_OFFSET UNITYSDK_OFFSET(0x1A3F7A70)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATEPLAYABLE_1_OFFSET UNITYSDK_OFFSET(0x1A3FD9D0)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1A3F9DC0)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1A3F9D20)
#define UNITYENGINE_TIMELINE_TRACKASSET_DELETEMARKERRAW_OFFSET UNITYSDK_OFFSET(0x1A3FACE0)
#define UNITYENGINE_TIMELINE_TRACKASSET_DELETEMARKER_OFFSET UNITYSDK_OFFSET(0x1A3F9EC0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GATHERCOMPILABLETRACKS_OFFSET UNITYSDK_OFFSET(0x1A3FBE60)
#define UNITYENGINE_TIMELINE_TRACKASSET_GATHERNOTIFICIATIONS_OFFSET UNITYSDK_OFFSET(0x1A3FB110)
#define UNITYENGINE_TIMELINE_TRACKASSET_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1A3FCF10)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETANIMATIONCLIPHASH_OFFSET UNITYSDK_OFFSET(0x1A3D9A00)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETCHILDTRACKS_OFFSET UNITYSDK_OFFSET(0x1A3DB480)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETCLIPSHASH_OFFSET UNITYSDK_OFFSET(0x1A3FD800)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETCLIPS_OFFSET UNITYSDK_OFFSET(0x1A3DC9E0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETEVALUATIONTIME_OFFSET UNITYSDK_OFFSET(0x1A3DBD40)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETGAMEOBJECTBINDING_OFFSET UNITYSDK_OFFSET(0x1A3D6030)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETMARKERCOUNT_OFFSET UNITYSDK_OFFSET(0x1A3F96E0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETMARKERSRAW_OFFSET UNITYSDK_OFFSET(0x1A3FAC10)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETMARKERS_OFFSET UNITYSDK_OFFSET(0x1A3F8EB0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETMARKER_OFFSET UNITYSDK_OFFSET(0x1A3F9ED0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETNOTIFICATIONDURATION_OFFSET UNITYSDK_OFFSET(0x1A3DC110)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETSEQUENCETIME_OFFSET UNITYSDK_OFFSET(0x1A3DC100)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETTIMERANGEHASH_OFFSET UNITYSDK_OFFSET(0x1A3FACF0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_ADDITEMLOCKED_OFFSET UNITYSDK_OFFSET(0x1A3F9B20)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_ADDTRACKLOCKEDINHIERARCHY_OFFSET UNITYSDK_OFFSET(0x1A3F9BA0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_ADDTRACKLOCKED_OFFSET UNITYSDK_OFFSET(0x1A3F9B80)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_CLIPS_OFFSET UNITYSDK_OFFSET(0x1A3D88F0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_CURVES_OFFSET UNITYSDK_OFFSET(0x1A3F9930)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_CUSTOMPLAYABLETYPENAME_OFFSET UNITYSDK_OFFSET(0x1A3F9910)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_DELETEITEMLOCKED_OFFSET UNITYSDK_OFFSET(0x1A3F9B00)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_DELETETRACKLOCKED_OFFSET UNITYSDK_OFFSET(0x1A3F9B60)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_DRAGTRACKLOCKED_OFFSET UNITYSDK_OFFSET(0x1A3F9B40)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1A3F9530)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_END_OFFSET UNITYSDK_OFFSET(0x1A3F14E0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_HASCLIPS_OFFSET UNITYSDK_OFFSET(0x1A3D5BF0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_HASCURVES_OFFSET UNITYSDK_OFFSET(0x1A3DED60)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1A3F9670)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_ISSUBTRACK_OFFSET UNITYSDK_OFFSET(0x1A3D9770)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_ISTRACKNAMEGUIREADONLY_OFFSET UNITYSDK_OFFSET(0x1A3F9710)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_LOCKEDINHIERARCHY_OFFSET UNITYSDK_OFFSET(0x1A3F9A60)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_LOCKED_OFFSET UNITYSDK_OFFSET(0x1A3F9A40)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_MUTEDBYGENDER_OFFSET UNITYSDK_OFFSET(0x1A3F95A0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_MUTEDINHIERARCHY_OFFSET UNITYSDK_OFFSET(0x1A3F95C0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_MUTED_OFFSET UNITYSDK_OFFSET(0x1A3D8680)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_OUTPUTS_OFFSET UNITYSDK_OFFSET(0x1A3E7690)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1A3F9650)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_START_OFFSET UNITYSDK_OFFSET(0x1A3F9300)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_SUBTRACKSOBJECTS_OFFSET UNITYSDK_OFFSET(0x1A3F9A30)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_SUPPORTSNOTIFICATIONS_OFFSET UNITYSDK_OFFSET(0x1A3E72E0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_TIMELINEASSET_OFFSET UNITYSDK_OFFSET(0x1A3E6C90)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_TOGGLED_OFFSET UNITYSDK_OFFSET(0x1A3F9AE0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_USEBINDING_OFFSET UNITYSDK_OFFSET(0x1A3F9290)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_USEUNIQUECHARACTERNAME_OFFSET UNITYSDK_OFFSET(0x1A3F9270)
#define UNITYENGINE_TIMELINE_TRACKASSET_HASH_OFFSET UNITYSDK_OFFSET(0x1A3FDDA0)
#define UNITYENGINE_TIMELINE_TRACKASSET_HASNOTIFICATIONS_OFFSET UNITYSDK_OFFSET(0x1A3FCEE0)
#define UNITYENGINE_TIMELINE_TRACKASSET_INVALIDATE_OFFSET UNITYSDK_OFFSET(0x1A3F8E00)
#define UNITYENGINE_TIMELINE_TRACKASSET_ISCOMPILABLE_OFFSET UNITYSDK_OFFSET(0x1A3F6140)
#define UNITYENGINE_TIMELINE_TRACKASSET_MOVELASTTRACKBEFORE_OFFSET UNITYSDK_OFFSET(0x1A3F1180)
#define UNITYENGINE_TIMELINE_TRACKASSET_ONAFTERTRACKDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A3F88A0)
#define UNITYENGINE_TIMELINE_TRACKASSET_ONBEFORETRACKSERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A3F8890)
#define UNITYENGINE_TIMELINE_TRACKASSET_ONCLIPMOVE_OFFSET UNITYSDK_OFFSET(0x1A3F3AF0)
#define UNITYENGINE_TIMELINE_TRACKASSET_ONCREATECLIPPLAYABLEGRAPH_OFFSET UNITYSDK_OFFSET(0x1A3FC270)
#define UNITYENGINE_TIMELINE_TRACKASSET_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0x1A3D60E0)
#define UNITYENGINE_TIMELINE_TRACKASSET_ONINSPECTOR_OFFSET UNITYSDK_OFFSET(0x1A3F8EE0)
#define UNITYENGINE_TIMELINE_TRACKASSET_ONUPGRADEFROMVERSION_OFFSET UNITYSDK_OFFSET(0x1A3F88B0)
#define UNITYENGINE_TIMELINE_TRACKASSET_REMOVECLIP_OFFSET UNITYSDK_OFFSET(0x1A3F21C0)
#define UNITYENGINE_TIMELINE_TRACKASSET_REMOVESUBTRACK_OFFSET UNITYSDK_OFFSET(0x1A3F0730)
#define UNITYENGINE_TIMELINE_TRACKASSET_REMOVE_ONCLIPPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x1A3F8FD0)
#define UNITYENGINE_TIMELINE_TRACKASSET_REMOVE_ONTRACKANIMATIONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x1A3F9190)
#define UNITYENGINE_TIMELINE_TRACKASSET_RESETBUILDDATA_OFFSET UNITYSDK_OFFSET(0x1A3F6060)
#define UNITYENGINE_TIMELINE_TRACKASSET_SET_ADDITEMLOCKED_OFFSET UNITYSDK_OFFSET(0x1A3F9B30)
#define UNITYENGINE_TIMELINE_TRACKASSET_SET_ADDTRACKLOCKED_OFFSET UNITYSDK_OFFSET(0x1A3F9B90)
#define UNITYENGINE_TIMELINE_TRACKASSET_SET_CURVES_OFFSET UNITYSDK_OFFSET(0x1A3F9940)
#define UNITYENGINE_TIMELINE_TRACKASSET_SET_CUSTOMPLAYABLETYPENAME_OFFSET UNITYSDK_OFFSET(0x1A3F9920)
#define UNITYENGINE_TIMELINE_TRACKASSET_SET_DELETEITEMLOCKED_OFFSET UNITYSDK_OFFSET(0x1A3F9B10)
#define UNITYENGINE_TIMELINE_TRACKASSET_SET_DELETETRACKLOCKED_OFFSET UNITYSDK_OFFSET(0x1A3F9B70)
#define UNITYENGINE_TIMELINE_TRACKASSET_SET_DRAGTRACKLOCKED_OFFSET UNITYSDK_OFFSET(0x1A3F9B50)
#define UNITYENGINE_TIMELINE_TRACKASSET_SET_ISTRACKNAMEGUIREADONLY_OFFSET UNITYSDK_OFFSET(0x1A3F9720)
#define UNITYENGINE_TIMELINE_TRACKASSET_SET_LOCKED_OFFSET UNITYSDK_OFFSET(0x1A3F9A50)
#define UNITYENGINE_TIMELINE_TRACKASSET_SET_MUTEDBYGENDER_OFFSET UNITYSDK_OFFSET(0x1A3F95B0)
#define UNITYENGINE_TIMELINE_TRACKASSET_SET_MUTED_OFFSET UNITYSDK_OFFSET(0x1A3F9590)
#define UNITYENGINE_TIMELINE_TRACKASSET_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x1A3F9660)
#define UNITYENGINE_TIMELINE_TRACKASSET_SET_TOGGLED_OFFSET UNITYSDK_OFFSET(0x1A3F9AF0)
#define UNITYENGINE_TIMELINE_TRACKASSET_SORTCLIPS_OFFSET UNITYSDK_OFFSET(0x1A3F6610)
#define UNITYENGINE_TIMELINE_TRACKASSET_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A3F8970)
#define UNITYENGINE_TIMELINE_TRACKASSET_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1A3F88C0)
#define UNITYENGINE_TIMELINE_TRACKASSET_UNITYENGINE_TIMELINE_ICURVESOWNER_GET_ASSETOWNER_OFFSET UNITYSDK_OFFSET(0x1A3F99A0)
#define UNITYENGINE_TIMELINE_TRACKASSET_UNITYENGINE_TIMELINE_ICURVESOWNER_GET_ASSET_OFFSET UNITYSDK_OFFSET(0x1A3F9990)
#define UNITYENGINE_TIMELINE_TRACKASSET_UNITYENGINE_TIMELINE_ICURVESOWNER_GET_DEFAULTCURVESNAME_OFFSET UNITYSDK_OFFSET(0x1A3F9950)
#define UNITYENGINE_TIMELINE_TRACKASSET_UNITYENGINE_TIMELINE_ICURVESOWNER_GET_TARGETTRACK_OFFSET UNITYSDK_OFFSET(0x1A3F9A20)
#define UNITYENGINE_TIMELINE_TRACKASSET_UPDATECHILDTRACKCACHE_OFFSET UNITYSDK_OFFSET(0x1A3F9750)
#define UNITYENGINE_TIMELINE_TRACKASSET_UPDATEDURATION_OFFSET UNITYSDK_OFFSET(0x1A3F9360)
#define UNITYENGINE_TIMELINE_TRACKASSET_UPGRADETOLATESTVERSION_OFFSET UNITYSDK_OFFSET(0x1A3F8EA0)
#define UNITYENGINE_TIMELINE_TRACKASSET_VALIDATECLIPTYPE_OFFSET UNITYSDK_OFFSET(0x1A3FA020)
#define UNITYENGINE_TIMELINE_TRACKASSET__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A3FDEC0)
#define UNITYENGINE_TIMELINE_TRACKASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3D61E0)
#define UNITYENGINE_TIMELINE_TRACKASSET___INTERNALAWAKE_OFFSET UNITYSDK_OFFSET(0x1A3F9C20)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TrackAsset_TypeDefinitionIndex = 35558;

	class TrackAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		static ::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>** StaticGet_OnClipPlayableCreate()
		{
			return (::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>**)Il2CppClass::FromTypeDefinitionIndex(TrackAsset_TypeDefinitionIndex)->GetStaticField(0x69AB0);
		}
		static ::UnityEngine::Timeline::TrackAsset_TransientBuildData* StaticGet_s_BuildData()
		{
			return (::UnityEngine::Timeline::TrackAsset_TransientBuildData*)Il2CppClass::FromTypeDefinitionIndex(TrackAsset_TypeDefinitionIndex)->GetStaticField(0x69AB8);
		}
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::Timeline::TrackBindingTypeAttribute*>** StaticGet_s_TrackBindingTypeAttributeCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::Timeline::TrackBindingTypeAttribute*>**)Il2CppClass::FromTypeDefinitionIndex(TrackAsset_TypeDefinitionIndex)->GetStaticField(0x69AD0);
		}
		static ::System::Action_3<::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>** StaticGet_OnTrackAnimationPlayableCreate()
		{
			return (::System::Action_3<::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>**)Il2CppClass::FromTypeDefinitionIndex(TrackAsset_TypeDefinitionIndex)->GetStaticField(0x69AD8);
		}
		static ::Il2CppArray<::UnityEngine::Timeline::TrackAsset*>** StaticGet_s_EmptyCache()
		{
			return (::Il2CppArray<::UnityEngine::Timeline::TrackAsset*>**)Il2CppClass::FromTypeDefinitionIndex(TrackAsset_TypeDefinitionIndex)->GetStaticField(0x69AE0);
		}
		// static const ::System::Int32 k_LatestVersion = 0x3; // 0x0
		// static const ::System::String* kDefaultCurvesName; // 0x0
		::System::Int32 m_Version; // 0x18
		::UnityEngine::AnimationClip* m_AnimClip; // 0x20
		::System::Boolean m_Toggled; // 0x28
		::System::Boolean m_DeleteItemLocked; // 0x29
		::System::Boolean m_AddItemLocked; // 0x2A
		::System::Boolean m_DragTrackLocked; // 0x2B
		::System::Boolean m_DeleteTrackLocked; // 0x2C
		::System::Boolean m_AddTrackLocked; // 0x2D
		::System::Boolean m_Locked; // 0x2E
		::System::Boolean m_Muted; // 0x2F
		::System::Boolean m_MutedByGender; // 0x30
		::System::String* m_CustomPlayableFullTypename; // 0x38
		::UnityEngine::AnimationClip* m_Curves; // 0x40
		::UnityEngine::Playables::PlayableAsset* m_Parent; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>* m_Children; // 0x50
		::System::Int32 m_ItemsHash; // 0x58
		::Il2CppArray<::UnityEngine::Timeline::TimelineClip*>* m_ClipsCache; // 0x60
		::System::String* CharacterUniqueName; // 0x68
		::System::String* NodePath; // 0x70
		::System::Int32 PlayableIndex; // 0x78
		::UnityEngine::Timeline::DiscreteTime m_Start; // 0x80
		::UnityEngine::Timeline::DiscreteTime m_End; // 0x88
		::System::Boolean m_CacheSorted; // 0x90
		::System::Nullable_1<::System::Boolean> m_SupportsNotifications; // 0x91
		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* m_ChildTrackCache; // 0x98
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* m_Clips; // 0xA0
		::UnityEngine::Timeline::MarkerList m_Markers; // 0xA8
		::System::Boolean m_isTrackNameGUIReadOnly; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET__CCTOR_OFFSET))();
		}

		::System::Void OnBeforeTrackSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_ONBEFORETRACKSERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterTrackDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_ONAFTERTRACKDESERIALIZE_OFFSET))(this);
		}

		::System::Void OnUpgradeFromVersion(::System::Int32 oldVersion)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_ONUPGRADEFROMVERSION_OFFSET))(this, oldVersion);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void UpgradeToLatestVersion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_UPGRADETOLATESTVERSION_OFFSET))(this);
		}

		::System::Void OnInspector()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_ONINSPECTOR_OFFSET))(this);
		}

		static ::System::Void add_OnClipPlayableCreate(::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>* value)
		{
			return ((::System::Void(*)(::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_ADD_ONCLIPPLAYABLECREATE_OFFSET))(value);
		}

		static ::System::Void remove_OnClipPlayableCreate(::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>* value)
		{
			return ((::System::Void(*)(::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_REMOVE_ONCLIPPLAYABLECREATE_OFFSET))(value);
		}

		static ::System::Void add_OnTrackAnimationPlayableCreate(::System::Action_3<::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>* value)
		{
			return ((::System::Void(*)(::System::Action_3<::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_ADD_ONTRACKANIMATIONPLAYABLECREATE_OFFSET))(value);
		}

		static ::System::Void remove_OnTrackAnimationPlayableCreate(::System::Action_3<::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>* value)
		{
			return ((::System::Void(*)(::System::Action_3<::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_REMOVE_ONTRACKANIMATIONPLAYABLECREATE_OFFSET))(value);
		}

		::System::Boolean get_UseUniqueCharacterName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_USEUNIQUECHARACTERNAME_OFFSET))(this);
		}

		::System::Boolean get_UseBinding()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_USEBINDING_OFFSET))(this);
		}

		::System::Double get_start()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_START_OFFSET))(this);
		}

		::System::Double get_end()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_END_OFFSET))(this);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_DURATION_OFFSET))(this);
		}

		::System::Boolean get_muted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_MUTED_OFFSET))(this);
		}

		::System::Void set_muted(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_SET_MUTED_OFFSET))(this, value);
		}

		::System::Boolean get_mutedByGender()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_MUTEDBYGENDER_OFFSET))(this);
		}

		::System::Void set_mutedByGender(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_SET_MUTEDBYGENDER_OFFSET))(this, value);
		}

		::System::Boolean get_mutedInHierarchy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_MUTEDINHIERARCHY_OFFSET))(this);
		}

		::UnityEngine::Timeline::TimelineAsset* get_timelineAsset()
		{
			return ((::UnityEngine::Timeline::TimelineAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_TIMELINEASSET_OFFSET))(this);
		}

		::UnityEngine::Playables::PlayableAsset* get_parent()
		{
			return ((::UnityEngine::Playables::PlayableAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_PARENT_OFFSET))(this);
		}

		::System::Void set_parent(::UnityEngine::Playables::PlayableAsset* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_SET_PARENT_OFFSET))(this, value);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>* GetClips()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GETCLIPS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Timeline::TimelineClip*>* get_clips()
		{
			return ((::Il2CppArray<::UnityEngine::Timeline::TimelineClip*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_CLIPS_OFFSET))(this);
		}

		::System::Boolean get_isEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_ISEMPTY_OFFSET))(this);
		}

		::System::Boolean get_hasClips()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_HASCLIPS_OFFSET))(this);
		}

		::System::Boolean get_hasCurves()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_HASCURVES_OFFSET))(this);
		}

		::System::Boolean get_isSubTrack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_ISSUBTRACK_OFFSET))(this);
		}

		::System::Boolean get_isTrackNameGUIReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_ISTRACKNAMEGUIREADONLY_OFFSET))(this);
		}

		::System::Void set_isTrackNameGUIReadOnly(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_SET_ISTRACKNAMEGUIREADONLY_OFFSET))(this, value);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* get_outputs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_OUTPUTS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* GetChildTracks()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GETCHILDTRACKS_OFFSET))(this);
		}

		::System::String* get_customPlayableTypename()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_CUSTOMPLAYABLETYPENAME_OFFSET))(this);
		}

		::System::Void set_customPlayableTypename(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_SET_CUSTOMPLAYABLETYPENAME_OFFSET))(this, value);
		}

		::UnityEngine::AnimationClip* get_curves()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_CURVES_OFFSET))(this);
		}

		::System::Void set_curves(::UnityEngine::AnimationClip* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_SET_CURVES_OFFSET))(this, value);
		}

		::System::String* UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_UNITYENGINE_TIMELINE_ICURVESOWNER_GET_DEFAULTCURVESNAME_OFFSET))(this);
		}

		::UnityEngine::Object* UnityEngine_Timeline_ICurvesOwner_get_asset()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_UNITYENGINE_TIMELINE_ICURVESOWNER_GET_ASSET_OFFSET))(this);
		}

		::UnityEngine::Object* UnityEngine_Timeline_ICurvesOwner_get_assetOwner()
		{
			return ((::UnityEngine::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_UNITYENGINE_TIMELINE_ICURVESOWNER_GET_ASSETOWNER_OFFSET))(this);
		}

		::UnityEngine::Timeline::TrackAsset* UnityEngine_Timeline_ICurvesOwner_get_targetTrack()
		{
			return ((::UnityEngine::Timeline::TrackAsset*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_UNITYENGINE_TIMELINE_ICURVESOWNER_GET_TARGETTRACK_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>* get_subTracksObjects()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_SUBTRACKSOBJECTS_OFFSET))(this);
		}

		::System::Boolean get_locked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_LOCKED_OFFSET))(this);
		}

		::System::Void set_locked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_SET_LOCKED_OFFSET))(this, value);
		}

		::System::Boolean get_lockedInHierarchy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_LOCKEDINHIERARCHY_OFFSET))(this);
		}

		::System::Boolean get_toggled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_TOGGLED_OFFSET))(this);
		}

		::System::Void set_toggled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_SET_TOGGLED_OFFSET))(this, value);
		}

		::System::Boolean get_deleteItemLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_DELETEITEMLOCKED_OFFSET))(this);
		}

		::System::Void set_deleteItemLocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_SET_DELETEITEMLOCKED_OFFSET))(this, value);
		}

		::System::Boolean get_addItemLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_ADDITEMLOCKED_OFFSET))(this);
		}

		::System::Void set_addItemLocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_SET_ADDITEMLOCKED_OFFSET))(this, value);
		}

		::System::Boolean get_dragTrackLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_DRAGTRACKLOCKED_OFFSET))(this);
		}

		::System::Void set_dragTrackLocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_SET_DRAGTRACKLOCKED_OFFSET))(this, value);
		}

		::System::Boolean get_deleteTrackLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_DELETETRACKLOCKED_OFFSET))(this);
		}

		::System::Void set_deleteTrackLocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_SET_DELETETRACKLOCKED_OFFSET))(this, value);
		}

		::System::Boolean get_addTrackLocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_ADDTRACKLOCKED_OFFSET))(this);
		}

		::System::Void set_addTrackLocked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_SET_ADDTRACKLOCKED_OFFSET))(this, value);
		}

		::System::Boolean get_addTrackLockedInHierarchy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_ADDTRACKLOCKEDINHIERARCHY_OFFSET))(this);
		}

		::System::Boolean get_supportsNotifications()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_SUPPORTSNOTIFICATIONS_OFFSET))(this);
		}

		::System::Void __internalAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET___INTERNALAWAKE_OFFSET))(this);
		}

		::System::Void CreateCurves(::System::String* curvesClipName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CREATECURVES_OFFSET))(this, curvesClipName);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, ::System::Int32 inputCount)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CREATETRACKMIXER_OFFSET))(this, graph, go, inputCount);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CREATEPLAYABLE_OFFSET))(this, graph, go);
		}

		::System::Void CompileTracks(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Playables::Playable timelinePlayable, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* tracks, ::UnityEngine::GameObject* go, ::System::Boolean createOutputs)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::Playable, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_COMPILETRACKS_OFFSET))(this, graph, timelinePlayable, tracks, go, createOutputs);
		}

		::UnityEngine::Timeline::TimelineClip* CreateDefaultClip()
		{
			return ((::UnityEngine::Timeline::TimelineClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CREATEDEFAULTCLIP_OFFSET))(this);
		}

		::UnityEngine::Timeline::IMarker* CreateMarker(::System::Type* type, ::System::Double time)
		{
			return ((::UnityEngine::Timeline::IMarker*(*)(::PVOID, ::System::Type*, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CREATEMARKER_OFFSET))(this, type, time);
		}

		::System::Boolean DeleteMarker(::UnityEngine::Timeline::IMarker* marker)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::IMarker*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_DELETEMARKER_OFFSET))(this, marker);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>* GetMarkers()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GETMARKERS_OFFSET))(this);
		}

		::System::Int32 GetMarkerCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GETMARKERCOUNT_OFFSET))(this);
		}

		::UnityEngine::Timeline::IMarker* GetMarker(::System::Int32 idx)
		{
			return ((::UnityEngine::Timeline::IMarker*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GETMARKER_OFFSET))(this, idx);
		}

		::UnityEngine::Timeline::TimelineClip* CreateClip(::System::Type* requestedType)
		{
			return ((::UnityEngine::Timeline::TimelineClip*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CREATECLIP_OFFSET))(this, requestedType);
		}

		::UnityEngine::Timeline::TimelineClip* CreateAndAddNewClipOfType(::System::Type* requestedType)
		{
			return ((::UnityEngine::Timeline::TimelineClip*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CREATEANDADDNEWCLIPOFTYPE_OFFSET))(this, requestedType);
		}

		::UnityEngine::Timeline::TimelineClip* CreateClipOfType(::System::Type* requestedType)
		{
			return ((::UnityEngine::Timeline::TimelineClip*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CREATECLIPOFTYPE_OFFSET))(this, requestedType);
		}

		::UnityEngine::Timeline::TimelineClip* CreateClipFromPlayableAsset(::UnityEngine::Playables::IPlayableAsset* asset)
		{
			return ((::UnityEngine::Timeline::TimelineClip*(*)(::PVOID, ::UnityEngine::Playables::IPlayableAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CREATECLIPFROMPLAYABLEASSET_OFFSET))(this, asset);
		}

		::UnityEngine::Timeline::TimelineClip* CreateClipFromAsset(::UnityEngine::ScriptableObject* playableAsset)
		{
			return ((::UnityEngine::Timeline::TimelineClip*(*)(::PVOID, ::UnityEngine::ScriptableObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CREATECLIPFROMASSET_OFFSET))(this, playableAsset);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::ScriptableObject*>* GetMarkersRaw()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::ScriptableObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GETMARKERSRAW_OFFSET))(this);
		}

		::System::Void ClearMarkers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CLEARMARKERS_OFFSET))(this);
		}

		::System::Void AddMarker(::UnityEngine::ScriptableObject* e)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ScriptableObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_ADDMARKER_OFFSET))(this, e);
		}

		::System::Boolean DeleteMarkerRaw(::UnityEngine::ScriptableObject* marker)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ScriptableObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_DELETEMARKERRAW_OFFSET))(this, marker);
		}

		::System::Int32 GetTimeRangeHash()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GETTIMERANGEHASH_OFFSET))(this);
		}

		::System::Void AddClip(::UnityEngine::Timeline::TimelineClip* newClip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_ADDCLIP_OFFSET))(this, newClip);
		}

		::UnityEngine::Playables::Playable CreateNotificationsPlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Playables::Playable mixerPlayable, ::UnityEngine::GameObject* go, ::UnityEngine::Playables::Playable timelinePlayable)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::Playable, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CREATENOTIFICATIONSPLAYABLE_OFFSET))(this, graph, mixerPlayable, go, timelinePlayable);
		}

		static ::System::Void ResetBuildData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_RESETBUILDDATA_OFFSET))();
		}

		::UnityEngine::Playables::Playable CreatePlayableGraph(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* tree, ::UnityEngine::Playables::Playable timelinePlayable)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CREATEPLAYABLEGRAPH_OFFSET))(this, graph, go, tree, timelinePlayable);
		}

		::UnityEngine::Playables::Playable CompileClips(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, ::System::Collections::Generic::IList_1<::UnityEngine::Timeline::TimelineClip*>* timelineClips, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* tree)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Collections::Generic::IList_1<::UnityEngine::Timeline::TimelineClip*>*, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_COMPILECLIPS_OFFSET))(this, graph, go, timelineClips, tree);
		}

		::System::Void GatherCompilableTracks(::System::Collections::Generic::IList_1<::UnityEngine::Timeline::TrackAsset*>* tracks)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Timeline::TrackAsset*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GATHERCOMPILABLETRACKS_OFFSET))(this, tracks);
		}

		::System::Void GatherNotificiations(::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>* markers)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GATHERNOTIFICIATIONS_OFFSET))(this, markers);
		}

		::UnityEngine::Playables::Playable OnCreateClipPlayableGraph(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* tree)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_ONCREATECLIPPLAYABLEGRAPH_OFFSET))(this, graph, go, tree);
		}

		::System::Void ConfigureTrackAnimation(::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* tree, ::UnityEngine::GameObject* go, ::UnityEngine::Playables::Playable blend)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CONFIGURETRACKANIMATION_OFFSET))(this, tree, go, blend);
		}

		::System::Void SortClips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_SORTCLIPS_OFFSET))(this);
		}

		::System::Void ClearClipsInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CLEARCLIPSINTERNAL_OFFSET))(this);
		}

		::System::Void ClearSubTracksInternal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CLEARSUBTRACKSINTERNAL_OFFSET))(this);
		}

		::System::Void OnClipMove()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_ONCLIPMOVE_OFFSET))(this);
		}

		::UnityEngine::Timeline::TimelineClip* CreateNewClipContainerInternal()
		{
			return ((::UnityEngine::Timeline::TimelineClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CREATENEWCLIPCONTAINERINTERNAL_OFFSET))(this);
		}

		::System::Void AddChild(::UnityEngine::Timeline::TrackAsset* child)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_ADDCHILD_OFFSET))(this, child);
		}

		::System::Void MoveLastTrackBefore(::UnityEngine::Timeline::TrackAsset* asset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_MOVELASTTRACKBEFORE_OFFSET))(this, asset);
		}

		::System::Boolean RemoveSubTrack(::UnityEngine::Timeline::TrackAsset* child)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_REMOVESUBTRACK_OFFSET))(this, child);
		}

		::System::Void RemoveClip(::UnityEngine::Timeline::TimelineClip* clip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_REMOVECLIP_OFFSET))(this, clip);
		}

		::System::Void GetEvaluationTime(::System::Double& outStart, ::System::Double& outDuration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double&, ::System::Double&))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GETEVALUATIONTIME_OFFSET))(this, outStart, outDuration);
		}

		::System::Void GetSequenceTime(::System::Double& outStart, ::System::Double& outDuration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double&, ::System::Double&))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GETSEQUENCETIME_OFFSET))(this, outStart, outDuration);
		}

		::System::Void GatherProperties(::UnityEngine::Playables::PlayableDirector* director, ::UnityEngine::Timeline::IPropertyCollector* driver)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GATHERPROPERTIES_OFFSET))(this, director, driver);
		}

		::UnityEngine::GameObject* GetGameObjectBinding(::UnityEngine::Playables::PlayableDirector* director)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GETGAMEOBJECTBINDING_OFFSET))(this, director);
		}

		::System::Boolean ValidateClipType(::System::Type* clipType)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_VALIDATECLIPTYPE_OFFSET))(this, clipType);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* clip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_ONCREATECLIP_OFFSET))(this, clip);
		}

		::System::Void UpdateDuration()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_UPDATEDURATION_OFFSET))(this);
		}

		::System::Int32 CalculateItemsHash()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CALCULATEITEMSHASH_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable_1(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* gameObject, ::UnityEngine::Timeline::TimelineClip* clip)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CREATEPLAYABLE_1_OFFSET))(this, graph, gameObject, clip);
		}

		::System::Void Invalidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_INVALIDATE_OFFSET))(this);
		}

		::System::Double GetNotificationDuration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GETNOTIFICATIONDURATION_OFFSET))(this);
		}

		::System::Boolean CanCompileClips()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CANCOMPILECLIPS_OFFSET))(this);
		}

		::System::Boolean IsCompilable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_ISCOMPILABLE_OFFSET))(this);
		}

		::System::Void UpdateChildTrackCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_UPDATECHILDTRACKCACHE_OFFSET))(this);
		}

		::System::Int32 Hash()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_HASH_OFFSET))(this);
		}

		::System::Int32 GetClipsHash()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GETCLIPSHASH_OFFSET))(this);
		}

		static ::System::Int32 GetAnimationClipHash(::UnityEngine::AnimationClip* clip)
		{
			return ((::System::Int32(*)(::UnityEngine::AnimationClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GETANIMATIONCLIPHASH_OFFSET))(clip);
		}

		::System::Boolean HasNotifications()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_HASNOTIFICATIONS_OFFSET))(this);
		}

		::System::Boolean CanCompileNotifications()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CANCOMPILENOTIFICATIONS_OFFSET))(this);
		}

		::System::Boolean CanCompileClipsRecursive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CANCOMPILECLIPSRECURSIVE_OFFSET))(this);
		}
	};
}
