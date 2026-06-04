#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Object; }

#define UNITYENGINE_PROBUILDER_NORMAL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3876FA0)
#define UNITYENGINE_PROBUILDER_NORMAL_EQUALS_OFFSET UNITYSDK_OFFSET(0x3876D10)
#define UNITYENGINE_PROBUILDER_NORMAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3876D20)
#define UNITYENGINE_PROBUILDER_NORMAL_GET_BITANGENT_OFFSET UNITYSDK_OFFSET(0x2BBF6D0)
#define UNITYENGINE_PROBUILDER_NORMAL_GET_NORMAL_OFFSET UNITYSDK_OFFSET(0x25350)
#define UNITYENGINE_PROBUILDER_NORMAL_GET_TANGENT_OFFSET UNITYSDK_OFFSET(0x38442A0)
#define UNITYENGINE_PROBUILDER_NORMAL_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B10AD90)
#define UNITYENGINE_PROBUILDER_NORMAL_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B10AE70)
#define UNITYENGINE_PROBUILDER_NORMAL_SET_BITANGENT_OFFSET UNITYSDK_OFFSET(0x3876D00)
#define UNITYENGINE_PROBUILDER_NORMAL_SET_NORMAL_OFFSET UNITYSDK_OFFSET(0x1F70430)
#define UNITYENGINE_PROBUILDER_NORMAL_SET_TANGENT_OFFSET UNITYSDK_OFFSET(0x3876CF0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Normal_TypeDefinitionIndex = 40761;

	struct alignas(4) Normal
	{
		::UnityEngine::Vector3 _normal_k__BackingField; // 0x10
		::UnityEngine::Vector4 _tangent_k__BackingField; // 0x1C
		::UnityEngine::Vector3 _bitangent_k__BackingField; // 0x2C

		::UnityEngine::Vector3 get_normal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_NORMAL_GET_NORMAL_OFFSET))(this);
		}

		::System::Void set_normal(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_NORMAL_SET_NORMAL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 get_tangent()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_NORMAL_GET_TANGENT_OFFSET))(this);
		}

		::System::Void set_tangent(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_NORMAL_SET_TANGENT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_bitangent()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_NORMAL_GET_BITANGENT_OFFSET))(this);
		}

		::System::Void set_bitangent(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_NORMAL_SET_BITANGENT_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_NORMAL_EQUALS_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_NORMAL_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals_1(::UnityEngine::ProBuilder::Normal a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Normal))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_NORMAL_EQUALS_1_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::UnityEngine::ProBuilder::Normal a1, ::UnityEngine::ProBuilder::Normal a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::Normal, ::UnityEngine::ProBuilder::Normal))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_NORMAL_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::ProBuilder::Normal a1, ::UnityEngine::ProBuilder::Normal a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::Normal, ::UnityEngine::ProBuilder::Normal))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_NORMAL_OP_INEQUALITY_OFFSET))(a1, a2);
		}
	};
}
