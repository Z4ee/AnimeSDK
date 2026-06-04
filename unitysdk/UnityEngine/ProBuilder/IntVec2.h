#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_PROBUILDER_INTVEC2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3876130)
#define UNITYENGINE_PROBUILDER_INTVEC2_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x3876480)
#define UNITYENGINE_PROBUILDER_INTVEC2_EQUALS_OFFSET UNITYSDK_OFFSET(0x3876130)
#define UNITYENGINE_PROBUILDER_INTVEC2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3876490)
#define UNITYENGINE_PROBUILDER_INTVEC2_GET_X_OFFSET UNITYSDK_OFFSET(0xD4D0)
#define UNITYENGINE_PROBUILDER_INTVEC2_GET_Y_OFFSET UNITYSDK_OFFSET(0xD4F0)
#define UNITYENGINE_PROBUILDER_INTVEC2_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B0A8D40)
#define UNITYENGINE_PROBUILDER_INTVEC2_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1B0AA300)
#define UNITYENGINE_PROBUILDER_INTVEC2_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B0AA2F0)
#define UNITYENGINE_PROBUILDER_INTVEC2_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B0A93E0)
#define UNITYENGINE_PROBUILDER_INTVEC2_ROUND_OFFSET UNITYSDK_OFFSET(0x1B0A9740)
#define UNITYENGINE_PROBUILDER_INTVEC2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3876080)
#define UNITYENGINE_PROBUILDER_INTVEC2__CTOR_OFFSET UNITYSDK_OFFSET(0xC630)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int IntVec2_TypeDefinitionIndex = 40746;

	struct alignas(4) IntVec2
	{
		::UnityEngine::Vector2 value; // 0x10

		::System::Void _ctor(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC2__CTOR_OFFSET))(this, a1);
		}

		::System::Single get_x()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC2_GET_X_OFFSET))(this);
		}

		::System::Single get_y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC2_GET_Y_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC2_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::ProBuilder::IntVec2 a1, ::UnityEngine::ProBuilder::IntVec2 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::IntVec2, ::UnityEngine::ProBuilder::IntVec2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC2_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::ProBuilder::IntVec2 a1, ::UnityEngine::ProBuilder::IntVec2 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::IntVec2, ::UnityEngine::ProBuilder::IntVec2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC2_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::UnityEngine::ProBuilder::IntVec2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::IntVec2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC2_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::UnityEngine::Vector2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC2_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals_2(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC2_EQUALS_2_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC2_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Int32 round(::System::Single a1)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC2_ROUND_OFFSET))(a1);
		}

		static ::UnityEngine::Vector2 op_Implicit(::UnityEngine::ProBuilder::IntVec2 a1)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::ProBuilder::IntVec2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC2_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::UnityEngine::ProBuilder::IntVec2 op_Implicit_1(::UnityEngine::Vector2 a1)
		{
			return ((::UnityEngine::ProBuilder::IntVec2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC2_OP_IMPLICIT_1_OFFSET))(a1);
		}
	};
}
