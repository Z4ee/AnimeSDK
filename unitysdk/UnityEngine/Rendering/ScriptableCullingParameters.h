#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Rendering/CameraProperties.h"
#include "unitysdk/UnityEngine/Rendering/CullingOptions.h"
#include "unitysdk/UnityEngine/Rendering/LODParameters.h"
#include "unitysdk/UnityEngine/Rendering/ReflectionProbeSortingCriteria.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableCullingParameters__m_CullingPlanes_e__FixedBuffer.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableCullingParameters__m_LayerFarCullDistances_e__FixedBuffer.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3BC3C40)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_EQUALS_OFFSET UNITYSDK_OFFSET(0x3BC3C00)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_GETCULLINGPLANE_OFFSET UNITYSDK_OFFSET(0x3BC3BE0)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3BC3CC0)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_GETLAYERCULLINGDISTANCE_OFFSET UNITYSDK_OFFSET(0x3BC3BD0)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_GET_CULLINGPLANECOUNT_OFFSET UNITYSDK_OFFSET(0x3BC3BC0)
#define UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED5F3F0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ScriptableCullingParameters_TypeDefinitionIndex = 4742;

	struct alignas(8) ScriptableCullingParameters
	{
		static ::System::Int32* StaticGet_maximumCullingPlaneCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ScriptableCullingParameters_TypeDefinitionIndex)->GetStaticField(0x7E80);
		}
		static ::System::Int32* StaticGet_layerCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ScriptableCullingParameters_TypeDefinitionIndex)->GetStaticField(0x7E84);
		}
		::System::Int32 m_IsOrthographic; // 0x10
		::UnityEngine::Rendering::LODParameters m_LODParameters; // 0x14
		::UnityEngine::Rendering::ScriptableCullingParameters__m_CullingPlanes_e__FixedBuffer m_CullingPlanes; // 0x30
		::System::Int32 m_CullingPlaneCount; // 0xD0
		::System::UInt32 m_CullingMask; // 0xD4
		::System::UInt64 m_SceneMask; // 0xD8
		::UnityEngine::Rendering::ScriptableCullingParameters__m_LayerFarCullDistances_e__FixedBuffer m_LayerFarCullDistances; // 0xE0
		::System::Int32 m_LayerCull; // 0x160
		::UnityEngine::Matrix4x4 m_CullingMatrix; // 0x164
		::UnityEngine::Vector3 m_Origin; // 0x1A4
		::System::Single m_ShadowDistance; // 0x1B0
		::UnityEngine::Rendering::CullingOptions m_CullingOptions; // 0x1B4
		::UnityEngine::Rendering::ReflectionProbeSortingCriteria m_ReflectionProbeSortingCriteria; // 0x1B8
		::UnityEngine::Rendering::CameraProperties m_CameraProperties; // 0x1BC
		::System::Single m_AccurateOcclusionThreshold; // 0x5A0
		::System::Int32 m_MaximumPortalCullingJobs; // 0x5A4
		::UnityEngine::Matrix4x4 m_StereoViewMatrix; // 0x5A8
		::UnityEngine::Matrix4x4 m_StereoProjectionMatrix; // 0x5E8
		::System::Single m_StereoSeparationDistance; // 0x628
		::System::Int32 m_maximumVisibleLights; // 0x62C
		::System::IntPtr m_hizHisBuffer; // 0x630
		::System::Boolean m_IsOCDebug; // 0x638
		::System::Int32 m_numOCDelayFrame; // 0x63C
		::System::Boolean m_enableDeformation; // 0x640

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS__CCTOR_OFFSET))();
		}

		::System::Int32 get_cullingPlaneCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_GET_CULLINGPLANECOUNT_OFFSET))(this);
		}

		::System::Single GetLayerCullingDistance(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_GETLAYERCULLINGDISTANCE_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::Plane GetCullingPlane(::System::Int32 a1)
		{
			return ((::UnityEngine::Plane(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_GETCULLINGPLANE_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals(::UnityEngine::Rendering::ScriptableCullingParameters a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::ScriptableCullingParameters))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SCRIPTABLECULLINGPARAMETERS_GETHASHCODE_OFFSET))(this);
		}
	};
}
