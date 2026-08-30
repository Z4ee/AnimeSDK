#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/DrawRendererFlags.h"
#include "unitysdk/UnityEngine/Rendering/DrawingSettings__shaderPassNames_e__FixedBuffer.h"
#include "unitysdk/UnityEngine/Rendering/PerObjectData.h"
#include "unitysdk/UnityEngine/Rendering/SortingSettings.h"

namespace System { class Object; }
namespace UnityEngine { class Material; }

#define UNITYENGINE_RENDERING_DRAWINGSETTINGS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3BFF030)
#define UNITYENGINE_RENDERING_DRAWINGSETTINGS_EQUALS_OFFSET UNITYSDK_OFFSET(0x3BFEFF0)
#define UNITYENGINE_RENDERING_DRAWINGSETTINGS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3BFF0B0)
#define UNITYENGINE_RENDERING_DRAWINGSETTINGS_GETSHADERPASSNAME_OFFSET UNITYSDK_OFFSET(0x3BFEFD0)
#define UNITYENGINE_RENDERING_DRAWINGSETTINGS_SETSHADERPASSNAME_OFFSET UNITYSDK_OFFSET(0x3BFEFE0)
#define UNITYENGINE_RENDERING_DRAWINGSETTINGS_SET_OVERRIDEMATERIALPASSINDEX_OFFSET UNITYSDK_OFFSET(0x3BFEFC0)
#define UNITYENGINE_RENDERING_DRAWINGSETTINGS_SET_OVERRIDEMATERIAL_OFFSET UNITYSDK_OFFSET(0x3BFEF70)
#define UNITYENGINE_RENDERING_DRAWINGSETTINGS_SET_PEROBJECTDATA_OFFSET UNITYSDK_OFFSET(0x3BFEF60)
#define UNITYENGINE_RENDERING_DRAWINGSETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCD1E30)
#define UNITYENGINE_RENDERING_DRAWINGSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x3BFEE10)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DrawingSettings_TypeDefinitionIndex = 4749;

	struct alignas(4) DrawingSettings
	{
		static ::System::Int32* StaticGet_maxShaderPasses()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrawingSettings_TypeDefinitionIndex)->GetStaticField(0x8570);
		}
		::UnityEngine::Rendering::SortingSettings m_SortingSettings; // 0x10
		::UnityEngine::Rendering::DrawingSettings__shaderPassNames_e__FixedBuffer shaderPassNames; // 0x130
		::UnityEngine::Rendering::PerObjectData m_PerObjectData; // 0x170
		::UnityEngine::Rendering::DrawRendererFlags m_Flags; // 0x174
		::System::Int32 m_OverrideMaterialInstanceId; // 0x178
		::System::Int32 m_OverrideMaterialPassIndex; // 0x17C
		::System::Int32 m_MainLightIndex; // 0x180
		::System::Int32 m_UseSrpBatcher; // 0x184
		::System::Int32 m_OverrideMaterialUseOriginalProperty; // 0x188

		/*
		::System::Void _ctor(::UnityEngine::Rendering::ShaderTagId a1, ::UnityEngine::Rendering::SortingSettings a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ShaderTagId, ::UnityEngine::Rendering::SortingSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS__CTOR_OFFSET))(this, a1, a2);
		}
		*/

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS__CCTOR_OFFSET))();
		}

		::System::Void set_perObjectData(::UnityEngine::Rendering::PerObjectData a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::PerObjectData))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS_SET_PEROBJECTDATA_OFFSET))(this, a1);
		}

		::System::Void set_overrideMaterial(::UnityEngine::Material* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS_SET_OVERRIDEMATERIAL_OFFSET))(this, a1);
		}

		::System::Void set_overrideMaterialPassIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS_SET_OVERRIDEMATERIALPASSINDEX_OFFSET))(this, a1);
		}

		/*
		::UnityEngine::Rendering::ShaderTagId GetShaderPassName(::System::Int32 a1)
		{
			return ((::UnityEngine::Rendering::ShaderTagId(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS_GETSHADERPASSNAME_OFFSET))(this, a1);
		}
		*/

		/*
		::System::Void SetShaderPassName(::System::Int32 a1, ::UnityEngine::Rendering::ShaderTagId a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::ShaderTagId))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS_SETSHADERPASSNAME_OFFSET))(this, a1, a2);
		}
		*/

		::System::Boolean Equals(::UnityEngine::Rendering::DrawingSettings a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::DrawingSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS_GETHASHCODE_OFFSET))(this);
		}
	};
}
