#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Behaviour.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/ControlParamHandleWrapper.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/StringIDWrapper.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_ANIMAGECOMPONENT_GETANIMATOROUTPUTBONELOCALX_OFFSET UNITYSDK_OFFSET(0x1FC6C4F0)
#define UNITYENGINE_ANIMAGECOMPONENT_GETANIMATOROUTPUTBONEX_OFFSET UNITYSDK_OFFSET(0x1FC6C4E0)
#define UNITYENGINE_ANIMAGECOMPONENT_GETBONEREFX_OFFSET UNITYSDK_OFFSET(0x1FC6C4C0)
#define UNITYENGINE_ANIMAGECOMPONENT_GETLASTFRAMEINPUTBONEX_OFFSET UNITYSDK_OFFSET(0x1FC6C4D0)
#define UNITYENGINE_ANIMAGECOMPONENT_RECORDDEBUGLINE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FC6C510)
#define UNITYENGINE_ANIMAGECOMPONENT_RECORDDEBUGLINE_OFFSET UNITYSDK_OFFSET(0x1FC6C500)
#define UNITYENGINE_ANIMAGECOMPONENT_RECORDDEBUGSPHERE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FC6C530)
#define UNITYENGINE_ANIMAGECOMPONENT_RECORDDEBUGSPHERE_OFFSET UNITYSDK_OFFSET(0x1FC6C520)
#define UNITYENGINE_ANIMAGECOMPONENT_SETCONTROLPARAMFLOAT_OFFSET UNITYSDK_OFFSET(0x1FC6C3F0)
#define UNITYENGINE_ANIMAGECOMPONENT_SETCONTROLPARAMINT_OFFSET UNITYSDK_OFFSET(0x1FC6C400)
#define UNITYENGINE_ANIMAGECOMPONENT_SETCONTROLPARAMPOSQUATWITHSCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FC6C4B0)
#define UNITYENGINE_ANIMAGECOMPONENT_SETCONTROLPARAMPOSQUATWITHSCALE_OFFSET UNITYSDK_OFFSET(0x1FC6C4A0)
#define UNITYENGINE_ANIMAGECOMPONENT_SETCONTROLPARAMPOSQUAT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FC6C490)
#define UNITYENGINE_ANIMAGECOMPONENT_SETCONTROLPARAMPOSQUAT_OFFSET UNITYSDK_OFFSET(0x1FC6C480)
#define UNITYENGINE_ANIMAGECOMPONENT_SETCONTROLPARAMVECTOR2_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FC6C430)
#define UNITYENGINE_ANIMAGECOMPONENT_SETCONTROLPARAMVECTOR2_OFFSET UNITYSDK_OFFSET(0x1FC6C410)
#define UNITYENGINE_ANIMAGECOMPONENT_SETCONTROLPARAMVECTOR3_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FC6C450)
#define UNITYENGINE_ANIMAGECOMPONENT_SETCONTROLPARAMVECTOR3_OFFSET UNITYSDK_OFFSET(0x1FC6C440)
#define UNITYENGINE_ANIMAGECOMPONENT_SETCONTROLPARAMVECTOR4_INJECTED_OFFSET UNITYSDK_OFFSET(0x1FC6C470)
#define UNITYENGINE_ANIMAGECOMPONENT_SETCONTROLPARAMVECTOR4_OFFSET UNITYSDK_OFFSET(0x1FC6C460)
#define UNITYENGINE_ANIMAGECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC6C540)

namespace UnityEngine
{
	inline static constexpr unsigned int AnimageComponent_TypeDefinitionIndex = 39950;

