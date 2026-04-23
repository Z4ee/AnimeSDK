#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ExposedReference_1.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ActivationControlPlayable_PostPlaybackState.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class IPropertyCollector; }

#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_CONNECTMIXERANDPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1A3E2190)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_CONNECTPLAYABLESTOMIXER_OFFSET UNITYSDK_OFFSET(0x1A3E1F70)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_CREATEACTIVATIONPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1A3E11D0)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1A3DF7F0)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1A3E2910)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_GETCONTROLABLESCRIPTS_OFFSET UNITYSDK_OFFSET(0x1A3E1B30)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_GETCONTROLDATAS_OFFSET UNITYSDK_OFFSET(0x1A3E3AD0)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_GETPARTICLESYSTEMROOTS_1_OFFSET UNITYSDK_OFFSET(0x1A3E2750)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_GETPARTICLESYSTEMROOTS_OFFSET UNITYSDK_OFFSET(0x1A3E04E0)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1A3DF7E0)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_GET_CONTROLLINGDIRECTORS_OFFSET UNITYSDK_OFFSET(0x1A3DF760)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_GET_CONTROLLINGPARTICLES_OFFSET UNITYSDK_OFFSET(0x1A3DF780)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1A3DF7D0)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1A3DF7A0)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_SEARCHHIEARCHYANDCONNECTPARTICLESYSTEM_OFFSET UNITYSDK_OFFSET(0x1A3E1770)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_SEARCHHIERARCHYANDCONNECTCONTROLABLESCRIPTS_OFFSET UNITYSDK_OFFSET(0x1A3E1B90)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_SEARCHHIERARCHYANDCONNECTDIRECTOR_OFFSET UNITYSDK_OFFSET(0x1A3E12E0)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_SETCONTROLDATAS_OFFSET UNITYSDK_OFFSET(0x1A3E39A0)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_SET_CONTROLLINGDIRECTORS_OFFSET UNITYSDK_OFFSET(0x1A3DF770)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_SET_CONTROLLINGPARTICLES_OFFSET UNITYSDK_OFFSET(0x1A3DF790)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_UPDATEDURATIONANDLOOPFLAG_OFFSET UNITYSDK_OFFSET(0x1A3E0590)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A3E3D10)
#define UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3E3CC0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int ControlPlayableAsset_TypeDefinitionIndex = 35575;

	class ControlPlayableAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		static ::System::Func_2<::UnityEngine::Timeline::ControlPlayableAsset*, ::Il2CppArray<::UnityEngine::ScriptableObject*>*>** StaticGet_OnAddControlDatas()
		{
			return (::System::Func_2<::UnityEngine::Timeline::ControlPlayableAsset*, ::Il2CppArray<::UnityEngine::ScriptableObject*>*>**)Il2CppClass::FromTypeDefinitionIndex(ControlPlayableAsset_TypeDefinitionIndex)->GetStaticField(0x69950);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Playables::PlayableDirector*>** StaticGet_k_EmptyDirectorsList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Playables::PlayableDirector*>**)Il2CppClass::FromTypeDefinitionIndex(ControlPlayableAsset_TypeDefinitionIndex)->GetStaticField(0x69958);
		}
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::GameObject*>** StaticGet_s_CreatedPrefabs()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::GameObject*>**)Il2CppClass::FromTypeDefinitionIndex(ControlPlayableAsset_TypeDefinitionIndex)->GetStaticField(0x69960);
		}
		static ::System::Action_4<::UnityEngine::Timeline::ControlPlayableAsset*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*>** StaticGet_OnModifyPlayables()
		{
			return (::System::Action_4<::UnityEngine::Timeline::ControlPlayableAsset*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*>**)Il2CppClass::FromTypeDefinitionIndex(ControlPlayableAsset_TypeDefinitionIndex)->GetStaticField(0x69968);
		}
		static ::System::Collections::Generic::HashSet_1<::UnityEngine::Playables::PlayableDirector*>** StaticGet_s_ProcessedDirectors()
		{
			return (::System::Collections::Generic::HashSet_1<::UnityEngine::Playables::PlayableDirector*>**)Il2CppClass::FromTypeDefinitionIndex(ControlPlayableAsset_TypeDefinitionIndex)->GetStaticField(0x69970);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>** StaticGet_k_EmptyParticlesList()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::ParticleSystem*>**)Il2CppClass::FromTypeDefinitionIndex(ControlPlayableAsset_TypeDefinitionIndex)->GetStaticField(0x69978);
		}
		// static const ::System::Int32 k_MaxRandInt = 0x2710; // 0x0
		::UnityEngine::ExposedReference_1<::UnityEngine::GameObject*> sourceGameObject; // 0x18
		::UnityEngine::GameObject* prefabGameObject; // 0x28
		::System::Boolean updateParticle; // 0x30
		::System::UInt32 particleRandomSeed; // 0x34
		::System::Boolean updateDirector; // 0x38
		::System::Boolean updateITimeControl; // 0x39
		::System::Boolean searchHierarchy; // 0x3A
		::System::Boolean active; // 0x3B
		::UnityEngine::Timeline::ActivationControlPlayable_PostPlaybackState postPlayback; // 0x3C
		::Il2CppArray<::UnityEngine::ScriptableObject*>* m_controlDatas; // 0x40
		::UnityEngine::Playables::PlayableAsset* m_ControlDirectorAsset; // 0x48
		::System::Double m_Duration; // 0x50
		::System::Boolean m_SupportLoop; // 0x58
		::System::Boolean _controllingDirectors_k__BackingField; // 0x59
		::System::Boolean _controllingParticles_k__BackingField; // 0x5A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET__CCTOR_OFFSET))();
		}

		::System::Boolean get_controllingDirectors()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_GET_CONTROLLINGDIRECTORS_OFFSET))(this);
		}

		::System::Void set_controllingDirectors(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_SET_CONTROLLINGDIRECTORS_OFFSET))(this, value);
		}

		::System::Boolean get_controllingParticles()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_GET_CONTROLLINGPARTICLES_OFFSET))(this);
		}

		::System::Void set_controllingParticles(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_SET_CONTROLLINGPARTICLES_OFFSET))(this, value);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_ONENABLE_OFFSET))(this);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_GET_DURATION_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(this, graph, go);
		}

		static ::UnityEngine::Playables::Playable ConnectPlayablesToMixer(::UnityEngine::Playables::PlayableGraph graph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* playables)
		{
			return ((::UnityEngine::Playables::Playable(*)(::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_CONNECTPLAYABLESTOMIXER_OFFSET))(graph, playables);
		}

		::System::Void CreateActivationPlayable(::UnityEngine::GameObject* root, ::UnityEngine::Playables::PlayableGraph graph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* outplayables)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_CREATEACTIVATIONPLAYABLE_OFFSET))(this, root, graph, outplayables);
		}

		::System::Void SearchHiearchyAndConnectParticleSystem(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ParticleSystem*>* particleSystems, ::UnityEngine::Playables::PlayableGraph graph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* outplayables)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ParticleSystem*>*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_SEARCHHIEARCHYANDCONNECTPARTICLESYSTEM_OFFSET))(this, particleSystems, graph, outplayables);
		}

		::System::Void SearchHierarchyAndConnectDirector(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableDirector*>* directors, ::UnityEngine::Playables::PlayableGraph graph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* outplayables, ::System::Boolean disableSelfReferences)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableDirector*>*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_SEARCHHIERARCHYANDCONNECTDIRECTOR_OFFSET))(this, directors, graph, outplayables, disableSelfReferences);
		}

		static ::System::Void SearchHierarchyAndConnectControlableScripts(::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>* controlableScripts, ::UnityEngine::Playables::PlayableGraph graph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>* outplayables)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>*, ::UnityEngine::Playables::PlayableGraph, ::System::Collections::Generic::List_1<::UnityEngine::Playables::Playable>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_SEARCHHIERARCHYANDCONNECTCONTROLABLESCRIPTS_OFFSET))(controlableScripts, graph, outplayables);
		}

		static ::System::Void ConnectMixerAndPlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Playables::Playable mixer, ::UnityEngine::Playables::Playable playable, ::System::Int32 portIndex)
		{
			return ((::System::Void(*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::Playable, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_CONNECTMIXERANDPLAYABLE_OFFSET))(graph, mixer, playable, portIndex);
		}

		static ::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>* GetControlableScripts(::UnityEngine::GameObject* root)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::MonoBehaviour*>*(*)(::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_GETCONTROLABLESCRIPTS_OFFSET))(root);
		}

		::System::Void UpdateDurationAndLoopFlag(::System::Collections::Generic::IList_1<::UnityEngine::Playables::PlayableDirector*>* directors, ::System::Collections::Generic::IList_1<::UnityEngine::ParticleSystem*>* particleSystems)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::Playables::PlayableDirector*>*, ::System::Collections::Generic::IList_1<::UnityEngine::ParticleSystem*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_UPDATEDURATIONANDLOOPFLAG_OFFSET))(this, directors, particleSystems);
		}

		::System::Collections::Generic::IList_1<::UnityEngine::ParticleSystem*>* GetParticleSystemRoots(::UnityEngine::GameObject* go)
		{
			return ((::System::Collections::Generic::IList_1<::UnityEngine::ParticleSystem*>*(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_GETPARTICLESYSTEMROOTS_OFFSET))(this, go);
		}

		static ::System::Void GetParticleSystemRoots_1(::UnityEngine::Transform* t, ::System::Collections::Generic::ICollection_1<::UnityEngine::ParticleSystem*>* roots)
		{
			return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Collections::Generic::ICollection_1<::UnityEngine::ParticleSystem*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_GETPARTICLESYSTEMROOTS_1_OFFSET))(t, roots);
		}

		::System::Void GatherProperties(::UnityEngine::Playables::PlayableDirector* director, ::UnityEngine::Timeline::IPropertyCollector* driver)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_GATHERPROPERTIES_OFFSET))(this, director, driver);
		}

		::System::Void SetControlDatas(::Il2CppArray<::UnityEngine::ScriptableObject*>* Datas)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::ScriptableObject*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_SETCONTROLDATAS_OFFSET))(this, Datas);
		}

		::Il2CppArray<::UnityEngine::ScriptableObject*>* GetControlDatas()
		{
			return ((::Il2CppArray<::UnityEngine::ScriptableObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_CONTROLPLAYABLEASSET_GETCONTROLDATAS_OFFSET))(this);
		}
	};
}
