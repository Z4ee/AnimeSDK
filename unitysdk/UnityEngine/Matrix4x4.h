#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_MATRIX4X4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2112430)
#define UNITYENGINE_MATRIX4X4_EQUALS_OFFSET UNITYSDK_OFFSET(0x2112390)
#define UNITYENGINE_MATRIX4X4_GETCOLUMN_OFFSET UNITYSDK_OFFSET(0x21124C0)
#define UNITYENGINE_MATRIX4X4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2112190)
#define UNITYENGINE_MATRIX4X4_GETLOSSYSCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A1C300)
#define UNITYENGINE_MATRIX4X4_GETLOSSYSCALE_OFFSET UNITYSDK_OFFSET(0x2111F10)
#define UNITYENGINE_MATRIX4X4_GETROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A1C2A0)
#define UNITYENGINE_MATRIX4X4_GETROTATION_OFFSET UNITYSDK_OFFSET(0x2111EE0)
#define UNITYENGINE_MATRIX4X4_GETROW_OFFSET UNITYSDK_OFFSET(0x21124E0)
#define UNITYENGINE_MATRIX4X4_GET_IDENTITY_OFFSET UNITYSDK_OFFSET(0x18A1D9B0)
#define UNITYENGINE_MATRIX4X4_GET_INVERSE_OFFSET UNITYSDK_OFFSET(0x2112030)
#define UNITYENGINE_MATRIX4X4_GET_ISIDENTITY_OFFSET UNITYSDK_OFFSET(0x2111F50)
#define UNITYENGINE_MATRIX4X4_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x2112170)
#define UNITYENGINE_MATRIX4X4_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x2112150)
#define UNITYENGINE_MATRIX4X4_GET_LOSSYSCALE_OFFSET UNITYSDK_OFFSET(0x2111F10)
#define UNITYENGINE_MATRIX4X4_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x2111EE0)
#define UNITYENGINE_MATRIX4X4_GET_TRANSPOSE_OFFSET UNITYSDK_OFFSET(0x21120C0)
#define UNITYENGINE_MATRIX4X4_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x18A1D980)
#define UNITYENGINE_MATRIX4X4_INVERSE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A1C590)
#define UNITYENGINE_MATRIX4X4_INVERSE_OFFSET UNITYSDK_OFFSET(0x18A1C530)
#define UNITYENGINE_MATRIX4X4_ISIDENTITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A1C320)
#define UNITYENGINE_MATRIX4X4_ISIDENTITY_OFFSET UNITYSDK_OFFSET(0x2111F50)
#define UNITYENGINE_MATRIX4X4_MULTIPLYPOINT3X4_OFFSET UNITYSDK_OFFSET(0x20F1F00)
#define UNITYENGINE_MATRIX4X4_MULTIPLYPOINT_OFFSET UNITYSDK_OFFSET(0x20F1E20)
#define UNITYENGINE_MATRIX4X4_MULTIPLYVECTOR_OFFSET UNITYSDK_OFFSET(0x20F1F90)
#define UNITYENGINE_MATRIX4X4_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x18A1D1C0)
#define UNITYENGINE_MATRIX4X4_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x18A1D2C0)
#define UNITYENGINE_MATRIX4X4_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x18A1D150)
#define UNITYENGINE_MATRIX4X4_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x18A1CF80)
#define UNITYENGINE_MATRIX4X4_ORTHO_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A1C7E0)
#define UNITYENGINE_MATRIX4X4_ORTHO_OFFSET UNITYSDK_OFFSET(0x18A1C730)
#define UNITYENGINE_MATRIX4X4_PERSPECTIVE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A1C860)
#define UNITYENGINE_MATRIX4X4_PERSPECTIVE_OFFSET UNITYSDK_OFFSET(0x18A1C7F0)
#define UNITYENGINE_MATRIX4X4_ROTATE_OFFSET UNITYSDK_OFFSET(0x18A1D820)
#define UNITYENGINE_MATRIX4X4_SCALE_OFFSET UNITYSDK_OFFSET(0x18A1D790)
#define UNITYENGINE_MATRIX4X4_SETCOLUMN_OFFSET UNITYSDK_OFFSET(0x2112500)
#define UNITYENGINE_MATRIX4X4_SETROW_OFFSET UNITYSDK_OFFSET(0x21125A0)
#define UNITYENGINE_MATRIX4X4_SETTRS_OFFSET UNITYSDK_OFFSET(0x2111F70)
#define UNITYENGINE_MATRIX4X4_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x2112180)
#define UNITYENGINE_MATRIX4X4_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x2112160)
#define UNITYENGINE_MATRIX4X4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2112630)
#define UNITYENGINE_MATRIX4X4_TRANSLATE_OFFSET UNITYSDK_OFFSET(0x18A1D7D0)
#define UNITYENGINE_MATRIX4X4_TRANSPOSE_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A1C690)
#define UNITYENGINE_MATRIX4X4_TRANSPOSE_OFFSET UNITYSDK_OFFSET(0x18A1C630)
#define UNITYENGINE_MATRIX4X4_TRS_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A1C460)
#define UNITYENGINE_MATRIX4X4_TRS_OFFSET UNITYSDK_OFFSET(0x18A1C3F0)
#define UNITYENGINE_MATRIX4X4_VALIDTRS_INJECTED_OFFSET UNITYSDK_OFFSET(0x18A1C3E0)
#define UNITYENGINE_MATRIX4X4_VALIDTRS_OFFSET UNITYSDK_OFFSET(0x2111F60)
#define UNITYENGINE_MATRIX4X4__CCTOR_OFFSET UNITYSDK_OFFSET(0x18A1E3F0)
#define UNITYENGINE_MATRIX4X4__CTOR_OFFSET UNITYSDK_OFFSET(0x20F1C20)