	class AnimageComponent : public ::UnityEngine::Behaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGECOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Void SetControlParamFloat(::UnityEngine::ControlParamHandleWrapper& InHandle, ::System::Single InValue)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ControlParamHandleWrapper&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGECOMPONENT_SETCONTROLPARAMFLOAT_OFFSET))(this, InHandle, InValue);
		}

		::System::Void SetControlParamInt(::UnityEngine::ControlParamHandleWrapper& InHandle, ::System::Int32 InValue)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ControlParamHandleWrapper&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGECOMPONENT_SETCONTROLPARAMINT_OFFSET))(this, InHandle, InValue);
		}

		::System::Void SetControlParamVector2(::UnityEngine::ControlParamHandleWrapper& InHandle, ::UnityEngine::Vector2 InValue)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ControlParamHandleWrapper&, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGECOMPONENT_SETCONTROLPARAMVECTOR2_OFFSET))(this, InHandle, InValue);
		}

		::System::Void SetControlParamVector3(::UnityEngine::ControlParamHandleWrapper& InHandle, ::UnityEngine::Vector3 InValue)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ControlParamHandleWrapper&, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGECOMPONENT_SETCONTROLPARAMVECTOR3_OFFSET))(this, InHandle, InValue);
		}

		::System::Void SetControlParamVector4(::UnityEngine::ControlParamHandleWrapper& InHandle, ::UnityEngine::Vector4 InValue)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ControlParamHandleWrapper&, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGECOMPONENT_SETCONTROLPARAMVECTOR4_OFFSET))(this, InHandle, InValue);
		}

		::System::Void SetControlParamPosQuat(::UnityEngine::ControlParamHandleWrapper& InHandle, ::UnityEngine::Vector3 InPos, ::UnityEngine::Quaternion InQuat)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ControlParamHandleWrapper&, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGECOMPONENT_SETCONTROLPARAMPOSQUAT_OFFSET))(this, InHandle, InPos, InQuat);
		}

		::System::Void SetControlParamPosQuatWithScale(::UnityEngine::ControlParamHandleWrapper& InHandle, ::UnityEngine::Vector3 InPos, ::UnityEngine::Quaternion InQuat, ::System::Single InScale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ControlParamHandleWrapper&, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGECOMPONENT_SETCONTROLPARAMPOSQUATWITHSCALE_OFFSET))(this, InHandle, InPos, InQuat, InScale);
		}

		::System::Void GetBoneRefX(::UnityEngine::StringIDWrapper& InBoneName, ::UnityEngine::Vector3& OutPos, ::UnityEngine::Quaternion& OutQuat)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::StringIDWrapper&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGECOMPONENT_GETBONEREFX_OFFSET))(this, InBoneName, OutPos, OutQuat);
		}

		::System::Void GetLastFrameInputBoneX(::UnityEngine::StringIDWrapper& InBoneName, ::UnityEngine::Vector3& OutPosition, ::UnityEngine::Quaternion& OutRotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::StringIDWrapper&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGECOMPONENT_GETLASTFRAMEINPUTBONEX_OFFSET))(this, InBoneName, OutPosition, OutRotation);
		}

		::System::Void GetAnimatorOutputBoneX(::UnityEngine::StringIDWrapper& InBoneName, ::UnityEngine::Vector3& OutPosition, ::UnityEngine::Quaternion& OutRotation)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::StringIDWrapper&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGECOMPONENT_GETANIMATOROUTPUTBONEX_OFFSET))(this, InBoneName, OutPosition, OutRotation);
		}

		::System::Void GetAnimatorOutputBoneLocalX(::UnityEngine::StringIDWrapper& InBoneName, ::UnityEngine::Vector3& OutLocalPosition, ::UnityEngine::Quaternion& OutLocalRotation, ::UnityEngine::Vector3& OutLocalScale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::StringIDWrapper&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGECOMPONENT_GETANIMATOROUTPUTBONELOCALX_OFFSET))(this, InBoneName, OutLocalPosition, OutLocalRotation, OutLocalScale);
		}

		::System::Void RecordDebugLine(::UnityEngine::Vector3 Start, ::UnityEngine::Vector3 End, ::UnityEngine::Color Color, ::System::Single Thickness)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGECOMPONENT_RECORDDEBUGLINE_OFFSET))(this, Start, End, Color, Thickness);
		}

		::System::Void RecordDebugSphere(::UnityEngine::Vector3 Center, ::System::Single Radius, ::UnityEngine::Color Color, ::System::Single Thickness)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGECOMPONENT_RECORDDEBUGSPHERE_OFFSET))(this, Center, Radius, Color, Thickness);
		}

		::System::Void SetControlParamVector2_Injected(::UnityEngine::ControlParamHandleWrapper& InHandle, ::UnityEngine::Vector2& InValue)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ControlParamHandleWrapper&, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGECOMPONENT_SETCONTROLPARAMVECTOR2_INJECTED_OFFSET))(this, InHandle, InValue);
		}

		::System::Void SetControlParamVector3_Injected(::UnityEngine::ControlParamHandleWrapper& InHandle, ::UnityEngine::Vector3& InValue)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ControlParamHandleWrapper&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGECOMPONENT_SETCONTROLPARAMVECTOR3_INJECTED_OFFSET))(this, InHandle, InValue);
		}

		::System::Void SetControlParamVector4_Injected(::UnityEngine::ControlParamHandleWrapper& InHandle, ::UnityEngine::Vector4& InValue)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ControlParamHandleWrapper&, ::UnityEngine::Vector4&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGECOMPONENT_SETCONTROLPARAMVECTOR4_INJECTED_OFFSET))(this, InHandle, InValue);
		}

		::System::Void SetControlParamPosQuat_Injected(::UnityEngine::ControlParamHandleWrapper& InHandle, ::UnityEngine::Vector3& InPos, ::UnityEngine::Quaternion& InQuat)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ControlParamHandleWrapper&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGECOMPONENT_SETCONTROLPARAMPOSQUAT_INJECTED_OFFSET))(this, InHandle, InPos, InQuat);
		}

		::System::Void SetControlParamPosQuatWithScale_Injected(::UnityEngine::ControlParamHandleWrapper& InHandle, ::UnityEngine::Vector3& InPos, ::UnityEngine::Quaternion& InQuat, ::System::Single InScale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ControlParamHandleWrapper&, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGECOMPONENT_SETCONTROLPARAMPOSQUATWITHSCALE_INJECTED_OFFSET))(this, InHandle, InPos, InQuat, InScale);
		}

		::System::Void RecordDebugLine_Injected(::UnityEngine::Vector3& Start, ::UnityEngine::Vector3& End, ::UnityEngine::Color& Color, ::System::Single Thickness)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Color&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGECOMPONENT_RECORDDEBUGLINE_INJECTED_OFFSET))(this, Start, End, Color, Thickness);
		}

		::System::Void RecordDebugSphere_Injected(::UnityEngine::Vector3& Center, ::System::Single Radius, ::UnityEngine::Color& Color, ::System::Single Thickness)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::System::Single, ::UnityEngine::Color&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_ANIMAGECOMPONENT_RECORDDEBUGSPHERE_INJECTED_OFFSET))(this, Center, Radius, Color, Thickness);
		}
	};
}
