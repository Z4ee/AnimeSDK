#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Wave.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Gradient; }
namespace UnityEngine::Rendering::Universal { class BasicWaves; }
namespace UnityEngine::Rendering::Universal { class FoamSettings; }

#define UNITYENGINE_RENDERING_UNIVERSAL_WATERSURFACEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCA73B0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int WaterSurfaceData_TypeDefinitionIndex = 27710;

	class WaterSurfaceData : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Single _waterMaxVisibility; // 0x18
		::UnityEngine::Gradient* _absorptionRamp; // 0x20
		::UnityEngine::Gradient* _scatterRamp; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::Wave>* _waves; // 0x30
		::System::Boolean _customWaves; // 0x38
		::System::Int32 randomSeed; // 0x3C
		::UnityEngine::Rendering::Universal::BasicWaves* _basicWaveSettings; // 0x40
		::UnityEngine::Rendering::Universal::FoamSettings* _foamSettings; // 0x48
		::System::Boolean _init; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WATERSURFACEDATA__CTOR_OFFSET))(this);
		}
	};
}
