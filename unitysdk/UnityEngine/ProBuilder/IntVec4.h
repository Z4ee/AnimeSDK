#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_PROBUILDER_INTVEC4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3BAE780)
#define UNITYENGINE_PROBUILDER_INTVEC4_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x3BAE7A0)
#define UNITYENGINE_PROBUILDER_INTVEC4_EQUALS_OFFSET UNITYSDK_OFFSET(0x3BAE760)
#define UNITYENGINE_PROBUILDER_INTVEC4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3BAE840)
#define UNITYENGINE_PROBUILDER_INTVEC4_GET_W_OFFSET UNITYSDK_OFFSET(0xD510)
#define UNITYENGINE_PROBUILDER_INTVEC4_GET_X_OFFSET UNITYSDK_OFFSET(0xD4B0)
#define UNITYENGINE_PROBUILDER_INTVEC4_GET_Y_OFFSET UNITYSDK_OFFSET(0xD4D0)
#define UNITYENGINE_PROBUILDER_INTVEC4_GET_Z_OFFSET UNITYSDK_OFFSET(0xD4F0)
#define UNITYENGINE_PROBUILDER_INTVEC4_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1EB1FA70)
#define UNITYENGINE_PROBUILDER_INTVEC4_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1EB20A60)
#define UNITYENGINE_PROBUILDER_INTVEC4_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1EB20A50)
#define UNITYENGINE_PROBUILDER_INTVEC4_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1EB20120)
#define UNITYENGINE_PROBUILDER_INTVEC4_ROUND_OFFSET UNITYSDK_OFFSET(0x1EB20150)
#define UNITYENGINE_PROBUILDER_INTVEC4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3BAE750)
#define UNITYENGINE_PROBUILDER_INTVEC4__CTOR_OFFSET UNITYSDK_OFFSET(0x2E50B00)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int IntVec4_TypeDefinitionIndex = 43174;

	struct alignas(4) IntVec4
	{
		::UnityEngine::Vector4 value; // 0x10

		::System::Void _ctor(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC4__CTOR_OFFSET))(this, a1);
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

		static ::System::Boolean op_Equality(::UnityEngine::ProBuilder::IntVec4 a1, ::UnityEngine::ProBuilder::IntVec4 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::IntVec4, ::UnityEngine::ProBuilder::IntVec4))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC4_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::ProBuilder::IntVec4 a1, ::UnityEngine::ProBuilder::IntVec4 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::IntVec4, ::UnityEngine::ProBuilder::IntVec4))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC4_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals(::UnityEngine::ProBuilder::IntVec4 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::IntVec4))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC4_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::UnityEngine::Vector4 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC4_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals_2(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC4_EQUALS_2_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC4_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Int32 round(::System::Single a1)
		{
			return ((::System::Int32(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC4_ROUND_OFFSET))(a1);
		}

		static ::UnityEngine::Vector4 op_Implicit(::UnityEngine::ProBuilder::IntVec4 a1)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::ProBuilder::IntVec4))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC4_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::UnityEngine::ProBuilder::IntVec4 op_Implicit_1(::UnityEngine::Vector4 a1)
		{
			return ((::UnityEngine::ProBuilder::IntVec4(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_INTVEC4_OP_IMPLICIT_1_OFFSET))(a1);
		}
	};
}
