#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D_EQUALS_OFFSET UNITYSDK_OFFSET(0x96F4F0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D_GETCOLUMN_OFFSET UNITYSDK_OFFSET(0x96F650)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x96F430)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D_GET_IDENTITY_OFFSET UNITYSDK_OFFSET(0x1C5F5740)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x96F2A0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x96F110)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1C5F56D0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D_INVERSE_OFFSET UNITYSDK_OFFSET(0x96F6F0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D_MULTIPLYPOINT_OFFSET UNITYSDK_OFFSET(0x96F660)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D_MULTIPLYVECTOR_OFFSET UNITYSDK_OFFSET(0x96F6B0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1C5F5170)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1C5F5110)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D_ROTATELH_OFFSET UNITYSDK_OFFSET(0x1C5F5670)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D_SCALE_OFFSET UNITYSDK_OFFSET(0x1C5F5630)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x96F360)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x96F1D0)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x96F710)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D_TRANSLATE_OFFSET UNITYSDK_OFFSET(0x1C5F5650)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5F5C00)
#define TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D__CTOR_OFFSET UNITYSDK_OFFSET(0x96F0E0)

namespace ToolBuddy::ThirdParty::VectorGraphics
{
	inline static constexpr unsigned int Matrix2D_TypeDefinitionIndex = 31107;

	struct alignas(4) Matrix2D
	{
		static ::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D* StaticGet_zeroMatrix()
		{
			return (::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D*)Il2CppClass::FromTypeDefinitionIndex(Matrix2D_TypeDefinitionIndex)->GetStaticField(0x7B70);
		}
		static ::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D* StaticGet_identityMatrix()
		{
			return (::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D*)Il2CppClass::FromTypeDefinitionIndex(Matrix2D_TypeDefinitionIndex)->GetStaticField(0x7B88);
		}
		::System::Single m00; // 0x10
		::System::Single m10; // 0x14
		::System::Single m01; // 0x18
		::System::Single m11; // 0x1C
		::System::Single m02; // 0x20
		::System::Single m12; // 0x24

		/*
		::System::Void _ctor(::UnityEngine::Vector2 column0, ::UnityEngine::Vector2 column1, ::UnityEngine::Vector2 column2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D__CTOR_OFFSET))(this, column0, column1, column2);
		}
		*/

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D__CCTOR_OFFSET))();
		}

		::System::Single get_Item(::System::Int32 row, ::System::Int32 column)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D_GET_ITEM_OFFSET))(this, row, column);
		}

		::System::Void set_Item(::System::Int32 row, ::System::Int32 column, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D_SET_ITEM_OFFSET))(this, row, column, value);
		}

		::System::Single get_Item_1(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D_GET_ITEM_1_OFFSET))(this, index);
		}

		::System::Void set_Item_1(::System::Int32 index, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D_SET_ITEM_1_OFFSET))(this, index, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D_EQUALS_OFFSET))(this, other);
		}

		static ::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D op_Multiply(::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D lhs, ::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D rhs)
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D(*)(::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D, ::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D_OP_MULTIPLY_OFFSET))(lhs, rhs);
		}

		/*
		static ::UnityEngine::Vector2 op_Multiply_1(::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D lhs, ::UnityEngine::Vector2 vector)
		{
			return ((::UnityEngine::Vector2(*)(::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D_OP_MULTIPLY_1_OFFSET))(lhs, vector);
		}
		*/

		/*
		::UnityEngine::Vector2 GetColumn(::System::Int32 index)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D_GETCOLUMN_OFFSET))(this, index);
		}
		*/

		/*
		::UnityEngine::Vector2 MultiplyPoint(::UnityEngine::Vector2 point)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D_MULTIPLYPOINT_OFFSET))(this, point);
		}
		*/

		/*
		::UnityEngine::Vector2 MultiplyVector(::UnityEngine::Vector2 vector)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D_MULTIPLYVECTOR_OFFSET))(this, vector);
		}
		*/

		::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D Inverse()
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D_INVERSE_OFFSET))(this);
		}

		/*
		static ::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D Scale(::UnityEngine::Vector2 vector)
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D_SCALE_OFFSET))(vector);
		}
		*/

		/*
		static ::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D Translate(::UnityEngine::Vector2 vector)
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D_TRANSLATE_OFFSET))(vector);
		}
		*/

		static ::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D RotateLH(::System::Single angleRadians)
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D(*)(::System::Single))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D_ROTATELH_OFFSET))(angleRadians);
		}

		static ::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D get_zero()
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D(*)())((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D_GET_ZERO_OFFSET))();
		}

		static ::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D get_identity()
		{
			return ((::ToolBuddy::ThirdParty::VectorGraphics::Matrix2D(*)())((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D_GET_IDENTITY_OFFSET))();
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TOOLBUDDY_THIRDPARTY_VECTORGRAPHICS_MATRIX2D_TOSTRING_OFFSET))(this);
		}
	};
}
