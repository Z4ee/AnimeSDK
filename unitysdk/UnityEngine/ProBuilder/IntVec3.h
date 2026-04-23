#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_PROBUILDER_INTVEC3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x22DA960)
#define UNITYENGINE_PROBUILDER_INTVEC3_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x22DAE50)
#define UNITYENGINE_PROBUILDER_INTVEC3_EQUALS_OFFSET UNITYSDK_OFFSET(0x22DA960)
#define UNITYENGINE_PROBUILDER_INTVEC3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22DAE60)
#define UNITYENGINE_PROBUILDER_INTVEC3_GET_X_OFFSET UNITYSDK_OFFSET(0xCC50)
#define UNITYENGINE_PROBUILDER_INTVEC3_GET_Y_OFFSET UNITYSDK_OFFSET(0xCC70)
#define UNITYENGINE_PROBUILDER_INTVEC3_GET_Z_OFFSET UNITYSDK_OFFSET(0xCC90)
#define UNITYENGINE_PROBUILDER_INTVEC3_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1A2463F0)
#define UNITYENGINE_PROBUILDER_INTVEC3_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1A2483E0)
#define UNITYENGINE_PROBUILDER_INTVEC3_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1A2483D0)
#define UNITYENGINE_PROBUILDER_INTVEC3_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1A246DD0)
#define UNITYENGINE_PROBUILDER_INTVEC3_ROUND_OFFSET UNITYSDK_OFFSET(0x1A2472D0)
#define UNITYENGINE_PROBUILDER_INTVEC3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22DA950)
#define UNITYENGINE_PROBUILDER_INTVEC3__CTOR_OFFSET UNITYSDK_OFFSET(0xDE0E0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int IntVec3_TypeDefinitionIndex = 39920;

	struct alignas(4) IntVec3
	{
		::UnityEngine::Vector3 value; // 0x10

		::System::Void _ctor(::UnityEngine::Vector3 vector)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC3__CTOR_OFFSET))(this, vector);
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

		static ::System::Boolean op_Equality(::UnityEngine::ProBuilder::IntVec3 a, ::UnityEngine::ProBuilder::IntVec3 b)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::IntVec3, ::UnityEngine::ProBuilder::IntVec3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC3_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::ProBuilder::IntVec3 a, ::UnityEngine::ProBuilder::IntVec3 b)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::IntVec3, ::UnityEngine::ProBuilder::IntVec3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC3_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::Boolean Equals(::UnityEngine::ProBuilder::IntVec3 p)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::IntVec3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC3_EQUALS_OFFSET))(this, p);
		}

		::System::Boolean Equals_1(::UnityEngine::Vector3 p)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC3_EQUALS_1_OFFSET))(this, p);
		}

		::System::Boolean Equals_2(::System::Object* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC3_EQUALS_2_OFFSET))(this, b);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC3_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Int32 round(::System::Single v)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC3_ROUND_OFFSET))(v);
		}

		static ::UnityEngine::Vector3 op_Implicit(::UnityEngine::ProBuilder::IntVec3 p)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::ProBuilder::IntVec3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC3_OP_IMPLICIT_OFFSET))(p);
		}

		static ::UnityEngine::ProBuilder::IntVec3 op_Implicit_1(::UnityEngine::Vector3 p)
		{
			return ((::UnityEngine::ProBuilder::IntVec3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC3_OP_IMPLICIT_1_OFFSET))(p);
		}
	};
}
