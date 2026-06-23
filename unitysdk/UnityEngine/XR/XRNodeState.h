#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/XR/AvailableTrackingData.h"
#include "unitysdk/UnityEngine/XR/XRNode.h"

#define UNITYENGINE_XR_XRNODESTATE_SET_NODETYPE_OFFSET UNITYSDK_OFFSET(0x2B66C0)
#define UNITYENGINE_XR_XRNODESTATE_SET_TRACKED_OFFSET UNITYSDK_OFFSET(0xA7A550)
#define UNITYENGINE_XR_XRNODESTATE_SET_UNIQUEID_OFFSET UNITYSDK_OFFSET(0x96C5C0)

namespace UnityEngine::XR
{
	inline static constexpr unsigned int XRNodeState_TypeDefinitionIndex = 27637;

	struct alignas(8) XRNodeState
	{
		::UnityEngine::XR::XRNode m_Type; // 0x10
		::UnityEngine::XR::AvailableTrackingData m_AvailableFields; // 0x14
		::UnityEngine::Vector3 m_Position; // 0x18
		::UnityEngine::Quaternion m_Rotation; // 0x24
		::UnityEngine::Vector3 m_Velocity; // 0x34
		::UnityEngine::Vector3 m_AngularVelocity; // 0x40
		::UnityEngine::Vector3 m_Acceleration; // 0x4C
		::UnityEngine::Vector3 m_AngularAcceleration; // 0x58
		::System::Int32 m_Tracked; // 0x64
		::System::UInt64 m_UniqueID; // 0x68

		::System::Void set_uniqueID(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRNODESTATE_SET_UNIQUEID_OFFSET))(this, value);
		}

		::System::Void set_nodeType(::UnityEngine::XR::XRNode value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::XR::XRNode))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRNODESTATE_SET_NODETYPE_OFFSET))(this, value);
		}

		::System::Void set_tracked(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_XR_XRNODESTATE_SET_TRACKED_OFFSET))(this, value);
		}
	};
}
