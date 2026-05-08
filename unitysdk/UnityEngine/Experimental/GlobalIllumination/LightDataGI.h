#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Experimental/GlobalIllumination/FalloffType.h"
#include "unitysdk/UnityEngine/Experimental/GlobalIllumination/LightMode.h"
#include "unitysdk/UnityEngine/Experimental/GlobalIllumination/LightType.h"
#include "unitysdk/UnityEngine/Experimental/GlobalIllumination/LinearColor.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTDATAGI_INITNOBAKE_OFFSET UNITYSDK_OFFSET(0x9626D0)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTDATAGI_INIT_1_OFFSET UNITYSDK_OFFSET(0x962520)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTDATAGI_INIT_2_OFFSET UNITYSDK_OFFSET(0x962590)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTDATAGI_INIT_3_OFFSET UNITYSDK_OFFSET(0x962600)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTDATAGI_INIT_4_OFFSET UNITYSDK_OFFSET(0x962660)
#define UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTDATAGI_INIT_OFFSET UNITYSDK_OFFSET(0x962450)

namespace UnityEngine::Experimental::GlobalIllumination
{
	inline static constexpr unsigned int LightDataGI_TypeDefinitionIndex = 6291;

	struct alignas(4) LightDataGI
	{
		::System::Int32 instanceID; // 0x10
		::UnityEngine::Experimental::GlobalIllumination::LinearColor color; // 0x14
		::UnityEngine::Experimental::GlobalIllumination::LinearColor indirectColor; // 0x24
		::UnityEngine::Quaternion orientation; // 0x34
		::UnityEngine::Vector3 position; // 0x44
		::System::Single range; // 0x50
		::System::Single coneAngle; // 0x54
		::System::Single innerConeAngle; // 0x58
		::System::Single shape0; // 0x5C
		::System::Single shape1; // 0x60
		::UnityEngine::Experimental::GlobalIllumination::LightType type; // 0x64
		::UnityEngine::Experimental::GlobalIllumination::LightMode mode; // 0x65
		::System::Byte shadow; // 0x66
		::UnityEngine::Experimental::GlobalIllumination::FalloffType falloff; // 0x67

		/*
		::System::Void Init(::UnityEngine::Experimental::GlobalIllumination::DirectionalLight& light)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::GlobalIllumination::DirectionalLight&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTDATAGI_INIT_OFFSET))(this, light);
		}
		*/

		/*
		::System::Void Init_1(::UnityEngine::Experimental::GlobalIllumination::PointLight& light)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::GlobalIllumination::PointLight&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTDATAGI_INIT_1_OFFSET))(this, light);
		}
		*/

		/*
		::System::Void Init_2(::UnityEngine::Experimental::GlobalIllumination::SpotLight& light)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::GlobalIllumination::SpotLight&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTDATAGI_INIT_2_OFFSET))(this, light);
		}
		*/

		/*
		::System::Void Init_3(::UnityEngine::Experimental::GlobalIllumination::RectangleLight& light)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::GlobalIllumination::RectangleLight&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTDATAGI_INIT_3_OFFSET))(this, light);
		}
		*/

		/*
		::System::Void Init_4(::UnityEngine::Experimental::GlobalIllumination::DiscLight& light)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Experimental::GlobalIllumination::DiscLight&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTDATAGI_INIT_4_OFFSET))(this, light);
		}
		*/

		::System::Void InitNoBake(::System::Int32 lightInstanceID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_GLOBALILLUMINATION_LIGHTDATAGI_INITNOBAKE_OFFSET))(this, lightInstanceID);
		}
	};
}
