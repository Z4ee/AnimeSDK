#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define UNITYENGINE_MATRIX4X4_DECOMPOSEPROJECTION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE6EE50)
#define UNITYENGINE_MATRIX4X4_DECOMPOSEPROJECTION_OFFSET UNITYSDK_OFFSET(0x947240)
#define UNITYENGINE_MATRIX4X4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x947560)
#define UNITYENGINE_MATRIX4X4_EQUALS_OFFSET UNITYSDK_OFFSET(0x947500)
#define UNITYENGINE_MATRIX4X4_FRUSTUM_1_OFFSET UNITYSDK_OFFSET(0x1AE6F530)
#define UNITYENGINE_MATRIX4X4_FRUSTUM_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE6F520)
#define UNITYENGINE_MATRIX4X4_FRUSTUM_OFFSET UNITYSDK_OFFSET(0x1AE6F470)
#define UNITYENGINE_MATRIX4X4_GETCOLUMN_OFFSET UNITYSDK_OFFSET(0x9475A0)
#define UNITYENGINE_MATRIX4X4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9474F0)
#define UNITYENGINE_MATRIX4X4_GETLOSSYSCALE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE6EDD0)
#define UNITYENGINE_MATRIX4X4_GETLOSSYSCALE_OFFSET UNITYSDK_OFFSET(0x9471F0)
#define UNITYENGINE_MATRIX4X4_GETROTATION_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE6ED70)
#define UNITYENGINE_MATRIX4X4_GETROTATION_OFFSET UNITYSDK_OFFSET(0x9471C0)
#define UNITYENGINE_MATRIX4X4_GETROW_OFFSET UNITYSDK_OFFSET(0x9475C0)
#define UNITYENGINE_MATRIX4X4_GET_DECOMPOSEPROJECTION_OFFSET UNITYSDK_OFFSET(0x947240)
#define UNITYENGINE_MATRIX4X4_GET_IDENTITY_OFFSET UNITYSDK_OFFSET(0x1AE706E0)
#define UNITYENGINE_MATRIX4X4_GET_INVERSE_OFFSET UNITYSDK_OFFSET(0x947360)
#define UNITYENGINE_MATRIX4X4_GET_ISIDENTITY_OFFSET UNITYSDK_OFFSET(0x947230)
#define UNITYENGINE_MATRIX4X4_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x9474D0)
#define UNITYENGINE_MATRIX4X4_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9474B0)
#define UNITYENGINE_MATRIX4X4_GET_LOSSYSCALE_OFFSET UNITYSDK_OFFSET(0x9471F0)
#define UNITYENGINE_MATRIX4X4_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0x9471C0)
#define UNITYENGINE_MATRIX4X4_GET_TRANSPOSE_OFFSET UNITYSDK_OFFSET(0x9473F0)
#define UNITYENGINE_MATRIX4X4_GET_ZERO_OFFSET UNITYSDK_OFFSET(0x1AE706B0)
#define UNITYENGINE_MATRIX4X4_INVERSE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE6F110)
#define UNITYENGINE_MATRIX4X4_INVERSE_OFFSET UNITYSDK_OFFSET(0x1AE6F0B0)
#define UNITYENGINE_MATRIX4X4_ISIDENTITY_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE6EDF0)
#define UNITYENGINE_MATRIX4X4_ISIDENTITY_OFFSET UNITYSDK_OFFSET(0x947230)
#define UNITYENGINE_MATRIX4X4_LOOKAT_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE6F460)
#define UNITYENGINE_MATRIX4X4_LOOKAT_OFFSET UNITYSDK_OFFSET(0x1AE6F3F0)
#define UNITYENGINE_MATRIX4X4_MULTIPLYPOINT3X4_OFFSET UNITYSDK_OFFSET(0x9477F0)
#define UNITYENGINE_MATRIX4X4_MULTIPLYPOINT_OFFSET UNITYSDK_OFFSET(0x947710)
#define UNITYENGINE_MATRIX4X4_MULTIPLYVECTOR_OFFSET UNITYSDK_OFFSET(0x947880)
#define UNITYENGINE_MATRIX4X4_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1AE6FF50)
#define UNITYENGINE_MATRIX4X4_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1AE70080)
#define UNITYENGINE_MATRIX4X4_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1AE6FEE0)
#define UNITYENGINE_MATRIX4X4_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1AE6FD10)
#define UNITYENGINE_MATRIX4X4_ORTHO_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE6F360)
#define UNITYENGINE_MATRIX4X4_ORTHO_OFFSET UNITYSDK_OFFSET(0x1AE6F2B0)
#define UNITYENGINE_MATRIX4X4_PERSPECTIVE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE6F3E0)
#define UNITYENGINE_MATRIX4X4_PERSPECTIVE_OFFSET UNITYSDK_OFFSET(0x1AE6F370)
#define UNITYENGINE_MATRIX4X4_ROTATE_OFFSET UNITYSDK_OFFSET(0x1AE70550)
#define UNITYENGINE_MATRIX4X4_SCALE_OFFSET UNITYSDK_OFFSET(0x1AE704C0)
#define UNITYENGINE_MATRIX4X4_SETCOLUMN_OFFSET UNITYSDK_OFFSET(0x9475E0)
#define UNITYENGINE_MATRIX4X4_SETROW_OFFSET UNITYSDK_OFFSET(0x947680)
#define UNITYENGINE_MATRIX4X4_SETTRS_OFFSET UNITYSDK_OFFSET(0x9472A0)
#define UNITYENGINE_MATRIX4X4_SET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x9474E0)
#define UNITYENGINE_MATRIX4X4_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9474C0)
#define UNITYENGINE_MATRIX4X4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x947900)
#define UNITYENGINE_MATRIX4X4_TRANSLATE_OFFSET UNITYSDK_OFFSET(0x1AE70500)
#define UNITYENGINE_MATRIX4X4_TRANSPOSE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE6F210)
#define UNITYENGINE_MATRIX4X4_TRANSPOSE_OFFSET UNITYSDK_OFFSET(0x1AE6F1B0)
#define UNITYENGINE_MATRIX4X4_TRS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE6EFE0)
#define UNITYENGINE_MATRIX4X4_TRS_OFFSET UNITYSDK_OFFSET(0x1AE6EF70)
#define UNITYENGINE_MATRIX4X4_VALIDTRS_INJECTED_OFFSET UNITYSDK_OFFSET(0x1AE6EF60)
#define UNITYENGINE_MATRIX4X4_VALIDTRS_OFFSET UNITYSDK_OFFSET(0x947290)
#define UNITYENGINE_MATRIX4X4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE710C0)
#define UNITYENGINE_MATRIX4X4__CTOR_OFFSET UNITYSDK_OFFSET(0x947480)

