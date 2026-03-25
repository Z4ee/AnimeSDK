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

#define UNITYENGINE_PROBUILDER_VERTEX_ADD_1_OFFSET UNITYSDK_OFFSET(0x188B4CE0)
#define UNITYENGINE_PROBUILDER_VERTEX_ADD_OFFSET UNITYSDK_OFFSET(0x188B4C70)
#define UNITYENGINE_PROBUILDER_VERTEX_AVERAGE_OFFSET UNITYSDK_OFFSET(0x188B7340)
#define UNITYENGINE_PROBUILDER_VERTEX_DIVIDE_1_OFFSET UNITYSDK_OFFSET(0x188B53A0)
#define UNITYENGINE_PROBUILDER_VERTEX_DIVIDE_OFFSET UNITYSDK_OFFSET(0x188B52E0)
#define UNITYENGINE_PROBUILDER_VERTEX_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x188B4180)
#define UNITYENGINE_PROBUILDER_VERTEX_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x188B4450)
#define UNITYENGINE_PROBUILDER_VERTEX_EQUALS_OFFSET UNITYSDK_OFFSET(0x188B4120)
#define UNITYENGINE_PROBUILDER_VERTEX_GETARRAYS_1_OFFSET UNITYSDK_OFFSET(0x188B5C70)
#define UNITYENGINE_PROBUILDER_VERTEX_GETARRAYS_OFFSET UNITYSDK_OFFSET(0x188B5C30)
#define UNITYENGINE_PROBUILDER_VERTEX_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x188B47D0)
#define UNITYENGINE_PROBUILDER_VERTEX_GET_ATTRIBUTES_OFFSET UNITYSDK_OFFSET(0x188B4090)
#define UNITYENGINE_PROBUILDER_VERTEX_GET_COLOR_OFFSET UNITYSDK_OFFSET(0x188B3F60)
#define UNITYENGINE_PROBUILDER_VERTEX_GET_HASCOLOR_OFFSET UNITYSDK_OFFSET(0x188B40B0)
#define UNITYENGINE_PROBUILDER_VERTEX_GET_HASNORMAL_OFFSET UNITYSDK_OFFSET(0x188B40C0)
#define UNITYENGINE_PROBUILDER_VERTEX_GET_HASPOSITION_OFFSET UNITYSDK_OFFSET(0x188B40A0)
#define UNITYENGINE_PROBUILDER_VERTEX_GET_HASTANGENT_OFFSET UNITYSDK_OFFSET(0x188B40D0)
#define UNITYENGINE_PROBUILDER_VERTEX_GET_HASUV0_OFFSET UNITYSDK_OFFSET(0x188B40E0)
#define UNITYENGINE_PROBUILDER_VERTEX_GET_HASUV2_OFFSET UNITYSDK_OFFSET(0x188B40F0)
#define UNITYENGINE_PROBUILDER_VERTEX_GET_HASUV3_OFFSET UNITYSDK_OFFSET(0x188B4100)
#define UNITYENGINE_PROBUILDER_VERTEX_GET_HASUV4_OFFSET UNITYSDK_OFFSET(0x188B4110)
#define UNITYENGINE_PROBUILDER_VERTEX_GET_NORMAL_OFFSET UNITYSDK_OFFSET(0x188B3F90)
#define UNITYENGINE_PROBUILDER_VERTEX_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x188B3F30)
#define UNITYENGINE_PROBUILDER_VERTEX_GET_TANGENT_OFFSET UNITYSDK_OFFSET(0x188B3FD0)
#define UNITYENGINE_PROBUILDER_VERTEX_GET_UV0_OFFSET UNITYSDK_OFFSET(0x188B4000)
#define UNITYENGINE_PROBUILDER_VERTEX_GET_UV2_OFFSET UNITYSDK_OFFSET(0x188B4020)
#define UNITYENGINE_PROBUILDER_VERTEX_GET_UV3_OFFSET UNITYSDK_OFFSET(0x188B4040)
#define UNITYENGINE_PROBUILDER_VERTEX_GET_UV4_OFFSET UNITYSDK_OFFSET(0x188B4060)
#define UNITYENGINE_PROBUILDER_VERTEX_HASARRAYS_OFFSET UNITYSDK_OFFSET(0x188AF8E0)
#define UNITYENGINE_PROBUILDER_VERTEX_MIX_OFFSET UNITYSDK_OFFSET(0x188B83E0)
#define UNITYENGINE_PROBUILDER_VERTEX_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x188B51C0)
#define UNITYENGINE_PROBUILDER_VERTEX_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x188B5100)
#define UNITYENGINE_PROBUILDER_VERTEX_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x188B5400)
#define UNITYENGINE_PROBUILDER_VERTEX_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x188B4C00)
#define UNITYENGINE_PROBUILDER_VERTEX_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x188B5220)
#define UNITYENGINE_PROBUILDER_VERTEX_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x188B4BB0)
#define UNITYENGINE_PROBUILDER_VERTEX_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x188B4BD0)
#define UNITYENGINE_PROBUILDER_VERTEX_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x188B5040)
#define UNITYENGINE_PROBUILDER_VERTEX_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x188B4E20)
#define UNITYENGINE_PROBUILDER_VERTEX_SETMESH_OFFSET UNITYSDK_OFFSET(0x188B69A0)
#define UNITYENGINE_PROBUILDER_VERTEX_SET_COLOR_OFFSET UNITYSDK_OFFSET(0x188AF910)
#define UNITYENGINE_PROBUILDER_VERTEX_SET_HASCOLOR_OFFSET UNITYSDK_OFFSET(0x188B3F70)
#define UNITYENGINE_PROBUILDER_VERTEX_SET_HASNORMAL_OFFSET UNITYSDK_OFFSET(0x188B3FB0)
#define UNITYENGINE_PROBUILDER_VERTEX_SET_HASPOSITION_OFFSET UNITYSDK_OFFSET(0x188B3F50)
#define UNITYENGINE_PROBUILDER_VERTEX_SET_HASTANGENT_OFFSET UNITYSDK_OFFSET(0x188B3FE0)
#define UNITYENGINE_PROBUILDER_VERTEX_SET_HASUV0_OFFSET UNITYSDK_OFFSET(0x188B4010)
#define UNITYENGINE_PROBUILDER_VERTEX_SET_HASUV2_OFFSET UNITYSDK_OFFSET(0x188B4030)
#define UNITYENGINE_PROBUILDER_VERTEX_SET_HASUV3_OFFSET UNITYSDK_OFFSET(0x188B4050)
#define UNITYENGINE_PROBUILDER_VERTEX_SET_HASUV4_OFFSET UNITYSDK_OFFSET(0x188B4070)
#define UNITYENGINE_PROBUILDER_VERTEX_SET_NORMAL_OFFSET UNITYSDK_OFFSET(0x188AF920)
#define UNITYENGINE_PROBUILDER_VERTEX_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x188AF8F0)
#define UNITYENGINE_PROBUILDER_VERTEX_SET_TANGENT_OFFSET UNITYSDK_OFFSET(0x188AF940)
#define UNITYENGINE_PROBUILDER_VERTEX_SET_UV0_OFFSET UNITYSDK_OFFSET(0x188AF950)
#define UNITYENGINE_PROBUILDER_VERTEX_SET_UV2_OFFSET UNITYSDK_OFFSET(0x188AF960)
#define UNITYENGINE_PROBUILDER_VERTEX_SET_UV3_OFFSET UNITYSDK_OFFSET(0x188AF970)
#define UNITYENGINE_PROBUILDER_VERTEX_SET_UV4_OFFSET UNITYSDK_OFFSET(0x188AF980)
#define UNITYENGINE_PROBUILDER_VERTEX_SUBTRACT_1_OFFSET UNITYSDK_OFFSET(0x188B4F00)
#define UNITYENGINE_PROBUILDER_VERTEX_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x188B4E90)
#define UNITYENGINE_PROBUILDER_VERTEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x188B5760)
#define UNITYENGINE_PROBUILDER_VERTEX__CTOR_1_OFFSET UNITYSDK_OFFSET(0x188B4A70)
#define UNITYENGINE_PROBUILDER_VERTEX__CTOR_OFFSET UNITYSDK_OFFSET(0x188AF8D0)

