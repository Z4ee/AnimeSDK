#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_PROBUILDER_INTVEC4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x21083E0)
#define UNITYENGINE_PROBUILDER_INTVEC4_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x2108400)
#define UNITYENGINE_PROBUILDER_INTVEC4_EQUALS_OFFSET UNITYSDK_OFFSET(0x21083C0)
#define UNITYENGINE_PROBUILDER_INTVEC4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x21084A0)
#define UNITYENGINE_PROBUILDER_INTVEC4_GET_W_OFFSET UNITYSDK_OFFSET(0xCCC0)
#define UNITYENGINE_PROBUILDER_INTVEC4_GET_X_OFFSET UNITYSDK_OFFSET(0xCC60)
#define UNITYENGINE_PROBUILDER_INTVEC4_GET_Y_OFFSET UNITYSDK_OFFSET(0xCC80)
#define UNITYENGINE_PROBUILDER_INTVEC4_GET_Z_OFFSET UNITYSDK_OFFSET(0xCCA0)
#define UNITYENGINE_PROBUILDER_INTVEC4_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1880E660)
#define UNITYENGINE_PROBUILDER_INTVEC4_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1880F6B0)
#define UNITYENGINE_PROBUILDER_INTVEC4_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1880F6A0)
#define UNITYENGINE_PROBUILDER_INTVEC4_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1880ED10)
#define UNITYENGINE_PROBUILDER_INTVEC4_ROUND_OFFSET UNITYSDK_OFFSET(0x1880ED40)
#define UNITYENGINE_PROBUILDER_INTVEC4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x21083B0)
#define UNITYENGINE_PROBUILDER_INTVEC4__CTOR_OFFSET UNITYSDK_OFFSET(0x152D780)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int IntVec4_TypeDefinitionIndex = 34102;

	struct alignas(4) IntVec4
	{
		::UnityEngine::Vector4 value; // 0x10

		::System::Void _ctor(::UnityEngine::Vector4 vector)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC4__CTOR_OFFSET))(this, vector);
		}

		::System::Single get_x()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC4_GET_X_OFFSET))(this);
		}

		::System::Single get_y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC4_GET_Y_OFFSET))(this);
		}

		::System::Single get_z()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC4_GET_Z_OFFSET))(this);
		}

		::System::Single get_w()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC4_GET_W_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC4_TOSTRING_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::ProBuilder::IntVec4 a, ::UnityEngine::ProBuilder::IntVec4 b)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::IntVec4, ::UnityEngine::ProBuilder::IntVec4))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC4_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::ProBuilder::IntVec4 a, ::UnityEngine::ProBuilder::IntVec4 b)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::IntVec4, ::UnityEngine::ProBuilder::IntVec4))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC4_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::Boolean Equals(::UnityEngine::ProBuilder::IntVec4 p)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::IntVec4))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC4_EQUALS_OFFSET))(this, p);
		}

		::System::Boolean Equals_1(::UnityEngine::Vector4 p)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC4_EQUALS_1_OFFSET))(this, p);
		}

		::System::Boolean Equals_2(::System::Object* b)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC4_EQUALS_2_OFFSET))(this, b);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC4_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Int32 round(::System::Single v)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC4_ROUND_OFFSET))(v);
		}

		static ::UnityEngine::Vector4 op_Implicit(::UnityEngine::ProBuilder::IntVec4 p)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::ProBuilder::IntVec4))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC4_OP_IMPLICIT_OFFSET))(p);
		}

		static ::UnityEngine::ProBuilder::IntVec4 op_Implicit_1(::UnityEngine::Vector4 p)
		{
			return ((::UnityEngine::ProBuilder::IntVec4(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC4_OP_IMPLICIT_1_OFFSET))(p);
		}
	};
}
