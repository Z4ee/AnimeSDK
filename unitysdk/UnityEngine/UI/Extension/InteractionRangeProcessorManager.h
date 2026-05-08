#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UI/Extension/InteractionSegment.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI::Extension { class InteractionRangeProcessorBase; }

#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORMANAGER_ADDHANDLE_OFFSET UNITYSDK_OFFSET(0x18AE6F30)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORMANAGER_DISPOSEALL_OFFSET UNITYSDK_OFFSET(0x18AE6660)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORMANAGER_FORCESIMULATETWOPOINTDRAG_OFFSET UNITYSDK_OFFSET(0x18AE6A70)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORMANAGER_GETRESOURCE_OFFSET UNITYSDK_OFFSET(0x18AE7410)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORMANAGER_HANDLEEVENTDATA_1_OFFSET UNITYSDK_OFFSET(0x18AE6490)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORMANAGER_HANDLEEVENTDATA_OFFSET UNITYSDK_OFFSET(0x18AE6280)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORMANAGER_ISALLPROCESSORSNOTCLAMPING_OFFSET UNITYSDK_OFFSET(0x18AE72C0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORMANAGER_KILL_OFFSET UNITYSDK_OFFSET(0x18AE6820)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORMANAGER_REFRESHINTERACTSTATE_OFFSET UNITYSDK_OFFSET(0x18AE6DD0)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORMANAGER_REFRESHPROCESSERBYPLATFORM_OFFSET UNITYSDK_OFFSET(0x18AE7000)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORMANAGER_REMOVEHANDLE_OFFSET UNITYSDK_OFFSET(0x18AE6940)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0x18AE6130)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORMANAGER_WAITUNTILALLCLAMPFINISH_OFFSET UNITYSDK_OFFSET(0x18AE7210)
#define UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18AE74F0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int InteractionRangeProcessorManager_TypeDefinitionIndex = 80370;

	class InteractionRangeProcessorManager : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::Extension::InteractionRangeProcessorBase*>* m_processorsDict; // 0x10
		::System::Int32 nextHandle; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORMANAGER__CTOR_OFFSET))(this);
		}

		::System::Void Tick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORMANAGER_TICK_OFFSET))(this);
		}

		::System::Void HandleEventData(::UnityEngine::EventSystems::PointerEventData* eventData, ::UnityEngine::Vector3 worldPointDelta, ::UnityEngine::Rect rect, ::System::Func_2<::UnityEngine::UI::Extension::InteractionRangeProcessorBase*, ::System::Boolean>* predicate)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector3, ::UnityEngine::Rect, ::System::Func_2<::UnityEngine::UI::Extension::InteractionRangeProcessorBase*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORMANAGER_HANDLEEVENTDATA_OFFSET))(this, eventData, worldPointDelta, rect, predicate);
		}

		::System::Void HandleEventData_1(::UnityEngine::Vector2 screenPos1Old, ::UnityEngine::Vector2 screenPos2Old, ::UnityEngine::Vector2 screenPos1New, ::UnityEngine::Vector2 screenPos2New, ::System::Func_2<::UnityEngine::UI::Extension::InteractionRangeProcessorBase*, ::System::Boolean>* predicate)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Func_2<::UnityEngine::UI::Extension::InteractionRangeProcessorBase*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORMANAGER_HANDLEEVENTDATA_1_OFFSET))(this, screenPos1Old, screenPos2Old, screenPos1New, screenPos2New, predicate);
		}

		::System::Void DisposeAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORMANAGER_DISPOSEALL_OFFSET))(this);
		}

		::System::Void Kill(::System::Int32 processorID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORMANAGER_KILL_OFFSET))(this, processorID);
		}

		::System::Void ForceSimulateTwoPointDrag(::System::Single delta)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORMANAGER_FORCESIMULATETWOPOINTDRAG_OFFSET))(this, delta);
		}

		::System::Void RefreshInteractState(::UnityEngine::UI::Extension::InteractionSegment interactionSegment)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::InteractionSegment))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORMANAGER_REFRESHINTERACTSTATE_OFFSET))(this, interactionSegment);
		}

		::System::Int32 AddHandle(::UnityEngine::UI::Extension::InteractionRangeProcessorBase* resource)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::UI::Extension::InteractionRangeProcessorBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORMANAGER_ADDHANDLE_OFFSET))(this, resource);
		}

		::System::Void RefreshProcesserByPlatform()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORMANAGER_REFRESHPROCESSERBYPLATFORM_OFFSET))(this);
		}

		::Cysharp::Threading::Tasks::UniTask WaitUntilAllClampFinish(::System::Threading::CancellationToken token)
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORMANAGER_WAITUNTILALLCLAMPFINISH_OFFSET))(this, token);
		}

		::System::Boolean IsAllProcessorsNotClamping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORMANAGER_ISALLPROCESSORSNOTCLAMPING_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::InteractionRangeProcessorBase* GetResource(::System::Int32 handle)
		{
			return ((::UnityEngine::UI::Extension::InteractionRangeProcessorBase*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORMANAGER_GETRESOURCE_OFFSET))(this, handle);
		}

		::System::Void RemoveHandle(::System::Int32 handle)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_INTERACTIONRANGEPROCESSORMANAGER_REMOVEHANDLE_OFFSET))(this, handle);
		}
	};
}
