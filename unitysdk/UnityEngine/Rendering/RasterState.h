#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/CullMode.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_RASTERSTATE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3BFFF00)
#define UNITYENGINE_RENDERING_RASTERSTATE_EQUALS_OFFSET UNITYSDK_OFFSET(0x3BFFEA0)
#define UNITYENGINE_RENDERING_RASTERSTATE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3BFFFB0)
#define UNITYENGINE_RENDERING_RASTERSTATE_GET_CONSERVATIVE_OFFSET UNITYSDK_OFFSET(0x3BFFE90)
#define UNITYENGINE_RENDERING_RASTERSTATE_GET_CULLINGMODE_OFFSET UNITYSDK_OFFSET(0x19050)
#define UNITYENGINE_RENDERING_RASTERSTATE_GET_DEPTHCLIP_OFFSET UNITYSDK_OFFSET(0x3BFFE80)
#define UNITYENGINE_RENDERING_RASTERSTATE_GET_OFFSETFACTOR_OFFSET UNITYSDK_OFFSET(0xB5A200)
#define UNITYENGINE_RENDERING_RASTERSTATE_GET_OFFSETUNITS_OFFSET UNITYSDK_OFFSET(0x784260)
#define UNITYENGINE_RENDERING_RASTERSTATE_SET_CONSERVATIVE_OFFSET UNITYSDK_OFFSET(0x3B002B0)
#define UNITYENGINE_RENDERING_RASTERSTATE_SET_CULLINGMODE_OFFSET UNITYSDK_OFFSET(0x18EB0)
#define UNITYENGINE_RENDERING_RASTERSTATE_SET_DEPTHCLIP_OFFSET UNITYSDK_OFFSET(0x3AF3DB0)
#define UNITYENGINE_RENDERING_RASTERSTATE_SET_OFFSETFACTOR_OFFSET UNITYSDK_OFFSET(0x3A546B0)
#define UNITYENGINE_RENDERING_RASTERSTATE_SET_OFFSETUNITS_OFFSET UNITYSDK_OFFSET(0xB596A0)
#define UNITYENGINE_RENDERING_RASTERSTATE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCD2980)
#define UNITYENGINE_RENDERING_RASTERSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x3BFFE50)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RasterState_TypeDefinitionIndex = 4755;

	struct alignas(4) RasterState
	{
		static ::UnityEngine::Rendering::RasterState* StaticGet_defaultValue()
		{
			return (::UnityEngine::Rendering::RasterState*)Il2CppClass::FromTypeDefinitionIndex(RasterState_TypeDefinitionIndex)->GetStaticField(0x85F0);
		}
		::UnityEngine::Rendering::CullMode m_CullingMode; // 0x10
		::System::Int32 m_OffsetUnits; // 0x14
		::System::Single m_OffsetFactor; // 0x18
		::System::Byte m_DepthClip; // 0x1C
		::System::Byte m_Conservative; // 0x1D
		::System::Byte m_Padding1; // 0x1E
		::System::Byte m_Padding2; // 0x1F

		::System::Void _ctor(::UnityEngine::Rendering::CullMode a1, ::System::Int32 a2, ::System::Single a3, ::System::Boolean a4, ::System::Boolean a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CullMode, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RASTERSTATE__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RASTERSTATE__CCTOR_OFFSET))();
		}

		::UnityEngine::Rendering::CullMode get_cullingMode()
		{
			return ((::UnityEngine::Rendering::CullMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RASTERSTATE_GET_CULLINGMODE_OFFSET))(this);
		}

		::System::Void set_cullingMode(::UnityEngine::Rendering::CullMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CullMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RASTERSTATE_SET_CULLINGMODE_OFFSET))(this, a1);
		}

		::System::Boolean get_depthClip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RASTERSTATE_GET_DEPTHCLIP_OFFSET))(this);
		}

		::System::Void set_depthClip(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RASTERSTATE_SET_DEPTHCLIP_OFFSET))(this, a1);
		}

		::System::Int32 get_offsetUnits()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RASTERSTATE_GET_OFFSETUNITS_OFFSET))(this);
		}

		::System::Void set_offsetUnits(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RASTERSTATE_SET_OFFSETUNITS_OFFSET))(this, a1);
		}

		::System::Single get_offsetFactor()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RASTERSTATE_GET_OFFSETFACTOR_OFFSET))(this);
		}

		::System::Void set_offsetFactor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RASTERSTATE_SET_OFFSETFACTOR_OFFSET))(this, a1);
		}

		::System::Boolean get_conservative()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RASTERSTATE_GET_CONSERVATIVE_OFFSET))(this);
		}

		::System::Void set_conservative(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RASTERSTATE_SET_CONSERVATIVE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::UnityEngine::Rendering::RasterState a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::RasterState))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RASTERSTATE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RASTERSTATE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RASTERSTATE_GETHASHCODE_OFFSET))(this);
		}
	};
}