namespace UnityEngine
{
	inline static constexpr unsigned int Matrix4x4_TypeDefinitionIndex = 4032;

	struct alignas(4) Matrix4x4
	{
		static ::UnityEngine::Matrix4x4* StaticGet_zeroMatrix()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(Matrix4x4_TypeDefinitionIndex)->GetStaticField(0x5A30);
		}
		static ::UnityEngine::Matrix4x4* StaticGet_identityMatrix()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(Matrix4x4_TypeDefinitionIndex)->GetStaticField(0x5A70);
		}
		::System::Single m00; // 0x10
		::System::Single m10; // 0x14
		::System::Single m20; // 0x18
		::System::Single m30; // 0x1C
		::System::Single m01; // 0x20
		::System::Single m11; // 0x24
		::System::Single m21; // 0x28
		::System::Single m31; // 0x2C
		::System::Single m02; // 0x30
		::System::Single m12; // 0x34
		::System::Single m22; // 0x38
		::System::Single m32; // 0x3C
		::System::Single m03; // 0x40
		::System::Single m13; // 0x44
		::System::Single m23; // 0x48
		::System::Single m33; // 0x4C

		/*
		::System::Void _ctor(::UnityEngine::Vector4 column0, ::UnityEngine::Vector4 column1, ::UnityEngine::Vector4 column2, ::UnityEngine::Vector4 column3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4__CTOR_OFFSET))(this, column0, column1, column2, column3);
		}
		*/

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4__CCTOR_OFFSET))();
		}

		/*
		::UnityEngine::Quaternion GetRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GETROTATION_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Vector3 GetLossyScale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GETLOSSYSCALE_OFFSET))(this);
		}
		*/

		::System::Boolean IsIdentity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_ISIDENTITY_OFFSET))(this);
		}

		/*
		::UnityEngine::Quaternion get_rotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GET_ROTATION_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Vector3 get_lossyScale()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GET_LOSSYSCALE_OFFSET))(this);
		}
		*/

		::System::Boolean get_isIdentity()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GET_ISIDENTITY_OFFSET))(this);
		}

		::System::Boolean ValidTRS()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_VALIDTRS_OFFSET))(this);
		}

		/*
		static ::UnityEngine::Matrix4x4 TRS(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion q, ::UnityEngine::Vector3 s)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_TRS_OFFSET))(pos, q, s);
		}
		*/

		/*
		::System::Void SetTRS(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion q, ::UnityEngine::Vector3 s)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_SETTRS_OFFSET))(this, pos, q, s);
		}
		*/

		static ::UnityEngine::Matrix4x4 Inverse(::UnityEngine::Matrix4x4 m)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_INVERSE_OFFSET))(m);
		}

		::UnityEngine::Matrix4x4 get_inverse()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GET_INVERSE_OFFSET))(this);
		}

		static ::UnityEngine::Matrix4x4 Transpose(::UnityEngine::Matrix4x4 m)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_TRANSPOSE_OFFSET))(m);
		}

		::UnityEngine::Matrix4x4 get_transpose()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GET_TRANSPOSE_OFFSET))(this);
		}

		static ::UnityEngine::Matrix4x4 Ortho(::System::Single left, ::System::Single right, ::System::Single bottom, ::System::Single top, ::System::Single zNear, ::System::Single zFar)
		{
			return ((::UnityEngine::Matrix4x4(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_ORTHO_OFFSET))(left, right, bottom, top, zNear, zFar);
		}

		static ::UnityEngine::Matrix4x4 Perspective(::System::Single fov, ::System::Single aspect, ::System::Single zNear, ::System::Single zFar)
		{
			return ((::UnityEngine::Matrix4x4(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_PERSPECTIVE_OFFSET))(fov, aspect, zNear, zFar);
		}

		::System::Single get_Item(::System::Int32 row, ::System::Int32 column)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GET_ITEM_OFFSET))(this, row, column);
		}

		::System::Void set_Item(::System::Int32 row, ::System::Int32 column, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_SET_ITEM_OFFSET))(this, row, column, value);
		}

		::System::Single get_Item_1(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GET_ITEM_1_OFFSET))(this, index);
		}

		::System::Void set_Item_1(::System::Int32 index, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_SET_ITEM_1_OFFSET))(this, index, value);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::UnityEngine::Matrix4x4 other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_EQUALS_1_OFFSET))(this, other);
		}

		static ::UnityEngine::Matrix4x4 op_Multiply(::UnityEngine::Matrix4x4 lhs, ::UnityEngine::Matrix4x4 rhs)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_OP_MULTIPLY_OFFSET))(lhs, rhs);
		}

		/*
		static ::UnityEngine::Vector4 op_Multiply_1(::UnityEngine::Matrix4x4 lhs, ::UnityEngine::Vector4 vector)
		{
			return ((::UnityEngine::Vector4(*)(::UnityEngine::Matrix4x4, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_OP_MULTIPLY_1_OFFSET))(lhs, vector);
		}
		*/

		static ::System::Boolean op_Equality(::UnityEngine::Matrix4x4 lhs, ::UnityEngine::Matrix4x4 rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::UnityEngine::Matrix4x4 lhs, ::UnityEngine::Matrix4x4 rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		/*
		::UnityEngine::Vector4 GetColumn(::System::Int32 index)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GETCOLUMN_OFFSET))(this, index);
		}
		*/

		/*
		::UnityEngine::Vector4 GetRow(::System::Int32 index)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GETROW_OFFSET))(this, index);
		}
		*/

		/*
		::System::Void SetColumn(::System::Int32 index, ::UnityEngine::Vector4 column)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_SETCOLUMN_OFFSET))(this, index, column);
		}
		*/

		/*
		::System::Void SetRow(::System::Int32 index, ::UnityEngine::Vector4 row)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_SETROW_OFFSET))(this, index, row);
		}
		*/

		/*
		::UnityEngine::Vector3 MultiplyPoint(::UnityEngine::Vector3 point)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_MULTIPLYPOINT_OFFSET))(this, point);
		}
		*/

		/*
		::UnityEngine::Vector3 MultiplyPoint3x4(::UnityEngine::Vector3 point)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_MULTIPLYPOINT3X4_OFFSET))(this, point);
		}
		*/

		/*
		::UnityEngine::Vector3 MultiplyVector(::UnityEngine::Vector3 vector)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_MULTIPLYVECTOR_OFFSET))(this, vector);
		}
		*/

		/*
		static ::UnityEngine::Matrix4x4 Scale(::UnityEngine::Vector3 vector)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_SCALE_OFFSET))(vector);
		}
		*/

		/*
		static ::UnityEngine::Matrix4x4 Translate(::UnityEngine::Vector3 vector)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_TRANSLATE_OFFSET))(vector);
		}
		*/

		/*
		static ::UnityEngine::Matrix4x4 Rotate(::UnityEngine::Quaternion q)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_ROTATE_OFFSET))(q);
		}
		*/

		static ::UnityEngine::Matrix4x4 get_zero()
		{
			return ((::UnityEngine::Matrix4x4(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GET_ZERO_OFFSET))();
		}

		static ::UnityEngine::Matrix4x4 get_identity()
		{
			return ((::UnityEngine::Matrix4x4(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GET_IDENTITY_OFFSET))();
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_TOSTRING_OFFSET))(this);
		}

		/*
		static ::System::Void GetRotation_Injected(::UnityEngine::Matrix4x4& _unity_self, ::UnityEngine::Quaternion& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GETROTATION_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		/*
		static ::System::Void GetLossyScale_Injected(::UnityEngine::Matrix4x4& _unity_self, ::UnityEngine::Vector3& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GETLOSSYSCALE_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

		static ::System::Boolean IsIdentity_Injected(::UnityEngine::Matrix4x4& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_ISIDENTITY_INJECTED_OFFSET))(_unity_self);
		}

		static ::System::Boolean ValidTRS_Injected(::UnityEngine::Matrix4x4& _unity_self)
		{
			return ((::System::Boolean(*)(::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_VALIDTRS_INJECTED_OFFSET))(_unity_self);
		}

		/*
		static ::System::Void TRS_Injected(::UnityEngine::Vector3& pos, ::UnityEngine::Quaternion& q, ::UnityEngine::Vector3& s, ::UnityEngine::Matrix4x4& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Vector3&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_TRS_INJECTED_OFFSET))(pos, q, s, ret);
		}
		*/

		static ::System::Void Inverse_Injected(::UnityEngine::Matrix4x4& m, ::UnityEngine::Matrix4x4& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_INVERSE_INJECTED_OFFSET))(m, ret);
		}

		static ::System::Void Transpose_Injected(::UnityEngine::Matrix4x4& m, ::UnityEngine::Matrix4x4& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_TRANSPOSE_INJECTED_OFFSET))(m, ret);
		}

		static ::System::Void Ortho_Injected(::System::Single left, ::System::Single right, ::System::Single bottom, ::System::Single top, ::System::Single zNear, ::System::Single zFar, ::UnityEngine::Matrix4x4& ret)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_ORTHO_INJECTED_OFFSET))(left, right, bottom, top, zNear, zFar, ret);
		}

		static ::System::Void Perspective_Injected(::System::Single fov, ::System::Single aspect, ::System::Single zNear, ::System::Single zFar, ::UnityEngine::Matrix4x4& ret)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_PERSPECTIVE_INJECTED_OFFSET))(fov, aspect, zNear, zFar, ret);
		}
	};
}
