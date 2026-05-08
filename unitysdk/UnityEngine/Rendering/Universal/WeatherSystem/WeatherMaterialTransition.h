#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/WeatherSystem/WeatherTransitionBaseMono.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine::Rendering::Universal::WeatherSystem { class WeatherMaterialTransitionData; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERMATERIALTRANSITION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19AD5500)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERMATERIALTRANSITION_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19AD5310)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERMATERIALTRANSITION_UPDATETRANSITION_OFFSET UNITYSDK_OFFSET(0x19AD5550)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERMATERIALTRANSITION__CTOR_OFFSET UNITYSDK_OFFSET(0x19AD5CC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERMATERIALTRANSITION___BASE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19AD5DA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERMATERIALTRANSITION___BASE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19AD5DB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERMATERIALTRANSITION___BASE_UPDATETRANSITION_OFFSET UNITYSDK_OFFSET(0x19AD5DC0)

namespace UnityEngine::Rendering::Universal::WeatherSystem
{
	inline static constexpr unsigned int WeatherMaterialTransition_TypeDefinitionIndex = 30287;

	class WeatherMaterialTransition : public ::UnityEngine::Rendering::Universal::WeatherSystem::WeatherTransitionBaseMono
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::WeatherSystem::WeatherMaterialTransitionData*>* _weatherMaterialTransitionDatas; // 0x18
		::UnityEngine::MaterialPropertyBlock* _mpb; // 0x20
		::UnityEngine::Renderer* _renderer; // 0x28
		::UnityEngine::Material* _material; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERMATERIALTRANSITION__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERMATERIALTRANSITION_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERMATERIALTRANSITION_ONDISABLE_OFFSET))(this);
		}

		::System::Void UpdateTransition(::System::Single foggyIntensity, ::System::Single specialRedIntensity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERMATERIALTRANSITION_UPDATETRANSITION_OFFSET))(this, foggyIntensity, specialRedIntensity);
		}

		::System::Void __base_OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERMATERIALTRANSITION___BASE_ONDISABLE_OFFSET))(this);
		}

		::System::Void __base_OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERMATERIALTRANSITION___BASE_ONENABLE_OFFSET))(this);
		}

		::System::Void __base_UpdateTransition(::System::Single P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WEATHERSYSTEM_WEATHERMATERIALTRANSITION___BASE_UPDATETRANSITION_OFFSET))(this, P0, P1);
		}
	};
}
