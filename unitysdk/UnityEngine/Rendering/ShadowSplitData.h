#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/ShadowSplitData__m_CullingPlanes_e__FixedBuffer.h"
#include "unitysdk/UnityEngine/Rendering/ShadowSplitData__m_layerCullingDistances_e__FixedBuffer.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_SHADOWSPLITDATA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA3A9D0)
#define UNITYENGINE_RENDERING_SHADOWSPLITDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0xA3A990)
#define UNITYENGINE_RENDERING_SHADOWSPLITDATA_GETCULLINGPLANE_OFFSET UNITYSDK_OFFSET(0xA3A970)
#define UNITYENGINE_RENDERING_SHADOWSPLITDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA3AA50)
#define UNITYENGINE_RENDERING_SHADOWSPLITDATA_GET_CULLINGPLANECOUNT_OFFSET UNITYSDK_OFFSET(0x325570)
#define UNITYENGINE_RENDERING_SHADOWSPLITDATA_SET_SHADOWCASCADEBLENDCULLINGFACTOR_OFFSET UNITYSDK_OFFSET(0xA3A960)
#define UNITYENGINE_RENDERING_SHADOWSPLITDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7D9AA0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ShadowSplitData_TypeDefinitionIndex = 6263;

	struct alignas(4) ShadowSplitData
	{
		static ::System::Int32* StaticGet_maximumCullingPlaneCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ShadowSplitData_TypeDefinitionIndex)->GetStaticField(0x2C00);
		}
		::System::Int32 m_CullingPlaneCount; // 0x10
		::UnityEngine::Rendering::ShadowSplitData__m_CullingPlanes_e__FixedBuffer m_CullingPlanes; // 0x14
		::UnityEngine::Vector4 m_CullingSphere; // 0xB4
		::System::Single m_ShadowCascadeBlendCullingFactor; // 0xC4
		::System::Single m_screenCullingRatio; // 0xC8
		::UnityEngine::Vector3 m_cameraPos; // 0xCC
		::UnityEngine::Rendering::ShadowSplitData__m_layerCullingDistances_e__FixedBuffer m_layerCullingDistances; // 0xD8

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWSPLITDATA__CCTOR_OFFSET))();
		}

		::System::Int32 get_cullingPlaneCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWSPLITDATA_GET_CULLINGPLANECOUNT_OFFSET))(this);
		}

		::System::Void set_shadowCascadeBlendCullingFactor(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWSPLITDATA_SET_SHADOWCASCADEBLENDCULLINGFACTOR_OFFSET))(this, value);
		}

		/*
		::UnityEngine::Plane GetCullingPlane(::System::Int32 index)
		{
			return ((::UnityEngine::Plane(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWSPLITDATA_GETCULLINGPLANE_OFFSET))(this, index);
		}
		*/

		::System::Boolean Equals(::UnityEngine::Rendering::ShadowSplitData other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::ShadowSplitData))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWSPLITDATA_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWSPLITDATA_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SHADOWSPLITDATA_GETHASHCODE_OFFSET))(this);
		}
	};
}
