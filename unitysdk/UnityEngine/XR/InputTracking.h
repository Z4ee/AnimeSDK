#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/XR/InputTracking_TrackingStateEventType.h"
#include "unitysdk/UnityEngine/XR/XRNode.h"
#include "unitysdk/UnityEngine/XR/XRNodeState.h"

namespace System { template <typename T> class Action_1; }

#define UNITYENGINE_XR_INPUTTRACKING_INVOKETRACKINGEVENT_OFFSET UNITYSDK_OFFSET(0x1FB66AB0)
#define UNITYENGINE_XR_INPUTTRACKING__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB66C50)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int InputTracking_TypeDefinitionIndex = 28235;

	class InputTracking : public ::System::Object
	{
	public:
		static ::System::Action_1<::UnityEngine::XR::XRNodeState>** StaticGet_nodeRemoved()
		{
			return (::System::Action_1<::UnityEngine::XR::XRNodeState>**)Il2CppClass::FromTypeDefinitionIndex(InputTracking_TypeDefinitionIndex)->GetStaticField(0x23E70);
		}
		static ::System::Action_1<::UnityEngine::XR::XRNodeState>** StaticGet_nodeAdded()
		{
			return (::System::Action_1<::UnityEngine::XR::XRNodeState>**)Il2CppClass::FromTypeDefinitionIndex(InputTracking_TypeDefinitionIndex)->GetStaticField(0x23E78);
		}
		static ::System::Action_1<::UnityEngine::XR::XRNodeState>** StaticGet_trackingLost()
		{
			return (::System::Action_1<::UnityEngine::XR::XRNodeState>**)Il2CppClass::FromTypeDefinitionIndex(InputTracking_TypeDefinitionIndex)->GetStaticField(0x23E80);
		}
		static ::System::Action_1<::UnityEngine::XR::XRNodeState>** StaticGet_trackingAcquired()
		{
			return (::System::Action_1<::UnityEngine::XR::XRNodeState>**)Il2CppClass::FromTypeDefinitionIndex(InputTracking_TypeDefinitionIndex)->GetStaticField(0x23E88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_XR_INPUTTRACKING__CCTOR_OFFSET))();
		}

		static ::System::Void InvokeTrackingEvent(::UnityEngine::XR::InputTracking_TrackingStateEventType eventType, ::UnityEngine::XR::XRNode nodeType, ::System::Int64 uniqueID, ::System::Boolean tracked)
		{
			return ((::System::Void(*)(::UnityEngine::XR::InputTracking_TrackingStateEventType, ::UnityEngine::XR::XRNode, ::System::Int64, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_INPUTTRACKING_INVOKETRACKINGEVENT_OFFSET))(eventType, nodeType, uniqueID, tracked);
		}
	};
}