namespace UnityEngine::ProBuilder
{
	inline static constexpr unsigned int Vertex_TypeDefinitionIndex = 34188;

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

		::System::Void _ctor_1(::UnityEngine::ProBuilder::Vertex* vertex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX__CTOR_1_OFFSET))(this, vertex);
		}

		::UnityEngine::Vector3 get_position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SET_POSITION_OFFSET))(this, value);
		}

		::UnityEngine::Color get_color()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GET_COLOR_OFFSET))(this);
		}

		::System::Void set_color(::UnityEngine::Color value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SET_COLOR_OFFSET))(this, value);
		}

		::UnityEngine::Vector3 get_normal()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GET_NORMAL_OFFSET))(this);
		}

		::System::Void set_normal(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SET_NORMAL_OFFSET))(this, value);
		}

		::UnityEngine::Vector4 get_tangent()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GET_TANGENT_OFFSET))(this);
		}

		::System::Void set_tangent(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SET_TANGENT_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_uv0()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GET_UV0_OFFSET))(this);
		}

		::System::Void set_uv0(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SET_UV0_OFFSET))(this, value);
		}

		::UnityEngine::Vector2 get_uv2()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GET_UV2_OFFSET))(this);
		}

		::System::Void set_uv2(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SET_UV2_OFFSET))(this, value);
		}

		::UnityEngine::Vector4 get_uv3()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GET_UV3_OFFSET))(this);
		}

		::System::Void set_uv3(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SET_UV3_OFFSET))(this, value);
		}

		::UnityEngine::Vector4 get_uv4()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GET_UV4_OFFSET))(this);
		}

		::System::Void set_uv4(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SET_UV4_OFFSET))(this, value);
		}

		::UnityEngine::ProBuilder::MeshArrays get_attributes()
		{
			return ((::UnityEngine::ProBuilder::MeshArrays(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GET_ATTRIBUTES_OFFSET))(this);
		}

		::System::Boolean HasArrays(::UnityEngine::ProBuilder::MeshArrays attribute)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::MeshArrays))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_HASARRAYS_OFFSET))(this, attribute);
		}

		::System::Boolean get_hasPosition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GET_HASPOSITION_OFFSET))(this);
		}

		::System::Void set_hasPosition(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SET_HASPOSITION_OFFSET))(this, value);
		}

		::System::Boolean get_hasColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GET_HASCOLOR_OFFSET))(this);
		}

		::System::Void set_hasColor(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SET_HASCOLOR_OFFSET))(this, value);
		}

		::System::Boolean get_hasNormal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GET_HASNORMAL_OFFSET))(this);
		}

		::System::Void set_hasNormal(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SET_HASNORMAL_OFFSET))(this, value);
		}

		::System::Boolean get_hasTangent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GET_HASTANGENT_OFFSET))(this);
		}

		::System::Void set_hasTangent(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SET_HASTANGENT_OFFSET))(this, value);
		}

		::System::Boolean get_hasUV0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GET_HASUV0_OFFSET))(this);
		}

		::System::Void set_hasUV0(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SET_HASUV0_OFFSET))(this, value);
		}

		::System::Boolean get_hasUV2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GET_HASUV2_OFFSET))(this);
		}

		::System::Void set_hasUV2(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SET_HASUV2_OFFSET))(this, value);
		}

		::System::Boolean get_hasUV3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GET_HASUV3_OFFSET))(this);
		}

		::System::Void set_hasUV3(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SET_HASUV3_OFFSET))(this, value);
		}

		::System::Boolean get_hasUV4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GET_HASUV4_OFFSET))(this);
		}

		::System::Void set_hasUV4(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SET_HASUV4_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::UnityEngine::ProBuilder::Vertex* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_EQUALS_1_OFFSET))(this, other);
		}

		::System::Boolean Equals_2(::UnityEngine::ProBuilder::Vertex* other, ::UnityEngine::ProBuilder::MeshArrays mask)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::ProBuilder::MeshArrays))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_EQUALS_2_OFFSET))(this, other, mask);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::UnityEngine::ProBuilder::Vertex* a, ::UnityEngine::ProBuilder::Vertex* b)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::ProBuilder::Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::ProBuilder::Vertex* a, ::UnityEngine::ProBuilder::Vertex* b)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::ProBuilder::Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_OP_INEQUALITY_OFFSET))(a, b);
		}

		static ::UnityEngine::ProBuilder::Vertex* op_Addition(::UnityEngine::ProBuilder::Vertex* a, ::UnityEngine::ProBuilder::Vertex* b)
		{
			return ((::UnityEngine::ProBuilder::Vertex*(*)(::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::ProBuilder::Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_OP_ADDITION_OFFSET))(a, b);
		}

		static ::UnityEngine::ProBuilder::Vertex* Add(::UnityEngine::ProBuilder::Vertex* a, ::UnityEngine::ProBuilder::Vertex* b)
		{
			return ((::UnityEngine::ProBuilder::Vertex*(*)(::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::ProBuilder::Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_ADD_OFFSET))(a, b);
		}

		::System::Void Add_1(::UnityEngine::ProBuilder::Vertex* b)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_ADD_1_OFFSET))(this, b);
		}

		static ::UnityEngine::ProBuilder::Vertex* op_Subtraction(::UnityEngine::ProBuilder::Vertex* a, ::UnityEngine::ProBuilder::Vertex* b)
		{
			return ((::UnityEngine::ProBuilder::Vertex*(*)(::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::ProBuilder::Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_OP_SUBTRACTION_OFFSET))(a, b);
		}

		static ::UnityEngine::ProBuilder::Vertex* Subtract(::UnityEngine::ProBuilder::Vertex* a, ::UnityEngine::ProBuilder::Vertex* b)
		{
			return ((::UnityEngine::ProBuilder::Vertex*(*)(::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::ProBuilder::Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SUBTRACT_OFFSET))(a, b);
		}

		::System::Void Subtract_1(::UnityEngine::ProBuilder::Vertex* b)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SUBTRACT_1_OFFSET))(this, b);
		}

		static ::UnityEngine::ProBuilder::Vertex* op_Multiply(::UnityEngine::ProBuilder::Vertex* a, ::System::Single value)
		{
			return ((::UnityEngine::ProBuilder::Vertex*(*)(::UnityEngine::ProBuilder::Vertex*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_OP_MULTIPLY_OFFSET))(a, value);
		}

		static ::UnityEngine::ProBuilder::Vertex* Multiply(::UnityEngine::ProBuilder::Vertex* a, ::System::Single value)
		{
			return ((::UnityEngine::ProBuilder::Vertex*(*)(::UnityEngine::ProBuilder::Vertex*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_MULTIPLY_OFFSET))(a, value);
		}

		::System::Void Multiply_1(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_MULTIPLY_1_OFFSET))(this, value);
		}

		static ::UnityEngine::ProBuilder::Vertex* op_Division(::UnityEngine::ProBuilder::Vertex* a, ::System::Single value)
		{
			return ((::UnityEngine::ProBuilder::Vertex*(*)(::UnityEngine::ProBuilder::Vertex*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_OP_DIVISION_OFFSET))(a, value);
		}

		static ::UnityEngine::ProBuilder::Vertex* Divide(::UnityEngine::ProBuilder::Vertex* a, ::System::Single value)
		{
			return ((::UnityEngine::ProBuilder::Vertex*(*)(::UnityEngine::ProBuilder::Vertex*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_DIVIDE_OFFSET))(a, value);
		}

		::System::Void Divide_1(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_DIVIDE_1_OFFSET))(this, value);
		}

		::System::Void Normalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_NORMALIZE_OFFSET))(this);
		}

		::System::String* ToString(::System::String* args)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_TOSTRING_OFFSET))(this, args);
		}

		static ::System::Void GetArrays(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::Il2CppArray<::UnityEngine::Vector3>*& position, ::Il2CppArray<::UnityEngine::Color>*& color, ::Il2CppArray<::UnityEngine::Vector2>*& uv0, ::Il2CppArray<::UnityEngine::Vector3>*& normal, ::Il2CppArray<::UnityEngine::Vector4>*& tangent, ::Il2CppArray<::UnityEngine::Vector2>*& uv2, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& uv3, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& uv4)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ::Il2CppArray<::UnityEngine::Vector3>*&, ::Il2CppArray<::UnityEngine::Color>*&, ::Il2CppArray<::UnityEngine::Vector2>*&, ::Il2CppArray<::UnityEngine::Vector3>*&, ::Il2CppArray<::UnityEngine::Vector4>*&, ::Il2CppArray<::UnityEngine::Vector2>*&, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*&, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*&))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GETARRAYS_OFFSET))(vertices, position, color, uv0, normal, tangent, uv2, uv3, uv4);
		}

		static ::System::Void GetArrays_1(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::Il2CppArray<::UnityEngine::Vector3>*& position, ::Il2CppArray<::UnityEngine::Color>*& color, ::Il2CppArray<::UnityEngine::Vector2>*& uv0, ::Il2CppArray<::UnityEngine::Vector3>*& normal, ::Il2CppArray<::UnityEngine::Vector4>*& tangent, ::Il2CppArray<::UnityEngine::Vector2>*& uv2, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& uv3, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*& uv4, ::UnityEngine::ProBuilder::MeshArrays attributes)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ::Il2CppArray<::UnityEngine::Vector3>*&, ::Il2CppArray<::UnityEngine::Color>*&, ::Il2CppArray<::UnityEngine::Vector2>*&, ::Il2CppArray<::UnityEngine::Vector3>*&, ::Il2CppArray<::UnityEngine::Vector4>*&, ::Il2CppArray<::UnityEngine::Vector2>*&, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*&, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*&, ::UnityEngine::ProBuilder::MeshArrays))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_GETARRAYS_1_OFFSET))(vertices, position, color, uv0, normal, tangent, uv2, uv3, uv4, attributes);
		}

		static ::System::Void SetMesh(::UnityEngine::Mesh* mesh, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_SETMESH_OFFSET))(mesh, vertices);
		}

		static ::UnityEngine::ProBuilder::Vertex* Average(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::System::Collections::Generic::IList_1<::System::Int32>* indexes)
		{
			return ((::UnityEngine::ProBuilder::Vertex*(*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ::System::Collections::Generic::IList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_AVERAGE_OFFSET))(vertices, indexes);
		}

		static ::UnityEngine::ProBuilder::Vertex* Mix(::UnityEngine::ProBuilder::Vertex* x, ::UnityEngine::ProBuilder::Vertex* y, ::System::Single weight)
		{
			return ((::UnityEngine::ProBuilder::Vertex*(*)(::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::ProBuilder::Vertex*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_VERTEX_MIX_OFFSET))(x, y, weight);
		}
	};
}
