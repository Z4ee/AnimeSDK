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

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPOCEANMANAGER_READBACK_OFFSET UNITYSDK_OFFSET(0x1C413220)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPOCEANMANAGER_SETOCEANPARAMS_OFFSET UNITYSDK_OFFSET(0x1C4104A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPOCEANMANAGER_UPDATEOCEANFLOATOBJS_OFFSET UNITYSDK_OFFSET(0x1C4132F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_NAPOCEANMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C414F70)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapOceanManager_TypeDefinitionIndex = 26789;

	class NapOceanManager : public ::System::Object
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_outNormals()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x21130);
		}
		static ::UnityEngine::Material** StaticGet_OceanMaterialFar()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x21138);
		}
		static ::System::String** StaticGet_FallBackOceanMeshPath_Lod1()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x21140);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_normals()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x21148);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_offsets()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x21150);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_offsetBuffer()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x21158);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::OceanFloatObject*>** StaticGet_OceanFloatObjs()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::OceanFloatObject*>**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x21160);
		}
		static ::UnityEngine::Material** StaticGet_OceanMaterialNear()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x21168);
		}
		static ::System::String** StaticGet_FallBackOceanMeshPath_Far_Lod1()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x21170);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_inputPos()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x21178);
		}
		static ::Il2CppArray<::UnityEngine::Quaternion>** StaticGet_inputRot()
		{
			return (::Il2CppArray<::UnityEngine::Quaternion>**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x21180);
		}
		static ::System::String** StaticGet_FallBackOceanMeshPath_Lod0()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x21188);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_normalBuffer()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x21190);
		}
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_outOffsets()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x21198);
		}
		static ::UnityEngine::Texture2D** StaticGet_CoastlineMap()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x211A0);
		}
		static ::System::String** StaticGet_FallBackOceanMeshPath_Far_Lod0()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x211A8);
		}
		static ::UnityEngine::Texture3D** StaticGet_defaultTexture3D()
		{
			return (::UnityEngine::Texture3D**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x211B0);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_inputPosBuffer()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x211B8);
		}
		static ::UnityEngine::Material** StaticGet_OceanMaterialNormal()
		{
			return (::UnityEngine::Material**)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x211C0);
		}
		static ::System::Int32* StaticGet__CoastlineParam7()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B90);
		}
		static ::System::Int32* StaticGet__OceanDetailNormalMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B94);
		}
		static ::UnityEngine::Vector3* StaticGet_OceanCenter()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5B98);
		}
		static ::System::Int32* StaticGet__CoastlineParam10()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5BA4);
		}
		static ::System::Int32* StaticGet__OceanScatteringColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5BA8);
		}
		static ::System::Int32* StaticGet__CoastlineParam3()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5BAC);
		}
		static ::System::Int32* StaticGet__CoastlineParam2()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5BB0);
		}
		static ::System::Int32* StaticGet__OceanDisplacementNormalMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5BB4);
		}
		static ::System::Int32* StaticGet__OceanDeepColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5BB8);
		}
		static ::System::Int32* StaticGet__OceanDisplacementMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5BBC);
		}
		static ::System::Int32* StaticGet__OceanParamsA()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5BC0);
		}
		static ::System::Int32* StaticGet__Offsets()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5BC4);
		}
		static ::System::Int32* StaticGet__OceanReflectionCube()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5BC8);
		}
		static ::System::Int32* StaticGet__CoastlineWaveProfileMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5BCC);
		}
		static ::System::Single* StaticGet_OceanFrustumCullingFOVBias()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5BD0);
		}
		static ::System::Boolean* StaticGet_EnableOcean()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5BD4);
		}
		static ::System::Boolean* StaticGet_EnableCoastlineWave()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5BD5);
		}
		static ::System::Boolean* StaticGet_EnableStylizedFoam()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5BD6);
		}
		static ::System::Int32* StaticGet__CoastlineFoamMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5BD8);
		}
		static ::System::Int32* StaticGet__CoastlineParam4()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5BDC);
		}
		static ::System::Int32* StaticGet__InputPositions()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5BE0);
		}
		static ::System::Int32* StaticGet__OceanShallowColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5BE4);
		}
		static ::System::Int32* StaticGet__OceanExtraVelocity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5BE8);
		}
		static ::System::Int32* StaticGet__OceanParamsB()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5BEC);
		}
		static ::System::Single* StaticGet_OceanMeshCullThreshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5BF0);
		}
		static ::System::Int32* StaticGet_lastDisableOceanFrameCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5BF4);
		}
		static ::System::Int32* StaticGet__CoastlineParam1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5BF8);
		}
		static ::System::Int32* StaticGet__ReflectionProbeIndex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5BFC);
		}
		static ::System::Int32* StaticGet__Normals()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5C00);
		}
		static ::System::Int32* StaticGet__CoastlineParam9()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5C04);
		}
		static ::System::Int32* StaticGet__OceanFoamNoiseTexture()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5C08);
		}
		static ::System::Int32* StaticGet__CoastlineParam5()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5C0C);
		}
		static ::System::Int32* StaticGet__CoastlineFoamColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5C10);
		}
		static ::System::Int32* StaticGet__OceanParamsC()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5C14);
		}
		static ::System::Int32* StaticGet__CoastlineCausticsMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5C18);
		}
		static ::System::Int32* StaticGet__CoastlineMap()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5C1C);
		}
		static ::System::Single* StaticGet_OceanDepthOffset()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5C20);
		}
		static ::System::Int32* StaticGet__CoastlineParam8()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5C24);
		}
		static ::System::Int32* StaticGet__CoastlineParam6()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5C28);
		}
		static ::System::Int32* StaticGet__UseCubemapArrayReflection()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5C2C);
		}
		static ::System::Int32* StaticGet__CoastlineParam0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NapOceanManager_TypeDefinitionIndex)->GetStaticField(0x5C30);
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
