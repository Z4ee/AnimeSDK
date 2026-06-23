#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/DrawRendererFlags.h"
#include "unitysdk/UnityEngine/Rendering/DrawingSettings__shaderPassNames_e__FixedBuffer.h"
#include "unitysdk/UnityEngine/Rendering/PerObjectData.h"
#include "unitysdk/UnityEngine/Rendering/SortingSettings.h"

namespace System { class Object; }
namespace UnityEngine { class Material; }

#define UNITYENGINE_RENDERING_DRAWINGSETTINGS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA08390)
#define UNITYENGINE_RENDERING_DRAWINGSETTINGS_EQUALS_OFFSET UNITYSDK_OFFSET(0xA08350)
#define UNITYENGINE_RENDERING_DRAWINGSETTINGS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA08410)
#define UNITYENGINE_RENDERING_DRAWINGSETTINGS_GETSHADERPASSNAME_OFFSET UNITYSDK_OFFSET(0xA08330)
#define UNITYENGINE_RENDERING_DRAWINGSETTINGS_GET_PEROBJECTDATA_OFFSET UNITYSDK_OFFSET(0xA08290)
#define UNITYENGINE_RENDERING_DRAWINGSETTINGS_SETSHADERPASSNAME_OFFSET UNITYSDK_OFFSET(0xA08340)
#define UNITYENGINE_RENDERING_DRAWINGSETTINGS_SET_ENABLEDYNAMICBATCHING_OFFSET UNITYSDK_OFFSET(0xA082B0)
#define UNITYENGINE_RENDERING_DRAWINGSETTINGS_SET_ENABLEINSTANCING_OFFSET UNITYSDK_OFFSET(0xA082D0)
#define UNITYENGINE_RENDERING_DRAWINGSETTINGS_SET_OVERRIDEMATERIALPASSINDEX_OFFSET UNITYSDK_OFFSET(0xA08320)
#define UNITYENGINE_RENDERING_DRAWINGSETTINGS_SET_OVERRIDEMATERIAL_OFFSET UNITYSDK_OFFSET(0xA082F0)
#define UNITYENGINE_RENDERING_DRAWINGSETTINGS_SET_PEROBJECTDATA_OFFSET UNITYSDK_OFFSET(0xA082A0)
#define UNITYENGINE_RENDERING_DRAWINGSETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6FD2E0)
#define UNITYENGINE_RENDERING_DRAWINGSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0xA08140)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DrawingSettings_TypeDefinitionIndex = 6240;

	struct alignas(4) DrawingSettings
	{
		static ::System::Int32* StaticGet_maxShaderPasses()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrawingSettings_TypeDefinitionIndex)->GetStaticField(0x2A30);
		}
		::UnityEngine::Rendering::SortingSettings m_SortingSettings; // 0x10
		::UnityEngine::Rendering::DrawingSettings__shaderPassNames_e__FixedBuffer shaderPassNames; // 0xF0
		::UnityEngine::Rendering::PerObjectData m_PerObjectData; // 0x130
		::UnityEngine::Rendering::DrawRendererFlags m_Flags; // 0x134
		::System::Int32 m_OverrideMaterialInstanceId; // 0x138
		::System::Int32 m_OverrideMaterialPassIndex; // 0x13C
		::System::Int32 m_MainLightIndex; // 0x140
		::System::Int32 m_UseSrpBatcher; // 0x144

		/*
		::System::Void _ctor(::UnityEngine::Rendering::ShaderTagId shaderPassName, ::UnityEngine::Rendering::SortingSettings sortingSettings)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ShaderTagId, ::UnityEngine::Rendering::SortingSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS__CTOR_OFFSET))(this, shaderPassName, sortingSettings);
		}
		*/

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS__CCTOR_OFFSET))();
		}

		::UnityEngine::Rendering::PerObjectData get_perObjectData()
		{
			return ((::UnityEngine::Rendering::PerObjectData(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS_GET_PEROBJECTDATA_OFFSET))(this);
		}

		::System::Void set_perObjectData(::UnityEngine::Rendering::PerObjectData value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::PerObjectData))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS_SET_PEROBJECTDATA_OFFSET))(this, value);
		}

		::System::Void set_enableDynamicBatching(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS_SET_ENABLEDYNAMICBATCHING_OFFSET))(this, value);
		}

		::System::Void set_enableInstancing(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS_SET_ENABLEINSTANCING_OFFSET))(this, value);
		}

		::System::Void set_overrideMaterial(::UnityEngine::Material* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS_SET_OVERRIDEMATERIAL_OFFSET))(this, value);
		}

		::System::Void set_overrideMaterialPassIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS_SET_OVERRIDEMATERIALPASSINDEX_OFFSET))(this, value);
		}

		/*
		::UnityEngine::Rendering::ShaderTagId GetShaderPassName(::System::Int32 index)
		{
			return ((::UnityEngine::Rendering::ShaderTagId(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS_GETSHADERPASSNAME_OFFSET))(this, index);
		}
		*/

		/*
		::System::Void SetShaderPassName(::System::Int32 index, ::UnityEngine::Rendering::ShaderTagId shaderPassName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::ShaderTagId))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS_SETSHADERPASSNAME_OFFSET))(this, index, shaderPassName);
		}
		*/

		::System::Boolean Equals(::UnityEngine::Rendering::DrawingSettings other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::DrawingSettings))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DRAWINGSETTINGS_GETHASHCODE_OFFSET))(this);
		}
	};
}
