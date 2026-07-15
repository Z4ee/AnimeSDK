#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/VLB/RenderingMode.h"

namespace System { class String; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class Shader; }
namespace UnityEngine { class TextAsset; }

#define VLB_CONFIG_GET_ACTUALRENDERINGMODE_OFFSET UNITYSDK_OFFSET(0x10535BD0)
#define VLB_CONFIG_GET_BEAMSHADER_OFFSET UNITYSDK_OFFSET(0x10538BC0)
#define VLB_CONFIG_GET_GLOBALNOISEPARAM_OFFSET UNITYSDK_OFFSET(0x10538BD0)
#define VLB_CONFIG_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x10535BC0)
#define VLB_CONFIG_GET_USESINGLEPASSSHADER_OFFSET UNITYSDK_OFFSET(0x10536140)
#define VLB_CONFIG_METHOD_3_C302CE84D96D179E_OFFSET UNITYSDK_OFFSET(0x10538BE0)
#define VLB_CONFIG_METHOD_3_F97007FB78F3F2C9_OFFSET UNITYSDK_OFFSET(0x10538DD0)
#define VLB_CONFIG_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10538D50)
#define VLB_CONFIG_SET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x10538E40)
#define VLB_CONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x10538E50)

namespace VLB
{
	inline static constexpr unsigned int Config_TypeDefinitionIndex = 47145;

	class Config : public ::UnityEngine::ScriptableObject
	{
	public:
		static ::VLB::Config** StaticGet_m_Instance()
		{
			return (::VLB::Config**)Il2CppClass::FromTypeDefinitionIndex(Config_TypeDefinitionIndex)->GetStaticField(0x6BE30);
		}
		::System::Boolean geometryOverrideLayer; // 0x18
		::System::Int32 geometryLayerID; // 0x1C
		::System::String* geometryTag; // 0x20
		::System::Int32 geometryRenderQueue; // 0x28
		::System::Boolean forceSinglePass; // 0x2C
		::VLB::RenderingMode renderingMode; // 0x30
		::UnityEngine::Shader* beamShader1Pass; // 0x38
		::UnityEngine::Shader* beamShader2Pass; // 0x40
		::System::Int32 sharedMeshSides; // 0x48
		::System::Int32 sharedMeshSegments; // 0x4C
		::System::Single globalNoiseScale; // 0x50
		::UnityEngine::Vector3 globalNoiseVelocity; // 0x54
		::UnityEngine::TextAsset* noise3DData; // 0x60
		::System::Int32 noise3DSize; // 0x68
		::UnityEngine::ParticleSystem* dustParticlesPrefab; // 0x70
		::System::Int32 pluginVersion; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_CONFIG__CTOR_OFFSET))(this);
		}

		::VLB::RenderingMode get_actualRenderingMode()
		{
			return ((::VLB::RenderingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_CONFIG_GET_ACTUALRENDERINGMODE_OFFSET))(this);
		}

		::System::Boolean get_useSinglePassShader()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_CONFIG_GET_USESINGLEPASSSHADER_OFFSET))(this);
		}

		::UnityEngine::Shader* get_beamShader()
		{
			return ((::UnityEngine::Shader*(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_CONFIG_GET_BEAMSHADER_OFFSET))(this);
		}

		::UnityEngine::Vector4 get_globalNoiseParam()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_CONFIG_GET_GLOBALNOISEPARAM_OFFSET))(this);
		}

		::UnityEngine::ParticleSystem* Method_3_C302CE84D96D179E()
		{
			return ((::UnityEngine::ParticleSystem*(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_CONFIG_METHOD_3_C302CE84D96D179E_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + VLB_CONFIG_ONENABLE_OFFSET))(this);
		}

		::System::Void Method_3_F97007FB78F3F2C9(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + VLB_CONFIG_METHOD_3_F97007FB78F3F2C9_OFFSET))(this, a1, a2);
		}

		static ::VLB::Config* get_Instance()
		{
			return ((::VLB::Config*(*)())((::PBYTE)hIl2Cpp + VLB_CONFIG_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void set_Instance(::VLB::Config* a1)
		{
			return ((::System::Void(*)(::VLB::Config*))((::PBYTE)hIl2Cpp + VLB_CONFIG_SET_INSTANCE_OFFSET))(a1);
		}
	};
}
