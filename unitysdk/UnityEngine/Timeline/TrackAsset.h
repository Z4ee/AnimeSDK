#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Color.h"
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
namespace UnityEngine::Timeline { class ITimelineClipAsset; }
namespace UnityEngine::Timeline { class RuntimeElement; }
namespace UnityEngine::Timeline { class TimelineAsset; }
namespace UnityEngine::Timeline { class TimelineClip; }
namespace UnityEngine::Timeline { class TrackBindingTypeAttribute; }
namespace UnityEngine::Timeline { template <typename T> class IntervalTree_1; }

#define UNITYENGINE_TIMELINE_TRACKASSET_ADDCHILD_OFFSET UNITYSDK_OFFSET(0x1BA4DB70)
#define UNITYENGINE_TIMELINE_TRACKASSET_ADDCLIP_OFFSET UNITYSDK_OFFSET(0x1BA493D0)
#define UNITYENGINE_TIMELINE_TRACKASSET_ADDMARKER_OFFSET UNITYSDK_OFFSET(0x1BA49FA0)
#define UNITYENGINE_TIMELINE_TRACKASSET_ADD_ONCLIPPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x1BA46700)
#define UNITYENGINE_TIMELINE_TRACKASSET_ADD_ONTRACKANIMATIONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x1BA468C0)
#define UNITYENGINE_TIMELINE_TRACKASSET_AFTERCREATEPLAYABLEGRAPH_OFFSET UNITYSDK_OFFSET(0x1BA4B6F0)
#define UNITYENGINE_TIMELINE_TRACKASSET_CALCULATEITEMSHASH_OFFSET UNITYSDK_OFFSET(0x1BA50400)
#define UNITYENGINE_TIMELINE_TRACKASSET_CANCOMPILECLIPSRECURSIVE_OFFSET UNITYSDK_OFFSET(0x1BA4B350)
#define UNITYENGINE_TIMELINE_TRACKASSET_CANCOMPILECLIPS_OFFSET UNITYSDK_OFFSET(0x1BA50D70)
#define UNITYENGINE_TIMELINE_TRACKASSET_CANCOMPILENOTIFICATIONS_OFFSET UNITYSDK_OFFSET(0x1BA4C480)
#define UNITYENGINE_TIMELINE_TRACKASSET_CANCUSTOMRECORD_OFFSET UNITYSDK_OFFSET(0x1BA466B0)
#define UNITYENGINE_TIMELINE_TRACKASSET_CANMOVEBYUSERINTIMELINE_OFFSET UNITYSDK_OFFSET(0x1BA45ED0)
#define UNITYENGINE_TIMELINE_TRACKASSET_CLEARCLIPSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1BA4D8F0)
#define UNITYENGINE_TIMELINE_TRACKASSET_CLEARMARKERS_OFFSET UNITYSDK_OFFSET(0x1BA49F50)
#define UNITYENGINE_TIMELINE_TRACKASSET_CLEARSUBTRACKSINTERNAL_OFFSET UNITYSDK_OFFSET(0x1BA4D980)
#define UNITYENGINE_TIMELINE_TRACKASSET_COMPILECLIPS_OFFSET UNITYSDK_OFFSET(0x1BA4B700)
#define UNITYENGINE_TIMELINE_TRACKASSET_CONFIGURETRACKANIMATION_OFFSET UNITYSDK_OFFSET(0x1BA4BD60)
#define UNITYENGINE_TIMELINE_TRACKASSET_CONTAINCLIPASSET_OFFSET UNITYSDK_OFFSET(0x1BA49A40)
#define UNITYENGINE_TIMELINE_TRACKASSET_CONTAINTRACK_OFFSET UNITYSDK_OFFSET(0x1BA47B60)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATEANDADDNEWCLIPOFTYPE_OFFSET UNITYSDK_OFFSET(0x1BA48BA0)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATECLIPFROMASSET_OFFSET UNITYSDK_OFFSET(0x1BA49460)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATECLIPFROMPLAYABLEASSET_OFFSET UNITYSDK_OFFSET(0x1BA49760)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATECLIPOFTYPE_OFFSET UNITYSDK_OFFSET(0x1BA490E0)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATECLIP_OFFSET UNITYSDK_OFFSET(0x1BA48D70)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATECURVES_OFFSET UNITYSDK_OFFSET(0x1BA48660)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATEDEFAULTCLIP_OFFSET UNITYSDK_OFFSET(0x1BA48980)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATEMARKER_OFFSET UNITYSDK_OFFSET(0x1BA48C90)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATENEWCLIPCONTAINERINTERNAL_OFFSET UNITYSDK_OFFSET(0x1BA49D20)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATENOTIFICATIONSPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1BA4A510)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATEPLAYABLEGRAPH_OFFSET UNITYSDK_OFFSET(0x1BA4AD50)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATEPLAYABLE_1_OFFSET UNITYSDK_OFFSET(0x1BA50840)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1BA488C0)
#define UNITYENGINE_TIMELINE_TRACKASSET_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1BA487C0)
#define UNITYENGINE_TIMELINE_TRACKASSET_CUSTOMGETRECORDANIMCLIPIMP_OFFSET UNITYSDK_OFFSET(0x1BA466F0)
#define UNITYENGINE_TIMELINE_TRACKASSET_CUSTOMGETSCENEGAMEOBJECTIMP_OFFSET UNITYSDK_OFFSET(0x1BA466D0)
#define UNITYENGINE_TIMELINE_TRACKASSET_DELETEMARKERRAW_OFFSET UNITYSDK_OFFSET(0x1BA4A0F0)
#define UNITYENGINE_TIMELINE_TRACKASSET_DELETEMARKER_OFFSET UNITYSDK_OFFSET(0x1BA48CD0)
#define UNITYENGINE_TIMELINE_TRACKASSET_ERRORMSG_OFFSET UNITYSDK_OFFSET(0x1BA45EF0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GATHERCOMPILABLETRACKS_OFFSET UNITYSDK_OFFSET(0x1BA4C000)
#define UNITYENGINE_TIMELINE_TRACKASSET_GATHERNOTIFICIATIONS_OFFSET UNITYSDK_OFFSET(0x1BA4A880)
#define UNITYENGINE_TIMELINE_TRACKASSET_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1BA4F300)
#define UNITYENGINE_TIMELINE_TRACKASSET_GENGUID_OFFSET UNITYSDK_OFFSET(0x1BA48640)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETANIMATIONCLIPHASH_OFFSET UNITYSDK_OFFSET(0x1BA506A0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETCHILDTRACKS_OFFSET UNITYSDK_OFFSET(0x1BA462A0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETCLIPSHASH_OFFSET UNITYSDK_OFFSET(0x1BA504A0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETCLIPS_OFFSET UNITYSDK_OFFSET(0x1BA475D0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETCUSTOMCOLOR_OFFSET UNITYSDK_OFFSET(0x1BA45F10)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETEVALUATIONTIME_OFFSET UNITYSDK_OFFSET(0x1BA4E720)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETGAMEOBJECTBINDING_OFFSET UNITYSDK_OFFSET(0x1BA50060)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETMARKERCOUNT_OFFSET UNITYSDK_OFFSET(0x1BA47B30)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETMARKERSRAW_OFFSET UNITYSDK_OFFSET(0x1BA49F40)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETMARKERS_OFFSET UNITYSDK_OFFSET(0x1BA45EA0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETMARKER_OFFSET UNITYSDK_OFFSET(0x1BA48D00)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETNOTIFICATIONDURATION_OFFSET UNITYSDK_OFFSET(0x1BA4EEC0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETORCREATEDEFAULTCLIP_OFFSET UNITYSDK_OFFSET(0x1BA48C30)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETREFERENCEDGAMEOBJECTS_OFFSET UNITYSDK_OFFSET(0x1BA48970)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETSEQUENCETIME_OFFSET UNITYSDK_OFFSET(0x1BA4F2F0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GETTIMERANGEHASH_OFFSET UNITYSDK_OFFSET(0x1BA4A130)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_CLIPS_OFFSET UNITYSDK_OFFSET(0x1BA47700)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_CURVES_OFFSET UNITYSDK_OFFSET(0x1BA48190)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_CUSTOMPLAYABLETYPENAME_OFFSET UNITYSDK_OFFSET(0x1BA48170)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1BA46EC0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_END_OFFSET UNITYSDK_OFFSET(0x1BA46C50)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_GUID_OFFSET UNITYSDK_OFFSET(0x1BA46A80)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_HASCLIPS_OFFSET UNITYSDK_OFFSET(0x1BA479C0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_HASCURVES_OFFSET UNITYSDK_OFFSET(0x1BA479E0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x1BA47830)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_ISFRAMETRACK_OFFSET UNITYSDK_OFFSET(0x1BA47C60)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_ISSUBTRACK_OFFSET UNITYSDK_OFFSET(0x1BA47C70)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_LOCKEDINHIERARCHY_OFFSET UNITYSDK_OFFSET(0x1BA48250)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_LOCKED_OFFSET UNITYSDK_OFFSET(0x1BA48230)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_MUTEDINHIERARCHY_OFFSET UNITYSDK_OFFSET(0x1BA46FB0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_MUTED_OFFSET UNITYSDK_OFFSET(0x1BA462C0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_OUTPUTS_OFFSET UNITYSDK_OFFSET(0x1BA47E10)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1BA472C0)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_START_OFFSET UNITYSDK_OFFSET(0x1BA46A90)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_SUBTRACKSOBJECTS_OFFSET UNITYSDK_OFFSET(0x1BA48220)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_SUPPORTSNOTIFICATIONS_OFFSET UNITYSDK_OFFSET(0x1BA44940)
#define UNITYENGINE_TIMELINE_TRACKASSET_GET_TIMELINEASSET_OFFSET UNITYSDK_OFFSET(0x1BA43FB0)
#define UNITYENGINE_TIMELINE_TRACKASSET_HASCUSTOMCOLOR_OFFSET UNITYSDK_OFFSET(0x1BA45F00)
#define UNITYENGINE_TIMELINE_TRACKASSET_HASH_OFFSET UNITYSDK_OFFSET(0x1BA513B0)
#define UNITYENGINE_TIMELINE_TRACKASSET_HASNOTIFICATIONS_OFFSET UNITYSDK_OFFSET(0x1BA4EE90)
#define UNITYENGINE_TIMELINE_TRACKASSET_INSERTCHILD_OFFSET UNITYSDK_OFFSET(0x1BA4DDF0)
#define UNITYENGINE_TIMELINE_TRACKASSET_INVALIDATE_OFFSET UNITYSDK_OFFSET(0x1BA45D50)
#define UNITYENGINE_TIMELINE_TRACKASSET_ISCOMPILABLE_OFFSET UNITYSDK_OFFSET(0x1BA50EF0)
#define UNITYENGINE_TIMELINE_TRACKASSET_ISCUSTOMGETRECORDANIMCLIP_OFFSET UNITYSDK_OFFSET(0x1BA466E0)
#define UNITYENGINE_TIMELINE_TRACKASSET_ISCUSTOMGETSCENEGAMEOBJECT_OFFSET UNITYSDK_OFFSET(0x1BA466C0)
#define UNITYENGINE_TIMELINE_TRACKASSET_MOVEBYUSERINTIMELINE_OFFSET UNITYSDK_OFFSET(0x1BA45EE0)
#define UNITYENGINE_TIMELINE_TRACKASSET_MOVELASTTRACKBEFORE_OFFSET UNITYSDK_OFFSET(0x1BA4E080)
#define UNITYENGINE_TIMELINE_TRACKASSET_NORMALIZECLIP_OFFSET UNITYSDK_OFFSET(0x1BA4EC00)
#define UNITYENGINE_TIMELINE_TRACKASSET_ONAFTERTRACKDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BA455C0)
#define UNITYENGINE_TIMELINE_TRACKASSET_ONBEFORETRACKSERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BA455B0)
#define UNITYENGINE_TIMELINE_TRACKASSET_ONCLIPMOVE_OFFSET UNITYSDK_OFFSET(0x1BA4DB60)
#define UNITYENGINE_TIMELINE_TRACKASSET_ONCREATECLIPPLAYABLEGRAPH_OFFSET UNITYSDK_OFFSET(0x1BA4C530)
#define UNITYENGINE_TIMELINE_TRACKASSET_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0x1BA503F0)
#define UNITYENGINE_TIMELINE_TRACKASSET_ONCREATEMARKER_OFFSET UNITYSDK_OFFSET(0x1BA46670)
#define UNITYENGINE_TIMELINE_TRACKASSET_ONDELETECLIP_OFFSET UNITYSDK_OFFSET(0x1BA46680)
#define UNITYENGINE_TIMELINE_TRACKASSET_ONDELETEMARKER_OFFSET UNITYSDK_OFFSET(0x1BA46690)
#define UNITYENGINE_TIMELINE_TRACKASSET_ONDUPLICATETRACK_OFFSET UNITYSDK_OFFSET(0x1BA466A0)
#define UNITYENGINE_TIMELINE_TRACKASSET_ONMUTESTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1BA45F20)
#define UNITYENGINE_TIMELINE_TRACKASSET_ONRUNTIMEMUTESTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1BA462E0)
#define UNITYENGINE_TIMELINE_TRACKASSET_ONUPGRADEFROMVERSION_OFFSET UNITYSDK_OFFSET(0x1BA455D0)
#define UNITYENGINE_TIMELINE_TRACKASSET_REMOVECLIP_OFFSET UNITYSDK_OFFSET(0x1BA4E690)
#define UNITYENGINE_TIMELINE_TRACKASSET_REMOVESUBTRACK_OFFSET UNITYSDK_OFFSET(0x1BA4E4D0)
#define UNITYENGINE_TIMELINE_TRACKASSET_REMOVETRACK_OFFSET UNITYSDK_OFFSET(0x1BA47BC0)
#define UNITYENGINE_TIMELINE_TRACKASSET_REMOVE_ONCLIPPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x1BA467E0)
#define UNITYENGINE_TIMELINE_TRACKASSET_REMOVE_ONTRACKANIMATIONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0x1BA469A0)
#define UNITYENGINE_TIMELINE_TRACKASSET_SET_CURVES_OFFSET UNITYSDK_OFFSET(0x1BA481A0)
#define UNITYENGINE_TIMELINE_TRACKASSET_SET_CUSTOMPLAYABLETYPENAME_OFFSET UNITYSDK_OFFSET(0x1BA48180)
#define UNITYENGINE_TIMELINE_TRACKASSET_SET_LOCKED_OFFSET UNITYSDK_OFFSET(0x1BA48240)
#define UNITYENGINE_TIMELINE_TRACKASSET_SET_MUTED_OFFSET UNITYSDK_OFFSET(0x1BA46F70)
#define UNITYENGINE_TIMELINE_TRACKASSET_SET_PARENT_OFFSET UNITYSDK_OFFSET(0x1BA472D0)
#define UNITYENGINE_TIMELINE_TRACKASSET_SET_RUNTIMEMUTESTATE_OFFSET UNITYSDK_OFFSET(0x1BA46650)
#define UNITYENGINE_TIMELINE_TRACKASSET_SORTCLIPS_OFFSET UNITYSDK_OFFSET(0x1BA4D580)
#define UNITYENGINE_TIMELINE_TRACKASSET_TIMELINEPATHS_OFFSET UNITYSDK_OFFSET(0x1BA472E0)
#define UNITYENGINE_TIMELINE_TRACKASSET_TRACKCREATEINIT_OFFSET UNITYSDK_OFFSET(0x1BA48650)
#define UNITYENGINE_TIMELINE_TRACKASSET_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BA458E0)
#define UNITYENGINE_TIMELINE_TRACKASSET_UNITYENGINE_ISERIALIZATIONCALLBACKRECEIVER_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1BA455E0)
#define UNITYENGINE_TIMELINE_TRACKASSET_UNITYENGINE_TIMELINE_ICURVESOWNER_GET_ASSETOWNER_OFFSET UNITYSDK_OFFSET(0x1BA48200)
#define UNITYENGINE_TIMELINE_TRACKASSET_UNITYENGINE_TIMELINE_ICURVESOWNER_GET_ASSET_OFFSET UNITYSDK_OFFSET(0x1BA481F0)
#define UNITYENGINE_TIMELINE_TRACKASSET_UNITYENGINE_TIMELINE_ICURVESOWNER_GET_DEFAULTCURVESNAME_OFFSET UNITYSDK_OFFSET(0x1BA481B0)
#define UNITYENGINE_TIMELINE_TRACKASSET_UNITYENGINE_TIMELINE_ICURVESOWNER_GET_TARGETTRACK_OFFSET UNITYSDK_OFFSET(0x1BA48210)
#define UNITYENGINE_TIMELINE_TRACKASSET_UPDATECHILDTRACKCACHE_OFFSET UNITYSDK_OFFSET(0x1BA47E70)
#define UNITYENGINE_TIMELINE_TRACKASSET_UPDATEDURATION_OFFSET UNITYSDK_OFFSET(0x1BA46B40)
#define UNITYENGINE_TIMELINE_TRACKASSET_UPGRADETOLATESTVERSION_OFFSET UNITYSDK_OFFSET(0x1BA45E90)
#define UNITYENGINE_TIMELINE_TRACKASSET_VALIDATECLIPTYPE_OFFSET UNITYSDK_OFFSET(0x1BA48E90)
#define UNITYENGINE_TIMELINE_TRACKASSET__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA51730)
#define UNITYENGINE_TIMELINE_TRACKASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA51520)
#define UNITYENGINE_TIMELINE_TRACKASSET___INTERNALAWAKE_OFFSET UNITYSDK_OFFSET(0x1BA48540)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TrackAsset_TypeDefinitionIndex = 30726;

	class TrackAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::Timeline::TrackBindingTypeAttribute*>** StaticGet_s_TrackBindingTypeAttributeCache()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::Timeline::TrackBindingTypeAttribute*>**)Il2CppClass::FromTypeDefinitionIndex(TrackAsset_TypeDefinitionIndex)->GetStaticField(0x25010);
		}
		static ::System::Action_3<::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>** StaticGet_OnTrackAnimationPlayableCreate()
		{
			return (::System::Action_3<::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>**)Il2CppClass::FromTypeDefinitionIndex(TrackAsset_TypeDefinitionIndex)->GetStaticField(0x25018);
		}
		static ::UnityEngine::Timeline::TrackAsset_TransientBuildData* StaticGet_s_BuildData()
		{
			return (::UnityEngine::Timeline::TrackAsset_TransientBuildData*)Il2CppClass::FromTypeDefinitionIndex(TrackAsset_TypeDefinitionIndex)->GetStaticField(0x25020);
		}
		static ::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>** StaticGet_OnClipPlayableCreate()
		{
			return (::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>**)Il2CppClass::FromTypeDefinitionIndex(TrackAsset_TypeDefinitionIndex)->GetStaticField(0x25038);
		}
		static ::Il2CppArray<::UnityEngine::Timeline::TrackAsset*>** StaticGet_s_EmptyCache()
		{
			return (::Il2CppArray<::UnityEngine::Timeline::TrackAsset*>**)Il2CppClass::FromTypeDefinitionIndex(TrackAsset_TypeDefinitionIndex)->GetStaticField(0x25040);
		}
		// static const ::System::Int32 k_LatestVersion = 0x3; // 0x0
		// static const ::System::String* kDefaultCurvesName; // 0x0
		::System::Int32 m_Version; // 0x18
		::UnityEngine::AnimationClip* m_AnimClip; // 0x20
		::System::Boolean m_Locked; // 0x28
		::System::Boolean m_Muted; // 0x29
		::System::String* m_CustomPlayableFullTypename; // 0x30
		::UnityEngine::AnimationClip* m_Curves; // 0x38
		::UnityEngine::Playables::PlayableAsset* m_Parent; // 0x40
		::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>* m_Children; // 0x48
		::System::String* guid; // 0x50
		::System::Int32 m_ItemsHash; // 0x58
		::Il2CppArray<::UnityEngine::Timeline::TimelineClip*>* m_ClipsCache; // 0x60
		::UnityEngine::Timeline::DiscreteTime m_Start; // 0x68
		::UnityEngine::Timeline::DiscreteTime m_End; // 0x70
		::System::Boolean m_CacheSorted; // 0x78
		::System::Nullable_1<::System::Boolean> m_SupportsNotifications; // 0x79
		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* m_ChildTrackCache; // 0x80
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* m_Clips; // 0x88
		::UnityEngine::Timeline::MarkerList m_Markers; // 0x90
		::System::Int32 m_runtimeMuteState; // 0xA8

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

		::System::Boolean CanMoveByUserInTimeline()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CANMOVEBYUSERINTIMELINE_OFFSET))(this);
		}

		::System::Void MoveByUserInTimeline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_MOVEBYUSERINTIMELINE_OFFSET))(this);
		}

		::System::String* ErrorMsg()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_ERRORMSG_OFFSET))(this);
		}

		::System::Boolean HasCustomColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_HASCUSTOMCOLOR_OFFSET))(this);
		}

		::UnityEngine::Color GetCustomColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GETCUSTOMCOLOR_OFFSET))(this);
		}

		::System::Void OnMuteStateChange(::System::Boolean isMute)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_ONMUTESTATECHANGE_OFFSET))(this, isMute);
		}

		::System::Void OnRuntimeMuteStateChange(::System::Int32 muteState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_ONRUNTIMEMUTESTATECHANGE_OFFSET))(this, muteState);
		}

		::System::Void OnCreateMarker(::UnityEngine::Timeline::IMarker* marker)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::IMarker*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_ONCREATEMARKER_OFFSET))(this, marker);
		}

		::System::Void OnDeleteClip(::UnityEngine::Timeline::TimelineClip* clip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_ONDELETECLIP_OFFSET))(this, clip);
		}

		::System::Void OnDeleteMarker(::UnityEngine::Timeline::IMarker* marker)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::IMarker*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_ONDELETEMARKER_OFFSET))(this, marker);
		}

		::System::Void OnDuplicateTrack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_ONDUPLICATETRACK_OFFSET))(this);
		}

		::System::Boolean CanCustomRecord()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CANCUSTOMRECORD_OFFSET))(this);
		}

		::System::Boolean IsCustomGetSceneGameObject()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_ISCUSTOMGETSCENEGAMEOBJECT_OFFSET))(this);
		}

		::UnityEngine::GameObject* CustomGetSceneGameObjectImp()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CUSTOMGETSCENEGAMEOBJECTIMP_OFFSET))(this);
		}

		::System::Boolean IsCustomGetRecordAnimClip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_ISCUSTOMGETRECORDANIMCLIP_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* CustomGetRecordAnimClipImp()
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CUSTOMGETRECORDANIMCLIPIMP_OFFSET))(this);
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

		::System::String* get_Guid()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_GUID_OFFSET))(this);
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

		::System::Void set_RuntimeMuteState(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_SET_RUNTIMEMUTESTATE_OFFSET))(this, value);
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

		::System::Collections::Generic::List_1<::System::String*>* TimelinePaths()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_TIMELINEPATHS_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Timeline::TimelineClip*>* GetClips()
		{
			return ((::Il2CppArray<::UnityEngine::Timeline::TimelineClip*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GETCLIPS_OFFSET))(this);
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

		::System::Boolean ContainTrack(::UnityEngine::Timeline::TrackAsset* subTrack)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CONTAINTRACK_OFFSET))(this, subTrack);
		}

		::System::Boolean RemoveTrack(::UnityEngine::Timeline::TrackAsset* subTrack)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_REMOVETRACK_OFFSET))(this, subTrack);
		}

		::System::Boolean get_hasCurves()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_HASCURVES_OFFSET))(this);
		}

		::System::Boolean get_isFrameTrack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_ISFRAMETRACK_OFFSET))(this);
		}

		::System::Boolean get_isSubTrack()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_ISSUBTRACK_OFFSET))(this);
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

		::System::Boolean get_supportsNotifications()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GET_SUPPORTSNOTIFICATIONS_OFFSET))(this);
		}

		::System::Void __internalAwake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET___INTERNALAWAKE_OFFSET))(this);
		}

		::System::Void GenGuid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GENGUID_OFFSET))(this);
		}

		::System::Void TrackCreateInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_TRACKCREATEINIT_OFFSET))(this);
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

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetReferencedGameObjects()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GETREFERENCEDGAMEOBJECTS_OFFSET))(this);
		}

		::UnityEngine::Timeline::TimelineClip* CreateDefaultClip()
		{
			return ((::UnityEngine::Timeline::TimelineClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CREATEDEFAULTCLIP_OFFSET))(this);
		}

		::UnityEngine::Timeline::TimelineClip* GetOrCreateDefaultClip()
		{
			return ((::UnityEngine::Timeline::TimelineClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GETORCREATEDEFAULTCLIP_OFFSET))(this);
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

		::System::Boolean ContainClipAsset(::UnityEngine::Timeline::ITimelineClipAsset* clipAsset)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::ITimelineClipAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CONTAINCLIPASSET_OFFSET))(this, clipAsset);
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

		::UnityEngine::Playables::Playable CreatePlayableGraph(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* tree, ::UnityEngine::Playables::Playable timelinePlayable)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_CREATEPLAYABLEGRAPH_OFFSET))(this, graph, go, tree, timelinePlayable);
		}

		::System::Void AfterCreatePlayableGraph(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_AFTERCREATEPLAYABLEGRAPH_OFFSET))(this, graph, go);
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

		::System::Void InsertChild(::UnityEngine::Timeline::TrackAsset* child, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_INSERTCHILD_OFFSET))(this, child, index);
		}

		::System::Void MoveLastTrackBefore(::UnityEngine::Timeline::TrackAsset* asset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_MOVELASTTRACKBEFORE_OFFSET))(this, asset);
		}

		::System::Boolean RemoveSubTrack(::UnityEngine::Timeline::TrackAsset* child)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TrackAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_REMOVESUBTRACK_OFFSET))(this, child);
		}

		::System::Void RemoveClip(::UnityEngine::Timeline::TimelineClip* clip, ::System::Boolean isDelete)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_REMOVECLIP_OFFSET))(this, clip, isDelete);
		}

		::System::Void GetEvaluationTime(::System::Double& outStart, ::System::Double& outDuration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double&, ::System::Double&))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_GETEVALUATIONTIME_OFFSET))(this, outStart, outDuration);
		}

		::System::Void NormalizeClip(::UnityEngine::Timeline::TimelineClip* clip, ::System::Boolean skipStartFrameAlter)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TRACKASSET_NORMALIZECLIP_OFFSET))(this, clip, skipStartFrameAlter);
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
