#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/ProBuilder/MeshArrays.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }

#define UNITYENGINE_PROBUILDER_VERTEX_ADD_1_OFFSET UNITYSDK_OFFSET(0x19247740)
#define UNITYENGINE_PROBUILDER_VERTEX_ADD_OFFSET UNITYSDK_OFFSET(0x192476D0)
#define UNITYENGINE_PROBUILDER_VERTEX_AVERAGE_OFFSET UNITYSDK_OFFSET(0x1924A210)
#define UNITYENGINE_PROBUILDER_VERTEX_DIVIDE_1_OFFSET UNITYSDK_OFFSET(0x19247E00)
#define UNITYENGINE_PROBUILDER_VERTEX_DIVIDE_OFFSET UNITYSDK_OFFSET(0x19247D40)
#define UNITYENGINE_PROBUILDER_VERTEX_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x19246C90)
#define UNITYENGINE_PROBUILDER_VERTEX_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x19246F60)
#define UNITYENGINE_PROBUILDER_VERTEX_EQUALS_OFFSET UNITYSDK_OFFSET(0x19246C30)
#define UNITYENGINE_PROBUILDER_VERTEX_GETARRAYS_1_OFFSET UNITYSDK_OFFSET(0x192486D0)
#define UNITYENGINE_PROBUILDER_VERTEX_GETARRAYS_OFFSET UNITYSDK_OFFSET(0x19248690)
#define UNITYENGINE_PROBUILDER_VERTEX_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x192472E0)
#define UNITYENGINE_PROBUILDER_VERTEX_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x19246BA0)
#define UNITYENGINE_PROBUILDER_VERTEX_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x19246A70)
#define UNITYENGINE_PROBUILDER_VERTEX_GET_HASCOLOR_OFFSET UNITYSDK_OFFSET(0x19246BC0)
#define UNITYENGINE_PROBUILDER_VERTEX_GET_HASNORMAL_OFFSET UNITYSDK_OFFSET(0x19246BD0)
#define UNITYENGINE_PROBUILDER_VERTEX_GET_HASPOSITION_OFFSET UNITYSDK_OFFSET(0x19246BB0)
#define UNITYENGINE_PROBUILDER_VERTEX_GET_HASTANGENT_OFFSET UNITYSDK_OFFSET(0x19246BE0)
#define UNITYENGINE_PROBUILDER_VERTEX_GET_HASUV0_OFFSET UNITYSDK_OFFSET(0x19246BF0)
#define UNITYENGINE_PROBUILDER_VERTEX_GET_HASUV2_OFFSET UNITYSDK_OFFSET(0x19246C00)
#define UNITYENGINE_PROBUILDER_VERTEX_GET_HASUV3_OFFSET UNITYSDK_OFFSET(0x19246C10)
#define UNITYENGINE_PROBUILDER_VERTEX_GET_HASUV4_OFFSET UNITYSDK_OFFSET(0x19246C20)
#define UNITYENGINE_PROBUILDER_VERTEX_GET_NORMAL_OFFSET UNITYSDK_OFFSET(0x19246AA0)
#define UNITYENGINE_PROBUILDER_VERTEX_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x19246A40)
#define UNITYENGINE_PROBUILDER_VERTEX_GET_TANGENT_OFFSET UNITYSDK_OFFSET(0x19246AE0)
#define UNITYENGINE_PROBUILDER_VERTEX_GET_UV0_OFFSET UNITYSDK_OFFSET(0x19246B10)
#define UNITYENGINE_PROBUILDER_VERTEX_GET_UV2_OFFSET UNITYSDK_OFFSET(0x19246B30)
#define UNITYENGINE_PROBUILDER_VERTEX_GET_UV3_OFFSET UNITYSDK_OFFSET(0x19246B50)
#define UNITYENGINE_PROBUILDER_VERTEX_GET_UV4_OFFSET UNITYSDK_OFFSET(0x19246B70)
#define UNITYENGINE_PROBUILDER_VERTEX_HASARRAYS_OFFSET UNITYSDK_OFFSET(0x19241FC0)
#define UNITYENGINE_PROBUILDER_VERTEX_MIX_OFFSET UNITYSDK_OFFSET(0x1924BA00)
#define UNITYENGINE_PROBUILDER_VERTEX_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x19247C20)
#define UNITYENGINE_PROBUILDER_VERTEX_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x19247B60)
#define UNITYENGINE_PROBUILDER_VERTEX_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x19247E60)
#define UNITYENGINE_PROBUILDER_VERTEX_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x19247660)
#define UNITYENGINE_PROBUILDER_VERTEX_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x19247C80)
#define UNITYENGINE_PROBUILDER_VERTEX_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x19247610)
#define UNITYENGINE_PROBUILDER_VERTEX_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x19247630)
#define UNITYENGINE_PROBUILDER_VERTEX_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x19247AA0)
#define UNITYENGINE_PROBUILDER_VERTEX_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x19247880)
#define UNITYENGINE_PROBUILDER_VERTEX_SETMESH_OFFSET UNITYSDK_OFFSET(0x19249830)
#define UNITYENGINE_PROBUILDER_VERTEX_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x19241FF0)
#define UNITYENGINE_PROBUILDER_VERTEX_SET_HASCOLOR_OFFSET UNITYSDK_OFFSET(0x19246A80)
#define UNITYENGINE_PROBUILDER_VERTEX_SET_HASNORMAL_OFFSET UNITYSDK_OFFSET(0x19246AC0)
#define UNITYENGINE_PROBUILDER_VERTEX_SET_HASPOSITION_OFFSET UNITYSDK_OFFSET(0x19246A60)
#define UNITYENGINE_PROBUILDER_VERTEX_SET_HASTANGENT_OFFSET UNITYSDK_OFFSET(0x19246AF0)
#define UNITYENGINE_PROBUILDER_VERTEX_SET_HASUV0_OFFSET UNITYSDK_OFFSET(0x19246B20)
#define UNITYENGINE_PROBUILDER_VERTEX_SET_HASUV2_OFFSET UNITYSDK_OFFSET(0x19246B40)
#define UNITYENGINE_PROBUILDER_VERTEX_SET_HASUV3_OFFSET UNITYSDK_OFFSET(0x19246B60)
#define UNITYENGINE_PROBUILDER_VERTEX_SET_HASUV4_OFFSET UNITYSDK_OFFSET(0x19246B80)
#define UNITYENGINE_PROBUILDER_VERTEX_SET_NORMAL_OFFSET UNITYSDK_OFFSET(0x19242000)
#define UNITYENGINE_PROBUILDER_VERTEX_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x19241FD0)
#define UNITYENGINE_PROBUILDER_VERTEX_SET_TANGENT_OFFSET UNITYSDK_OFFSET(0x19242020)
#define UNITYENGINE_PROBUILDER_VERTEX_SET_UV0_OFFSET UNITYSDK_OFFSET(0x19242030)
#define UNITYENGINE_PROBUILDER_VERTEX_SET_UV2_OFFSET UNITYSDK_OFFSET(0x19242040)
#define UNITYENGINE_PROBUILDER_VERTEX_SET_UV3_OFFSET UNITYSDK_OFFSET(0x19242050)
#define UNITYENGINE_PROBUILDER_VERTEX_SET_UV4_OFFSET UNITYSDK_OFFSET(0x19242060)
#define UNITYENGINE_PROBUILDER_VERTEX_SUBTRACT_1_OFFSET UNITYSDK_OFFSET(0x19247960)
#define UNITYENGINE_PROBUILDER_VERTEX_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x192478F0)
#define UNITYENGINE_PROBUILDER_VERTEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x192481C0)
#define UNITYENGINE_PROBUILDER_VERTEX__CTOR_1_OFFSET UNITYSDK_OFFSET(0x192474D0)
#define UNITYENGINE_PROBUILDER_VERTEX__CTOR_OFFSET UNITYSDK_OFFSET(0x19241FB0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Vertex_TypeDefinitionIndex = 43260;

	class Vertex : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 m_Position; // 0x10
		::UnityEngine::Color m_Color; // 0x1C
		::UnityEngine::Vector3 m_Normal; // 0x2C
		::UnityEngine::Vector4 m_Tangent; // 0x38
		::UnityEngine::Vector2 m_UV0; // 0x48
		::UnityEngine::Vector2 m_UV2; // 0x50
		::UnityEngine::Vector4 m_UV3; // 0x58
		::UnityEngine::Vector4 m_UV4; // 0x68
		::UnityEngine::ProBuilder::MeshArrays m_Attributes; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UnityEngine::ProBuilder::Vertex* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX__CTOR_1_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SET_POSITION_OFFSET))(this, a1);
		}

		::UnityEngine::Color get_color()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GET_COLOR_OFFSET))(this);
		}

		::System::Void set_color(::UnityEngine::Color a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SET_COLOR_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_normal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GET_NORMAL_OFFSET))(this);
		}

		::System::Void set_normal(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SET_NORMAL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 get_tangent()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GET_TANGENT_OFFSET))(this);
		}

		::System::Void set_tangent(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SET_TANGENT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_uv0()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GET_UV0_OFFSET))(this);
		}

		::System::Void set_uv0(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SET_UV0_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 get_uv2()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GET_UV2_OFFSET))(this);
		}

		::System::Void set_uv2(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SET_UV2_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 get_uv3()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GET_UV3_OFFSET))(this);
		}

		::System::Void set_uv3(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SET_UV3_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 get_uv4()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GET_UV4_OFFSET))(this);
		}

		::System::Void set_uv4(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SET_UV4_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::MeshArrays get_attributes()
		{
			return ((::UnityEngine::ProBuilder::MeshArrays(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Boolean HasArrays(::UnityEngine::ProBuilder::MeshArrays a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::MeshArrays))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_HASARRAYS_OFFSET))(this, a1);
		}

		::System::Boolean get_hasPosition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GET_HASPOSITION_OFFSET))(this);
		}

		::System::Void set_hasPosition(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SET_HASPOSITION_OFFSET))(this, a1);
		}

		::System::Boolean get_hasColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GET_HASCOLOR_OFFSET))(this);
		}

		::System::Void set_hasColor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SET_HASCOLOR_OFFSET))(this, a1);
		}

		::System::Boolean get_hasNormal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GET_HASNORMAL_OFFSET))(this);
		}

		::System::Void set_hasNormal(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SET_HASNORMAL_OFFSET))(this, a1);
		}

		::System::Boolean get_hasTangent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GET_HASTANGENT_OFFSET))(this);
		}

		::System::Void set_hasTangent(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SET_HASTANGENT_OFFSET))(this, a1);
		}

		::System::Boolean get_hasUV0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GET_HASUV0_OFFSET))(this);
		}

		::System::Void set_hasUV0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SET_HASUV0_OFFSET))(this, a1);
		}

		::System::Boolean get_hasUV2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GET_HASUV2_OFFSET))(this);
		}

		::System::Void set_hasUV2(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SET_HASUV2_OFFSET))(this, a1);
		}

		::System::Boolean get_hasUV3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GET_HASUV3_OFFSET))(this);
		}

		::System::Void set_hasUV3(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SET_HASUV3_OFFSET))(this, a1);
		}

		::System::Boolean get_hasUV4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GET_HASUV4_OFFSET))(this);
		}

		::System::Void set_hasUV4(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SET_HASUV4_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::UnityEngine::ProBuilder::Vertex* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Boolean Equals_2(::UnityEngine::ProBuilder::Vertex* a1, ::UnityEngine::ProBuilder::MeshArrays a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::ProBuilder::MeshArrays))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_EQUALS_2_OFFSET))(this, a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::ProBuilder::Vertex* a1, ::UnityEngine::ProBuilder::Vertex* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::ProBuilder::Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::ProBuilder::Vertex* a1, ::UnityEngine::ProBuilder::Vertex* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::ProBuilder::Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ProBuilder::Vertex* op_Addition(::UnityEngine::ProBuilder::Vertex* a1, ::UnityEngine::ProBuilder::Vertex* a2)
		{
			return ((::UnityEngine::ProBuilder::Vertex*(*)(::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::ProBuilder::Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_OP_ADDITION_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ProBuilder::Vertex* Add(::UnityEngine::ProBuilder::Vertex* a1, ::UnityEngine::ProBuilder::Vertex* a2)
		{
			return ((::UnityEngine::ProBuilder::Vertex*(*)(::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::ProBuilder::Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_ADD_OFFSET))(a1, a2);
		}

		::System::Void Add_1(::UnityEngine::ProBuilder::Vertex* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_ADD_1_OFFSET))(this, a1);
		}

		static ::UnityEngine::ProBuilder::Vertex* op_Subtraction(::UnityEngine::ProBuilder::Vertex* a1, ::UnityEngine::ProBuilder::Vertex* a2)
		{
			return ((::UnityEngine::ProBuilder::Vertex*(*)(::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::ProBuilder::Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_OP_SUBTRACTION_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ProBuilder::Vertex* Subtract(::UnityEngine::ProBuilder::Vertex* a1, ::UnityEngine::ProBuilder::Vertex* a2)
		{
			return ((::UnityEngine::ProBuilder::Vertex*(*)(::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::ProBuilder::Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SUBTRACT_OFFSET))(a1, a2);
		}

		::System::Void Subtract_1(::UnityEngine::ProBuilder::Vertex* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SUBTRACT_1_OFFSET))(this, a1);
		}

		static ::UnityEngine::ProBuilder::Vertex* op_Multiply(::UnityEngine::ProBuilder::Vertex* a1, ::System::Single a2)
		{
			return ((::UnityEngine::ProBuilder::Vertex*(*)(::UnityEngine::ProBuilder::Vertex*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_OP_MULTIPLY_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ProBuilder::Vertex* Multiply(::UnityEngine::ProBuilder::Vertex* a1, ::System::Single a2)
		{
			return ((::UnityEngine::ProBuilder::Vertex*(*)(::UnityEngine::ProBuilder::Vertex*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_MULTIPLY_OFFSET))(a1, a2);
		}

		::System::Void Multiply_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_MULTIPLY_1_OFFSET))(this, a1);
		}

		static ::UnityEngine::ProBuilder::Vertex* op_Division(::UnityEngine::ProBuilder::Vertex* a1, ::System::Single a2)
		{
			return ((::UnityEngine::ProBuilder::Vertex*(*)(::UnityEngine::ProBuilder::Vertex*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_OP_DIVISION_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ProBuilder::Vertex* Divide(::UnityEngine::ProBuilder::Vertex* a1, ::System::Single a2)
		{
			return ((::UnityEngine::ProBuilder::Vertex*(*)(::UnityEngine::ProBuilder::Vertex*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_DIVIDE_OFFSET))(a1, a2);
		}

		::System::Void Divide_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_DIVIDE_1_OFFSET))(this, a1);
		}

		::System::Void Normalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_NORMALIZE_OFFSET))(this);
		}

		::System::String* ToString(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_TOSTRING_OFFSET))(this, a1);
		}

		static ::System::Void GetArrays(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* a1, ::Il2CppArray<::UnityEngine::Vector3>*& a2, ::Il2CppArray<::UnityEngine::Color>*& a3, ::Il2CppArray<::UnityEngine::Vector2>*& a4, ::Il2CppArray<::UnityEngine::Vector3>*& a5, ::Il2CppArray<::UnityEngine::Vector4>*& a6, ::Il2CppArray<::UnityEngine::Vector2>*& a7, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& a8, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& a9)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ::Il2CppArray<::UnityEngine::Vector3>*&, ::Il2CppArray<::UnityEngine::Color>*&, ::Il2CppArray<::UnityEngine::Vector2>*&, ::Il2CppArray<::UnityEngine::Vector3>*&, ::Il2CppArray<::UnityEngine::Vector4>*&, ::Il2CppArray<::UnityEngine::Vector2>*&, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*&, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GETARRAYS_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::Void GetArrays_1(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* a1, ::Il2CppArray<::UnityEngine::Vector3>*& a2, ::Il2CppArray<::UnityEngine::Color>*& a3, ::Il2CppArray<::UnityEngine::Vector2>*& a4, ::Il2CppArray<::UnityEngine::Vector3>*& a5, ::Il2CppArray<::UnityEngine::Vector4>*& a6, ::Il2CppArray<::UnityEngine::Vector2>*& a7, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& a8, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& a9, ::UnityEngine::ProBuilder::MeshArrays a10)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ::Il2CppArray<::UnityEngine::Vector3>*&, ::Il2CppArray<::UnityEngine::Color>*&, ::Il2CppArray<::UnityEngine::Vector2>*&, ::Il2CppArray<::UnityEngine::Vector3>*&, ::Il2CppArray<::UnityEngine::Vector4>*&, ::Il2CppArray<::UnityEngine::Vector2>*&, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*&, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*&, ::UnityEngine::ProBuilder::MeshArrays))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GETARRAYS_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
		}

		static ::System::Void SetMesh(::UnityEngine::Mesh* a1, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* a2)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SETMESH_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ProBuilder::Vertex* Average(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* a1, ::System::Collections::Generic::IList_1<::System::Int32>* a2)
		{
			return ((::UnityEngine::ProBuilder::Vertex*(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_AVERAGE_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ProBuilder::Vertex* Mix(::UnityEngine::ProBuilder::Vertex* a1, ::UnityEngine::ProBuilder::Vertex* a2, ::System::Single a3)
		{
			return ((::UnityEngine::ProBuilder::Vertex*(*)(::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::ProBuilder::Vertex*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_MIX_OFFSET))(a1, a2, a3);
		}
	};
}
