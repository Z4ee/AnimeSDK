#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class WorldTwistOverrideConfig;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Renderer; }

#define WORLDTWISTPARAMETEROVERRIDE_MESHRENDERCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1ABAA4B0)
#define WORLDTWISTPARAMETEROVERRIDE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1ABAA920)
#define WORLDTWISTPARAMETEROVERRIDE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1ABAA8B0)
#define WORLDTWISTPARAMETEROVERRIDE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1ABAA990)
#define WORLDTWISTPARAMETEROVERRIDE_SETUPMATERIALPARAMS_OFFSET UNITYSDK_OFFSET(0x1ABAA600)
#define WORLDTWISTPARAMETEROVERRIDE_START_OFFSET UNITYSDK_OFFSET(0x1ABAA460)
#define WORLDTWISTPARAMETEROVERRIDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABAA9E0)

inline static constexpr unsigned int WorldTwistParameterOverride_TypeDefinitionIndex = 29532;

class WorldTwistParameterOverride : public ::UnityEngine::MonoBehaviour
{
public:
	::WorldTwistOverrideConfig* overrideConfig; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* meshRenderers; // 0x20
	::System::Single specificTwistIntensity; // 0x28
	::System::Single noiseSpecialWeight; // 0x2C
	::System::Int32 _WorldTwistSpecificIntensity; // 0x30
	::System::Int32 _WorldTwistNoiseWeight; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDTWISTPARAMETEROVERRIDE__CTOR_OFFSET))(this);
	}

	::System::Void Start()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDTWISTPARAMETEROVERRIDE_START_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDTWISTPARAMETEROVERRIDE_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnDestroy()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDTWISTPARAMETEROVERRIDE_ONDESTROY_OFFSET))(this);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDTWISTPARAMETEROVERRIDE_ONVALIDATE_OFFSET))(this);
	}

	::System::Void SetupMaterialParams()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDTWISTPARAMETEROVERRIDE_SETUPMATERIALPARAMS_OFFSET))(this);
	}

	::System::Void MeshRenderCollection()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + WORLDTWISTPARAMETEROVERRIDE_MESHRENDERCOLLECTION_OFFSET))(this);
	}
};
