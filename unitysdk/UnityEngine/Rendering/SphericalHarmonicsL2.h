#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define UNITYENGINE_RENDERING_SPHERICALHARMONICSL2_ADDAMBIENTLIGHT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D8570A0)
#define UNITYENGINE_RENDERING_SPHERICALHARMONICSL2_ADDAMBIENTLIGHT_OFFSET UNITYSDK_OFFSET(0xA10CB0)
#define UNITYENGINE_RENDERING_SPHERICALHARMONICSL2_ADDDIRECTIONALLIGHTINTERNAL_INJECTED_OFFSET UNITYSDK_OFFSET(0x1D857100)
#define UNITYENGINE_RENDERING_SPHERICALHARMONICSL2_ADDDIRECTIONALLIGHTINTERNAL_OFFSET UNITYSDK_OFFSET(0x1D8570F0)
#define UNITYENGINE_RENDERING_SPHERICALHARMONICSL2_ADDDIRECTIONALLIGHT_OFFSET UNITYSDK_OFFSET(0xA10CE0)
#define UNITYENGINE_RENDERING_SPHERICALHARMONICSL2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA10E00)
#define UNITYENGINE_RENDERING_SPHERICALHARMONICSL2_EQUALS_OFFSET UNITYSDK_OFFSET(0xA10D50)
#define UNITYENGINE_RENDERING_SPHERICALHARMONICSL2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA10D40)
#define UNITYENGINE_RENDERING_SPHERICALHARMONICSL2_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA10D30)
#define UNITYENGINE_RENDERING_SPHERICALHARMONICSL2_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1D857A70)
#define UNITYENGINE_RENDERING_SPHERICALHARMONICSL2_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1D857810)
#define UNITYENGINE_RENDERING_SPHERICALHARMONICSL2_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1D857A00)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SphericalHarmonicsL2_TypeDefinitionIndex = 6204;

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

		/*
		::System::Void AddAmbientLight(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPHERICALHARMONICSL2_ADDAMBIENTLIGHT_OFFSET))(this, color);
		}
		*/

		/*
		::System::Void AddDirectionalLight(::UnityEngine::Vector3 direction, ::UnityEngine::Color color, ::System::Single intensity)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPHERICALHARMONICSL2_ADDDIRECTIONALLIGHT_OFFSET))(this, direction, color, intensity);
		}
		*/

		/*
		static ::System::Void AddDirectionalLightInternal(::UnityEngine::Rendering::SphericalHarmonicsL2& sh, ::UnityEngine::Vector3 direction, ::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::SphericalHarmonicsL2&, ::UnityEngine::Vector3, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPHERICALHARMONICSL2_ADDDIRECTIONALLIGHTINTERNAL_OFFSET))(sh, direction, color);
		}
		*/

		::System::Single get_Item(::System::Int32 rgb, ::System::Int32 coefficient)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPHERICALHARMONICSL2_GET_ITEM_OFFSET))(this, rgb, coefficient);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPHERICALHARMONICSL2_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPHERICALHARMONICSL2_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::UnityEngine::Rendering::SphericalHarmonicsL2 other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::SphericalHarmonicsL2))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPHERICALHARMONICSL2_EQUALS_1_OFFSET))(this, other);
		}

		static ::UnityEngine::Rendering::SphericalHarmonicsL2 op_Multiply(::UnityEngine::Rendering::SphericalHarmonicsL2 lhs, ::System::Single rhs)
		{
			return ((::UnityEngine::Rendering::SphericalHarmonicsL2(*)(::UnityEngine::Rendering::SphericalHarmonicsL2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPHERICALHARMONICSL2_OP_MULTIPLY_OFFSET))(lhs, rhs);
		}

		static ::UnityEngine::Rendering::SphericalHarmonicsL2 op_Addition(::UnityEngine::Rendering::SphericalHarmonicsL2 lhs, ::UnityEngine::Rendering::SphericalHarmonicsL2 rhs)
		{
			return ((::UnityEngine::Rendering::SphericalHarmonicsL2(*)(::UnityEngine::Rendering::SphericalHarmonicsL2, ::UnityEngine::Rendering::SphericalHarmonicsL2))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPHERICALHARMONICSL2_OP_ADDITION_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Equality(::UnityEngine::Rendering::SphericalHarmonicsL2 lhs, ::UnityEngine::Rendering::SphericalHarmonicsL2 rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::SphericalHarmonicsL2, ::UnityEngine::Rendering::SphericalHarmonicsL2))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPHERICALHARMONICSL2_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		/*
		static ::System::Void AddAmbientLight_Injected(::UnityEngine::Rendering::SphericalHarmonicsL2& _unity_self, ::UnityEngine::Color& color)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::SphericalHarmonicsL2&, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPHERICALHARMONICSL2_ADDAMBIENTLIGHT_INJECTED_OFFSET))(_unity_self, color);
		}
		*/

		/*
		static ::System::Void AddDirectionalLightInternal_Injected(::UnityEngine::Rendering::SphericalHarmonicsL2& sh, ::UnityEngine::Vector3& direction, ::UnityEngine::Color& color)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::SphericalHarmonicsL2&, ::UnityEngine::Vector3&, ::UnityEngine::Color&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_SPHERICALHARMONICSL2_ADDDIRECTIONALLIGHTINTERNAL_INJECTED_OFFSET))(sh, direction, color);
		}
		*/
	};
}
