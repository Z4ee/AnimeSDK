#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Rendering/AsyncGPUReadbackRequest.h"
#include "unitysdk/UnityEngine/Vector3.h"

class WeatherConfig;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture3D; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class OceanFloatObject; }

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPOCEANMANAGER_READBACK_OFFSET UNITYSDK_OFFSET(0x1AD13B00)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPOCEANMANAGER_SETOCEANPARAMS_OFFSET UNITYSDK_OFFSET(0x1AD10EC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPOCEANMANAGER_UPDATEOCEANFLOATOBJS_OFFSET UNITYSDK_OFFSET(0x1AD13BD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPOCEANMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AD15840)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapOceanManager_TypeDefinitionIndex = 29930;

	class NapOceanManager : public ::System::Object
	{
	public:
		static ::UnityEngine::ComputeBuffer** StaticGet_normalBuffer()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x23960);
		}
		static ::UnityEngine::Material** StaticGet_OceanMaterialNormal()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x23968);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_offsetBuffer()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x23970);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_inputPosBuffer()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x23978);
		}
		static ::UnityEngine::Material** StaticGet_OceanMaterialNear()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x23980);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_offsets()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x23988);
		}
		static ::System::String** StaticGet_FallBackOceanMeshPath_Far_Lod0()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x23990);
		}
		static ::System::String** StaticGet_FallBackOceanMeshPath_Far_Lod1()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x23998);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::OceanFloatObject*>** StaticGet_OceanFloatObjs()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::OceanFloatObject*>**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x239A0);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_outNormals()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x239A8);
		}
		static ::System::String** StaticGet_FallBackOceanMeshPath_Lod0()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x239B0);
		}
		static ::UnityEngine::Texture2D** StaticGet_CoastlineMap()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x239B8);
		}
		static ::UnityEngine::Material** StaticGet_OceanMaterialFar()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x239C0);
		}
		static ::System::String** StaticGet_FallBackOceanMeshPath_Lod1()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x239C8);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_inputPos()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x239D0);
		}
		static ::Il2CppArray<::UnityEngine::Quaternion>** StaticGet_inputRot()
		{
			return (::Il2CppArray<::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x239D8);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_outOffsets()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x239E0);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_normals()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x239E8);
		}
		static ::UnityEngine::Texture3D** StaticGet_defaultTexture3D()
		{
			return (::UnityEngine::Texture3D**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x239F0);
		}
		static ::System::Int32* StaticGet__OceanReflectionCube()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x60B0);
		}
		static ::System::Int32* StaticGet__OceanShallowColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x60B4);
		}
		static ::System::Int32* StaticGet__CoastlineParam5()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x60B8);
		}
		static ::System::Int32* StaticGet__CoastlineParam4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x60BC);
		}
		static ::System::Single* StaticGet_OceanFrustumCullingFOVBias()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x60C0);
		}
		static ::System::Int32* StaticGet__CoastlineCausticsMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x60C4);
		}
		static ::System::Int32* StaticGet__OceanExtraVelocity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x60C8);
		}
		static ::System::Int32* StaticGet__OceanDetailNormalMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x60CC);
		}
		static ::System::Int32* StaticGet__CoastlineParam2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x60D0);
		}
		static ::System::Int32* StaticGet__CoastlineFoamMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x60D4);
		}
		static ::System::Int32* StaticGet__CoastlineParam3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x60D8);
		}
		static ::System::Int32* StaticGet__CoastlineParam7()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x60DC);
		}
		static ::System::Int32* StaticGet__OceanParamsC()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x60E0);
		}
		static ::System::Int32* StaticGet__CoastlineParam6()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x60E4);
		}
		static ::System::Int32* StaticGet__CoastlineParam9()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x60E8);
		}
		static ::System::Int32* StaticGet__CoastlineParam8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x60EC);
		}
		static ::System::Single* StaticGet_OceanDepthOffset()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x60F0);
		}
		static ::System::Int32* StaticGet__OceanParamsB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x60F4);
		}
		static ::UnityEngine::Vector3* StaticGet_OceanCenter()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x60F8);
		}
		static ::System::Int32* StaticGet__CoastlineParam1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x6104);
		}
		static ::System::Int32* StaticGet__OceanParamsA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x6108);
		}
		static ::System::Int32* StaticGet__InputPositions()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x610C);
		}
		static ::System::Int32* StaticGet__Normals()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x6110);
		}
		static ::System::Int32* StaticGet__CoastlineFoamColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x6114);
		}
		static ::System::Boolean* StaticGet_EnableOcean()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x6118);
		}
		static ::System::Boolean* StaticGet_EnableCoastlineWave()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x6119);
		}
		static ::System::Boolean* StaticGet_EnableStylizedFoam()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x611A);
		}
		static ::System::Int32* StaticGet__Offsets()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x611C);
		}
		static ::System::Int32* StaticGet_lastDisableOceanFrameCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x6120);
		}
		static ::System::Int32* StaticGet__CoastlineWaveProfileMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x6124);
		}
		static ::System::Int32* StaticGet__CoastlineMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x6128);
		}
		static ::System::Int32* StaticGet__OceanDisplacementNormalMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x612C);
		}
		static ::System::Int32* StaticGet__OceanDeepColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x6130);
		}
		static ::System::Int32* StaticGet__CoastlineParam10()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x6134);
		}
		static ::System::Int32* StaticGet__CoastlineParam0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x6138);
		}
		static ::System::Single* StaticGet_OceanMeshCullThreshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x613C);
		}
		static ::System::Int32* StaticGet__OceanDisplacementMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x6140);
		}
		static ::System::Int32* StaticGet__OceanScatteringColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x6144);
		}
		static ::System::Int32* StaticGet__OceanFoamNoiseTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x6148);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPOCEANMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void SetOceanParams(::UnityEngine::Rendering::CommandBuffer* cmd, ::WeatherConfig* weatherConfig, ::System::Boolean hasWeatherWetness)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::WeatherConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPOCEANMANAGER_SETOCEANPARAMS_OFFSET))(cmd, weatherConfig, hasWeatherWetness);
		}

		static ::System::Void ReadBack(::UnityEngine::Rendering::AsyncGPUReadbackRequest request)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPOCEANMANAGER_READBACK_OFFSET))(request);
		}

		static ::System::Void UpdateOceanFloatObjs(::UnityEngine::ComputeShader* getOceanDataCS, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::UnityEngine::ComputeShader*, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPOCEANMANAGER_UPDATEOCEANFLOATOBJS_OFFSET))(getOceanDataCS, cmd);
		}
	};
}
