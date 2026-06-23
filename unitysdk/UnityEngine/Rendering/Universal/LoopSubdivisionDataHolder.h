#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_LOOPSUBDIVISIONDATAHOLDER_APPLYSETTINGS_OFFSET UNITYSDK_OFFSET(0x1C14FC70)
#define UNITYENGINE_RENDERING_UNIVERSAL_LOOPSUBDIVISIONDATAHOLDER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1C14FC20)
#define UNITYENGINE_RENDERING_UNIVERSAL_LOOPSUBDIVISIONDATAHOLDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C14FEE0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LoopSubdivisionDataHolder_TypeDefinitionIndex = 26691;

	class LoopSubdivisionDataHolder : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean allowLoopSubdivision; // 0x18
		::System::Boolean skipAllAdaptiveStrategies; // 0x19
		::System::Boolean enableNormalConstraint; // 0x1A
		::System::Boolean enableBackFaceCulling; // 0x1B
		::System::Boolean enableFrontFaceCulling; // 0x1C
		::System::Boolean enableDistanceCulling; // 0x1D
		::System::Boolean enableVertexLengthCulling; // 0x1E
		::System::Single frontFaceCullingStart; // 0x20
		::System::Single frontFaceCullingEnd; // 0x24
		::System::Single frontFaceCullingTolerance; // 0x28
		::System::Single screenLengthCullingStart; // 0x2C
		::System::Single screenLengthCullingEnd; // 0x30
		::System::Single distanceCullingStart; // 0x34
		::System::Single distanceCullingEnd; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LOOPSUBDIVISIONDATAHOLDER__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LOOPSUBDIVISIONDATAHOLDER_ONENABLE_OFFSET))(this);
		}

		::System::Void ApplySettings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_LOOPSUBDIVISIONDATAHOLDER_APPLYSETTINGS_OFFSET))(this);
		}
	};
}
