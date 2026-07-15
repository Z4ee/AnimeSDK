#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_PROBUILDER_INTVEC3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA4BED0)
#define UNITYENGINE_PROBUILDER_INTVEC3_EQUALS_2_OFFSET UNITYSDK_OFFSET(0xA4C3C0)
#define UNITYENGINE_PROBUILDER_INTVEC3_EQUALS_OFFSET UNITYSDK_OFFSET(0xA4BED0)
#define UNITYENGINE_PROBUILDER_INTVEC3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA4C3D0)
#define UNITYENGINE_PROBUILDER_INTVEC3_GET_X_OFFSET UNITYSDK_OFFSET(0x167F50)
#define UNITYENGINE_PROBUILDER_INTVEC3_GET_Y_OFFSET UNITYSDK_OFFSET(0x7A80F0)
#define UNITYENGINE_PROBUILDER_INTVEC3_GET_Z_OFFSET UNITYSDK_OFFSET(0xA4BEB0)
#define UNITYENGINE_PROBUILDER_INTVEC3_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0xC0911C0)
#define UNITYENGINE_PROBUILDER_INTVEC3_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0xC093170)
#define UNITYENGINE_PROBUILDER_INTVEC3_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0xC093160)
#define UNITYENGINE_PROBUILDER_INTVEC3_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0xC091BA0)
#define UNITYENGINE_PROBUILDER_INTVEC3_ROUND_OFFSET UNITYSDK_OFFSET(0xC0920A0)
#define UNITYENGINE_PROBUILDER_INTVEC3_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA4BEC0)
#define UNITYENGINE_PROBUILDER_INTVEC3__CTOR_OFFSET UNITYSDK_OFFSET(0x165690)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int IntVec3_TypeDefinitionIndex = 41562;

	struct alignas(4) IntVec3
	{
		::UnityEngine::Vector3 value; // 0x10

		::System::Void _ctor(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC3__CTOR_OFFSET))(this, a1);
		}

		::System::Single get_x()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC3_GET_X_OFFSET))(this);
		}

		::System::Single get_y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC3_GET_Y_OFFSET))(this);
		}

		::System::Single get_z()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC3_GET_Z_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC3_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::ProBuilder::IntVec3 a1, ::UnityEngine::ProBuilder::IntVec3 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::IntVec3, ::UnityEngine::ProBuilder::IntVec3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC3_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::ProBuilder::IntVec3 a1, ::UnityEngine::ProBuilder::IntVec3 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::IntVec3, ::UnityEngine::ProBuilder::IntVec3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC3_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::UnityEngine::ProBuilder::IntVec3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::IntVec3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC3_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC3_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals_2(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC3_EQUALS_2_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC3_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Int32 round(::System::Single a1)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC3_ROUND_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 op_Implicit(::UnityEngine::ProBuilder::IntVec3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::ProBuilder::IntVec3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC3_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::UnityEngine::ProBuilder::IntVec3 op_Implicit_1(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::ProBuilder::IntVec3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC3_OP_IMPLICIT_1_OFFSET))(a1);
		}
	};
}
