#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_SPHERICALHARMONICSL2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3C02290)
#define UNITYENGINE_RENDERING_SPHERICALHARMONICSL2_EQUALS_OFFSET UNITYSDK_OFFSET(0x3C021E0)
#define UNITYENGINE_RENDERING_SPHERICALHARMONICSL2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3C021D0)
#define UNITYENGINE_RENDERING_SPHERICALHARMONICSL2_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1DCD6740)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SphericalHarmonicsL2_TypeDefinitionIndex = 4729;

	struct alignas(4) SphericalHarmonicsL2
	{
		::System::Single shr0; // 0x10
		::System::Single shr1; // 0x14
		::System::Single shr2; // 0x18
		::System::Single shr3; // 0x1C
		::System::Single shr4; // 0x20
		::System::Single shr5; // 0x24
		::System::Single shr6; // 0x28
		::System::Single shr7; // 0x2C
		::System::Single shr8; // 0x30
		::System::Single shg0; // 0x34
		::System::Single shg1; // 0x38
		::System::Single shg2; // 0x3C
		::System::Single shg3; // 0x40
		::System::Single shg4; // 0x44
		::System::Single shg5; // 0x48
		::System::Single shg6; // 0x4C
		::System::Single shg7; // 0x50
		::System::Single shg8; // 0x54
		::System::Single shb0; // 0x58
		::System::Single shb1; // 0x5C
		::System::Single shb2; // 0x60
		::System::Single shb3; // 0x64
		::System::Single shb4; // 0x68
		::System::Single shb5; // 0x6C
		::System::Single shb6; // 0x70
		::System::Single shb7; // 0x74
		::System::Single shb8; // 0x78

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPHERICALHARMONICSL2_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPHERICALHARMONICSL2_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::UnityEngine::Rendering::SphericalHarmonicsL2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::SphericalHarmonicsL2))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPHERICALHARMONICSL2_EQUALS_1_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Rendering::SphericalHarmonicsL2 a1, ::UnityEngine::Rendering::SphericalHarmonicsL2 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::SphericalHarmonicsL2, ::UnityEngine::Rendering::SphericalHarmonicsL2))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPHERICALHARMONICSL2_OP_EQUALITY_OFFSET))(a1, a2);
		}
	};
}
