#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/CullMode.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_RASTERSTATE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9636B0)
#define UNITYENGINE_RENDERING_RASTERSTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0x963650)
#define UNITYENGINE_RENDERING_RASTERSTATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x963750)
#define UNITYENGINE_RENDERING_RASTERSTATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2F5E90)
#define UNITYENGINE_RENDERING_RASTERSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x963630)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RasterState_TypeDefinitionIndex = 6221;

	struct alignas(4) RasterState
	{
		static ::UnityEngine::Rendering::RasterState* StaticGet_defaultValue()
		{
			return (::UnityEngine::Rendering::RasterState*)Il2CppClass::FromTypeDefinitionIndex(RasterState_TypeDefinitionIndex)->GetStaticField(0x2570);
		}
		::UnityEngine::Rendering::CullMode m_CullingMode; // 0x10
		::System::Int32 m_OffsetUnits; // 0x14
		::System::Single m_OffsetFactor; // 0x18
		::System::Byte m_DepthClip; // 0x1C
		::System::Byte m_Padding1; // 0x1D
		::System::Byte m_Padding2; // 0x1E
		::System::Byte m_Padding3; // 0x1F

		::System::Void _ctor(::UnityEngine::Rendering::CullMode cullingMode, ::System::Int32 offsetUnits, ::System::Single offsetFactor, ::System::Boolean depthClip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CullMode, ::System::Int32, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RASTERSTATE__CTOR_OFFSET))(this, cullingMode, offsetUnits, offsetFactor, depthClip);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RASTERSTATE__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::UnityEngine::Rendering::RasterState other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::RasterState))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RASTERSTATE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RASTERSTATE_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RASTERSTATE_GETHASHCODE_OFFSET))(this);
		}
	};
}
