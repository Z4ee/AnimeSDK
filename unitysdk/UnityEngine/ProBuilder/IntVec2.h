#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_PROBUILDER_INTVEC2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x22DA530)
#define UNITYENGINE_PROBUILDER_INTVEC2_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x22DA880)
#define UNITYENGINE_PROBUILDER_INTVEC2_EQUALS_OFFSET UNITYSDK_OFFSET(0x22DA530)
#define UNITYENGINE_PROBUILDER_INTVEC2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x22DA890)
#define UNITYENGINE_PROBUILDER_INTVEC2_GET_X_OFFSET UNITYSDK_OFFSET(0xCC50)
#define UNITYENGINE_PROBUILDER_INTVEC2_GET_Y_OFFSET UNITYSDK_OFFSET(0xCC70)
#define UNITYENGINE_PROBUILDER_INTVEC2_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1A244CE0)
#define UNITYENGINE_PROBUILDER_INTVEC2_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1A2462D0)
#define UNITYENGINE_PROBUILDER_INTVEC2_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1A2462C0)
#define UNITYENGINE_PROBUILDER_INTVEC2_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1A245380)
#define UNITYENGINE_PROBUILDER_INTVEC2_ROUND_OFFSET UNITYSDK_OFFSET(0x1A2456E0)
#define UNITYENGINE_PROBUILDER_INTVEC2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x22DA480)
#define UNITYENGINE_PROBUILDER_INTVEC2__CTOR_OFFSET UNITYSDK_OFFSET(0xBDC0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int IntVec2_TypeDefinitionIndex = 39919;

	struct alignas(4) IntVec2
	{
		::UnityEngine::Vector2 value; // 0x10

		::System::Void _ctor(::UnityEngine::Vector2 vector)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC2__CTOR_OFFSET))(this, vector);
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

		static ::System::Boolean op_Equality(::UnityEngine::ProBuilder::IntVec2 a, ::UnityEngine::ProBuilder::IntVec2 b)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::IntVec2, ::UnityEngine::ProBuilder::IntVec2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC2_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::ProBuilder::IntVec2 a, ::UnityEngine::ProBuilder::IntVec2 b)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::IntVec2, ::UnityEngine::ProBuilder::IntVec2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC2_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::Boolean Equals(::UnityEngine::ProBuilder::IntVec2 p)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::IntVec2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC2_EQUALS_OFFSET))(this, p);
		}

		::System::Boolean Equals_1(::UnityEngine::Vector2 p)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC2_EQUALS_1_OFFSET))(this, p);
		}

		::System::Boolean Equals_2(::System::Object* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC2_EQUALS_2_OFFSET))(this, b);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC2_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Int32 round(::System::Single v)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC2_ROUND_OFFSET))(v);
		}

		static ::UnityEngine::Vector2 op_Implicit(::UnityEngine::ProBuilder::IntVec2 p)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::ProBuilder::IntVec2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC2_OP_IMPLICIT_OFFSET))(p);
		}

		static ::UnityEngine::ProBuilder::IntVec2 op_Implicit_1(::UnityEngine::Vector2 p)
		{
			return ((::UnityEngine::ProBuilder::IntVec2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC2_OP_IMPLICIT_1_OFFSET))(p);
		}
	};
}