namespace UnityEngine
{
	inline static constexpr unsigned int Matrix4x4_TypeDefinitionIndex = 5299;

	struct alignas(4) Matrix4x4
	{
		static ::UnityEngine::Matrix4x4* StaticGet_zeroMatrix()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(Matrix4x4_TypeDefinitionIndex)->GetStaticField(0x14A0);
		}
		static ::UnityEngine::Matrix4x4* StaticGet_identityMatrix()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(Matrix4x4_TypeDefinitionIndex)->GetStaticField(0x14E0);
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
		::UnityEngine::FrustumPlanes DecomposeProjection()
		{
			return ((::UnityEngine::FrustumPlanes(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_DECOMPOSEPROJECTION_OFFSET))(this);
		}
		*/

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

		/*
		::UnityEngine::FrustumPlanes get_decomposeProjection()
		{
			return ((::UnityEngine::FrustumPlanes(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_GET_DECOMPOSEPROJECTION_OFFSET))(this);
		}
		*/

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

		/*
		static ::UnityEngine::Matrix4x4 LookAt(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to, ::UnityEngine::Vector3 up)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_LOOKAT_OFFSET))(from, to, up);
		}
		*/

		static ::UnityEngine::Matrix4x4 Frustum(::System::Single left, ::System::Single right, ::System::Single bottom, ::System::Single top, ::System::Single zNear, ::System::Single zFar)
		{
			return ((::UnityEngine::Matrix4x4(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_FRUSTUM_OFFSET))(left, right, bottom, top, zNear, zFar);
		}

		/*
		static ::UnityEngine::Matrix4x4 Frustum_1(::UnityEngine::FrustumPlanes fp)
		{
			return ((::UnityEngine::Matrix4x4(*)(::UnityEngine::FrustumPlanes))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_FRUSTUM_1_OFFSET))(fp);
		}
		*/

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

		/*
		static ::System::Void DecomposeProjection_Injected(::UnityEngine::Matrix4x4& _unity_self, ::UnityEngine::FrustumPlanes& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Matrix4x4&, ::UnityEngine::FrustumPlanes&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_DECOMPOSEPROJECTION_INJECTED_OFFSET))(_unity_self, ret);
		}
		*/

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

		/*
		static ::System::Void LookAt_Injected(::UnityEngine::Vector3& from, ::UnityEngine::Vector3& to, ::UnityEngine::Vector3& up, ::UnityEngine::Matrix4x4& ret)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_LOOKAT_INJECTED_OFFSET))(from, to, up, ret);
		}
		*/

		static ::System::Void Frustum_Injected(::System::Single left, ::System::Single right, ::System::Single bottom, ::System::Single top, ::System::Single zNear, ::System::Single zFar, ::UnityEngine::Matrix4x4& ret)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_MATRIX4X4_FRUSTUM_INJECTED_OFFSET))(left, right, bottom, top, zNear, zFar, ret);
		}
	};
}
